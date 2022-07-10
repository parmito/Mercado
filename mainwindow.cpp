#include "mainwindow.h"
#include "ui_mainwindow.h"

#define  QT_DEBUG

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->m_textEdit_Local->setAlignment(Qt::AlignmentFlag::AlignLeft | Qt::AlignmentFlag::AlignBottom);

    /* Findout Screen Size*/
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect  screenGeometry = screen->geometry();
    int height = screenGeometry.height();
    int width = screenGeometry.width();

    qDebug() << "Width" << width;
    qDebug() << "Height" << height;

    /* Create Database*/
    QString path = QStandardPaths::writableLocation( QStandardPaths::StandardLocation::DownloadLocation);
    qDebug() <<"Path:"<< path;

    /* Database constructor*/
    db = new DBManager(path);
    qDebug() << "Database constructor";

    /*QFile dfile("assets:/db/dbSqlite.db");
    if (dfile.exists())
    {
        dfile.copy("./dbSqlite.db");
        QFile::setPermissions("./dbSqlite.db",QFile::WriteOwner | QFile::ReadOwner);
    }
    db = new DBManager("./");*/



    QDateTime now = QDateTime::currentDateTime();
    QString datetime_format = "dd-MM-yyyy";
    QString strDateTime = now.toString(datetime_format);

    ui->m_label_DiaMesAno->setText(strDateTime);
    ui->m_label_DiaMesAno_Escolher->setText(strDateTime);

    this->setupModel(TABLE,
                     QStringList() << ("id  ")
                                   << ("Produtos        ")
                                   << ("Preços")
                                   << ("Dia                 ")
                                   << ("Local")
                     );

    /* Initialize the appearance of a table with data
     * */
    this->createUI();


    qDebug() << QLocale().name();
    ui->m_tableView_Today->setFrameStyle(QFrame::StyledPanel);
    ui->m_tableView_Today->setAutoFillBackground(true);
    /*ui->m_tableView_Today->setStyleSheet(   "QTableView{"
                                            "background: url(:/rc/android/assets/img/fruits.png);"
                                            "}");*/

    QDate today = QDate::currentDate();
    ui->m_DateEdit->setDate(today);

    /*
     *
     *  Qml Object
     *
     */
    /*QHBoxLayout *layout = new QHBoxLayout(this);
    QQuickView *qmlView = new QQuickView();
    qmlView->setSource(QUrl(QStringLiteral("qrc:/drawer.qml")));
    QWidget *container = QWidget::createWindowContainer(qmlView, this);
    ui->centralwidget->setLayout(layout);
    layout->addWidget(container);*/

    m_AnimationSideMenu = new QPropertyAnimation(ui->m_SideMenu_Frame, "size");
    m_AnimationSideMenu->setEasingCurve(QEasingCurve::InOutCubic);
    m_AnimationSideMenu->setDuration(500);
    /*QObject::connect(m_AnimationSideMenu,SIGNAL(stateChanged(int,int)),this,SLOT(SideMenuAnimationStarted()));*/
    QObject::connect(m_AnimationSideMenu,SIGNAL(finished()),this,SLOT(SideMenuAnimationFinished()));


    /*
     *
     *  Stecked Layout
     *
     */
    /*QStackedLayout *stackedLayout = new QStackedLayout;
    stackedLayout->setGeometry(QRect(0,0,200,735));
    stackedLayout->addWidget(ui->m_SideMenu_Frame);*/


    Qt::GestureType gesture(Qt::SwipeGesture);
    ui->centralwidget->grabGesture(gesture,Qt::GestureFlags());

    m_StartPointDrawer = new QPointF(0,0);
    m_EndPointDrawer = new QPointF(0,0);
    m_CurrPointDrawer = new QPointF(0,0);
    iHoverEventCnt = 0;

    QPixmap pixmap(":/rc/android/assets/img/drawerButton.jpg");
    QIcon ButtonIcon(pixmap);
    ui->m_pushButton_Drawer->setIcon(ButtonIcon);
    ui->m_pushButton_Drawer->setIconSize(pixmap.rect().size());

    m_CalendarWidget = new QCalendarWidget();

    QObject::connect(ui->m_DateEdit,SIGNAL(clicked()),this, SLOT(on_QDate_clicked()));

    /*QStringList strList((const QString)("*"));
    ui->m_ComboBoxItem_HL->insertItems(0,strList);
    ui->m_ComboBoxLocal_HL->insertItems(0,strList);
    ui->m_ComboBoxPrice_HL->insertItems(0,strList);*/

    QList<QString> strListResultItem,strListResultPrice,strListResultLocal;
    strListResultItem = RemoveDuplicatesItemList<QString>();
    strListResultLocal = RemoveDuplicatesLocalList<QString>();
    strListResultPrice = RemoveDuplicatesPriceList<QString>();

/*    ui->m_ComboBoxItem_HL->setEnabled(false);
    ui->m_ComboBoxPrice_HL->setEnabled(false);
    ui->m_ComboBoxLocal_HL->setEnabled(false);*/
    for(int i = 0; i < strListResultItem.size();i++)
    {
        ui->m_ComboBox_Item->addItem(strListResultItem.at(i));
        ui->m_ComboBoxItem_HL->addItem(strListResultItem.at(i));
    }

    for(int i = 0; i < strListResultLocal.size();i++)
    {
        ui->m_ComboBox_Local->addItem(strListResultLocal.at(i));
        ui->m_ComboBoxLocal_HL->addItem(strListResultLocal.at(i));
    }

    for(int i = 0; i < strListResultPrice.size();i++)
    {
        ui->m_ComboBox_Price->addItem(strListResultPrice.at(i));
        ui->m_ComboBoxPrice_HL->addItem(strListResultPrice.at(i));
    }


    /*ui->m_ComboBoxItem_HL->setEnabled(true);
    ui->m_ComboBoxPrice_HL->setEnabled(true);
    ui->m_ComboBoxLocal_HL->setEnabled(true);*/
}



/* SLOT for QPropertyAnimation*/
/*void MainWindow::SideMenuAnimationStarted()
{
    qDebug() <<" Side Menu Animation started:" << m_SideMenuStatus;
    switch(m_SideMenuStatus)
    {
    case enOPENED:
        ui->m_tabWidget_Main->setDisabled(true);
        ui->m_pushButton_Drawer->setVisible(false);
        break;

    case enCLOSED:
        break;
    }
}*/

/* SLOT for QPropertyAnimation*/
void MainWindow::SideMenuAnimationFinished()
{
    qDebug() <<" Side Menu Animation finished:" << m_SideMenuStatus;
    switch(m_SideMenuStatus)
    {
        case enOPENED:
            /*ui->m_label_Mercado->setVisible(true);*/
            break;

        case enCLOSED:
            ui->m_pushButton_Drawer->setVisible(true);
            /*ui->m_label_Mercado->setVisible(false);*/
            ui->m_tabWidget_Main->setDisabled(false);
            break;
    }
}

void MainWindow::SideMenuAnimation(tenSideMenuStatus status)
{
    m_AnimationSideMenu->stop();

    auto const current = ui->m_SideMenu_Frame->size();
    m_AnimationSideMenu->setStartValue(current);

    m_SideMenuStatus = status;
    switch(status)
    {
        case enOPENED:
        if (ui->m_SideMenu_Frame->width() < 200)
            {
                m_AnimationSideMenu->setEndValue(QSize(200, current.height()));
                m_AnimationSideMenu->start();
                m_EndPointDrawer->setX(200);
                iHoverEventCnt = 2;
                ui->m_tabWidget_Main->setDisabled(true);
                ui->m_pushButton_Drawer->setVisible(false);
            }
            break;

        case enCLOSED:
            if (ui->m_SideMenu_Frame->width() > 0)
            {                
                m_AnimationSideMenu->setEndValue(QSize(0, current.height()));
                m_AnimationSideMenu->start();
                m_StartPointDrawer->setX(0);
            }
            break;
    }
}


bool MainWindow::event(QEvent *event)
{
    QEvent::Type type = event->type();
    if (type == QEvent::HoverMove)
        return gestureEvent(static_cast<QHoverEvent*>(event));
    return QWidget::event(event);
}

bool MainWindow::gestureEvent(QHoverEvent *event)
{
    *m_CurrPointDrawer = event->position();

    switch(iHoverEventCnt)
    {
        case 0:
            /* First action to open*/
            if(m_CurrPointDrawer->x()== m_StartPointDrawer->x()){
                iHoverEventCnt++;
                m_StartPointDrawer->setX(m_CurrPointDrawer->x());
            }
        break;

        case 1:/* Second action to open*/
            if(m_CurrPointDrawer->x()> m_StartPointDrawer->x())
            {
                iHoverEventCnt++;
                this->SideMenuAnimation(enOPENED);
            }
            break;

        case 2:/* First action to close*/
            if(m_CurrPointDrawer->x() >= m_EndPointDrawer->x()){
                iHoverEventCnt++;
                m_EndPointDrawer->setX(m_CurrPointDrawer->x());
            }
            break;

        case 3:/* 2nd action to close*/
            if(m_CurrPointDrawer->x() < m_EndPointDrawer->x())
            {
                iHoverEventCnt = 0;
                this->SideMenuAnimation(enCLOSED);
            }
            break;
    }
    return true;
}

void MainWindow::swipeTriggered(QSwipeGesture* gesture)
{
    if (gesture->state() == Qt::GestureFinished) {
        if (gesture->horizontalDirection() == QSwipeGesture::Left
            || gesture->verticalDirection() == QSwipeGesture::Up) {
            qDebug() << "swipeTriggered(): swipe to previous";
            //this->SideMenuAnimation();
            //goPrevImage();
        } else {
            qDebug() << "swipeTriggered(): swipe to next";
            //goNextImage();
        }
        update();
    }

}
template<typename TItem> QList<TItem>MainWindow::RemoveDuplicatesItemList(void)
{
    QList<QString> strListResult;
    strListResult = db->getItemList();

    QVector<QString> vectListResult;
    vectListResult = strListResult.toVector();

    std::sort( vectListResult.begin(), vectListResult.end() );
    /* Remove Duplicates*/
    vectListResult.erase( std::unique(vectListResult.begin(), vectListResult.end() ), vectListResult.end() );
    strListResult = vectListResult.toList();

    return(strListResult);
}

template<typename TItem> QList<TItem>MainWindow::RemoveDuplicatesPriceList(void)
{
    QList<QString> strListResult;
    strListResult = db->getPriceList();

    QVector<QString> vectListResult;
    vectListResult = strListResult.toVector();

    std::sort( vectListResult.begin(), vectListResult.end() );
    /* Remove Duplicates*/
    vectListResult.erase( std::unique(vectListResult.begin(), vectListResult.end() ), vectListResult.end() );
    strListResult = vectListResult.toList();

    return(strListResult);
}

template<typename TItem> QList<TItem>MainWindow::RemoveDuplicatesLocalList(void)
{
    QList<QString> strListResult;
    strListResult = db->getLocalList();

    QVector<QString> vectListResult;
    vectListResult = strListResult.toVector();
    std::sort( vectListResult.begin(), vectListResult.end() );
    /* Remove Duplicates*/
    vectListResult.erase( std::unique(vectListResult.begin(), vectListResult.end() ), vectListResult.end() );
    strListResult = vectListResult.toList();

    return(strListResult);
}


/* Method for initializing data representation model
 * */
void MainWindow::setupModel(const QString &tableName, const QStringList &headers)
{
    qDebug() << "SetupModel";
    /* Initializes the data model representation with the installation name
     * in the database table, on which will be accessed in the table
     * */
    model = new CustomQSqlTableModel(this);
    model->setTable(tableName);

    /* Set the columns names in a table with sorted data
     * */
    for(int i = 0, j = 0; i < model->columnCount(); i++, j++){
        model->setHeaderData(i,Qt::Horizontal,headers[j]);
    }
    // Set Sort Ascending steering column data
    model->setSort(0,Qt::AscendingOrder);
}

void MainWindow::createUI()
{
    qDebug() << "createUI";
    ui->m_tableView_Today->setModel(model);     // We set the model on the TableView
    ui->m_tableView_Today->setColumnHidden(0, true);    // Hide the column id Records
    // Allow the selection of lines
    ui->m_tableView_Today->setSelectionBehavior(QAbstractItemView::SelectRows);
    // Set selection mode, only one row in table
    ui->m_tableView_Today->setSelectionMode(QAbstractItemView::SingleSelection);
    // Set the size of the columns by content
    ui->m_tableView_Today->resizeColumnsToContents();
    ui->m_tableView_Today->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->m_tableView_Today->horizontalHeader()->setStretchLastSection(true);

    ui->m_tableView_Today->setAlternatingRowColors(true);
    ui->m_tableView_Today->horizontalHeader()->setStyleSheet("QHeaderView{"
                                         "background-color: rgb(250, 115, 115);"
                                         "font-size: 16px;"
                                         "font-weight: bold;"
                                         "}");

    ui->m_tableView_Today->setStyleSheet("QTableView{"
                                         "background-color: rgb(250, 250, 115);"
                                         "alternate-background-color: rgb(250, 115, 115);"
                                         "font-size: 12px;"
                                         "}");

    /* Filtering SQLite data */
    QDateTime now = QDateTime::currentDateTime();
    QString sql_datetime_format = "dd-MM-yyyy";
    QString strSqlDateTime = now.toString(sql_datetime_format);
    QString strFilter("date=\'"+strSqlDateTime+"\'");

    model->setFilter(strFilter);
    model->select(); /* Fetches the data from the table */
}

void MainWindow::InserirDadosDB(QString strItem, QString strLocal, QString strPreco)
{
    bool boResult = false;    
    bool ok = true;
    if(ok == true)
    {
        if((strItem.size() >0) && (strPreco.size() > 0) &&  (strLocal.size() > 0))
        {
            boResult = db->addItem(strItem,strPreco,strLocal);
            if(boResult == true){
                QMessageBox msgBox;
                msgBox.setText("Itens inseridos corretamente!");
                msgBox.setIcon(QMessageBox::Information);
                msgBox.setButtonText(QMessageBox::AcceptRole,"OK!");
                msgBox.exec();
            }
        }
        else
        {
            QMessageBox msgWarning;
            msgWarning.setText("Atenção!\nExistem campos vazios,\nou com caracteres desconhecidos");
            msgWarning.setIcon(QMessageBox::Warning);
            msgWarning.setWindowTitle("Erro");
            msgWarning.exec();
        }
    }
    else
    {
        QMessageBox msgWarning;
        msgWarning.setText("Atenção!\nEntre com um número");
        msgWarning.setIcon(QMessageBox::Warning);
        msgWarning.setWindowTitle("Erro");
        msgWarning.exec();
    }
}

void MainWindow::on_m_toolButton_Adicionar_clicked()
{
    QString strItem = ui->m_textEdit_Item->toPlainText();
    QString strLocal = ui->m_textEdit_Local->toPlainText();
    QString strPreco = ui->m_textEdit_Preco->toPlainText();

    this->InserirDadosDB((strItem.trimmed()).toLower(), (strLocal.trimmed()).toLower(), (strPreco.trimmed()).toLower());
    ui->m_textEdit_Item->clear();
    ui->m_textEdit_Preco->clear();
    ui->m_ComboBox_Item->clear();

    ui->m_ComboBoxItem_HL->clear();
    ui->m_ComboBoxLocal_HL->clear();
    ui->m_ComboBoxPrice_HL->clear();

    QList<QString> strListResult;

    strListResult = RemoveDuplicatesItemList<QString>();
    ui->m_ComboBox_Item->clear();

    for(int i = 0; i < strListResult.size();i++)
    {
        ui->m_ComboBox_Item->addItem(strListResult.at(i));
        ui->m_ComboBoxItem_HL->addItem(strListResult.at(i));
    }

    strListResult.clear();
    strListResult = RemoveDuplicatesLocalList<QString>();
    ui->m_ComboBox_Local->clear();
    for(int i = 0; i < strListResult.size();i++)
    {
        ui->m_ComboBox_Local->addItem(strListResult.at(i));
        ui->m_ComboBoxLocal_HL->addItem(strListResult.at(i));
    }

    strListResult.clear();
    strListResult = RemoveDuplicatesPriceList<QString>();
    ui->m_ComboBox_Price->clear();    
    for(int i = 0; i < strListResult.size();i++)
    {
        ui->m_ComboBox_Price->addItem(strListResult.at(i));
        ui->m_ComboBoxPrice_HL->addItem(strListResult.at(i));
    }

    model->select(); /* Fetches the data from the table*/
}


void MainWindow::on_m_toolButton_AdicionarEscolher_clicked()
{
    QString strItem = ui->m_ComboBox_Item->currentText();
    QString strLocal = ui->m_ComboBox_Local->currentText();
    QString strPreco = ui->m_ComboBox_Price->currentText();

    this->InserirDadosDB((strItem.trimmed()).toLower(), (strLocal.trimmed()).toLower(), (strPreco.trimmed()).toLower());
    ui->m_textEdit_Item->clear();
    ui->m_textEdit_Preco->clear();

    ui->m_ComboBoxItem_HL->clear();
    ui->m_ComboBoxLocal_HL->clear();
    ui->m_ComboBoxPrice_HL->clear();

    QList<QString> strListResult;
    strListResult = RemoveDuplicatesItemList<QString>();
    ui->m_ComboBox_Item->clear();
    for(int i = 0; i < strListResult.size();i++)
    {
        ui->m_ComboBox_Item->addItem(strListResult.at(i));
        ui->m_ComboBoxItem_HL->addItem(strListResult.at(i));
    }

    strListResult.clear();
    strListResult = RemoveDuplicatesLocalList<QString>();
    ui->m_ComboBox_Local->clear();
    for(int i = 0; i < strListResult.size();i++)
    {
        ui->m_ComboBox_Local->addItem(strListResult.at(i));
        ui->m_ComboBoxLocal_HL->addItem(strListResult.at(i));
    }

    strListResult.clear();
    strListResult = RemoveDuplicatesPriceList<QString>();
    ui->m_ComboBox_Price->clear();
    for(int i = 0; i < strListResult.size();i++)
    {
        ui->m_ComboBox_Price->addItem(strListResult.at(i));
        ui->m_ComboBoxPrice_HL->addItem(strListResult.at(i));
    }

    model->select(); // Fetches the data from the table
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Filtrar_clicked()
{
    std::map<QString,QString> qstrMapSqlFilter;
    QString strSqliteFilterClause;

    qDebug()<< "on_Filtrar_clicked()";

    qstrMapSqlFilter.clear();

    qstrMapSqlFilter.insert({"item",ui->m_ComboBoxItem_HL->currentText()});
    qstrMapSqlFilter.insert({"price",ui->m_ComboBoxPrice_HL->currentText()});
    qstrMapSqlFilter.insert({"local",ui->m_ComboBoxLocal_HL->currentText()});
    QString strDate = ui->m_DateEdit->text();
    qstrMapSqlFilter.insert({"date",strDate});

    for (const auto& [key, value] : qstrMapSqlFilter)
    {
        qDebug()<< '[' << key << "] = " << value << "; ";
    }
    strSqliteFilterClause.append("date=\'"+qstrMapSqlFilter["date"]+"\'");
    if(ui->m_ComboBoxItem_HL->currentText() != "*" && ui->m_ComboBoxItem_HL->currentText() != "")
    {
        strSqliteFilterClause.append(" AND " "item=\'"+qstrMapSqlFilter["item"]+"\'");
    }
    if(ui->m_ComboBoxLocal_HL->currentText() != "*" && ui->m_ComboBoxLocal_HL->currentText() != "")
    {
        strSqliteFilterClause.append(" AND " "local=\'"+qstrMapSqlFilter["local"]+"\'");
    }
    if(ui->m_ComboBoxPrice_HL->currentText() != "*" && ui->m_ComboBoxPrice_HL->currentText() != "")
    {
        strSqliteFilterClause.append(" AND price=\'" + ui->m_ComboBoxPrice_HL->currentText()+"\'");
    }
    qDebug() << strSqliteFilterClause;

    model->setFilter(strSqliteFilterClause);   
    model->select(); /* Fetches the data from the table*/
}

void MainWindow::on_m_pushButton_Drawer_clicked()
{
    this->SideMenuAnimation(enOPENED);
}


void MainWindow::on_m_pushButton_GraficoPrecos_clicked()
{
    QList<QString> strListResult;
    QDialog *Dialog = new QDialog();
    Dialog->setFixedSize(320,300);
    QLabel *label = new QLabel("Selecione o Item");
    QVBoxLayout *vlayout = new QVBoxLayout;
    QAbstractButton *bExit = new QPushButton("Voltar");

    m_ComboBox_Graph = new QComboBox();

    m_ComboBox_Graph->setStyleSheet("  width: 40%;\
                                background-color: #3ab7c9;\
                                border-radius: 8px;\
                                color: black;\
                                padding: 4px 4px;\
                                font: 24pt \"Ubuntu Thin\"");

    strListResult = RemoveDuplicatesItemList<QString>();
    m_ComboBox_Graph->clear();
    for(int i = 0; i < strListResult.size();i++)
    {
        m_ComboBox_Graph->addItem(strListResult.at(i));
    }


    QObject::connect(m_ComboBox_Graph,SIGNAL(currentTextChanged(const QString)),this,SLOT(on_m_ComboBox_Graph_TextChanged(const QString)));


    QLineSeries *series = new QLineSeries();
    series->append(0, 6);
    series->append(2, 4);
    series->append(3, 8);
    series->append(7, 4);
    series->append(10, 5);
    QChart *chart = new QChart();
    chart->legend()->hide();
    chart->addSeries(series);
    chart->createDefaultAxes();
    chart->setTitle("Simple line chart example");
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    vlayout->addWidget(label);
    vlayout->addWidget(m_ComboBox_Graph);
    vlayout->addWidget(chartView);    
    vlayout->addWidget(bExit);
    Dialog->setLayout(vlayout);
    Dialog->show();
    Dialog->connect(bExit,SIGNAL(clicked()),Dialog,SLOT(close()));
}


void MainWindow::on_m_ComboBox_Graph_TextChanged(const QString &arg1)
{
    QString strSqliteFilterClause;
    QList<QString> strListResult;

    qDebug() << "on_m_ComboBox_Graph_TextChanged";


    strSqliteFilterClause.append("date=\'*\'");
    if(m_ComboBox_Graph->currentText() != "*" && m_ComboBox_Graph->currentText() != "")
    {
        strSqliteFilterClause.append(" AND item=\'"+m_ComboBox_Graph->currentText()+"\'");
    }

    model->setFilter(strSqliteFilterClause);
    model->select();
}

void MainWindow::on_QDate_clicked()
{
    QDialog *m_Dialog = new QDialog();
    m_Dialog->setFixedSize(320,300);

    QVBoxLayout *m_VBoxLayout = new QVBoxLayout;


    m_CalendarWidget->setDateTextFormat (QDate(2020,1,1),QTextCharFormat());
    QAbstractButton *m_ExitButton = new QPushButton("Sair");

    m_VBoxLayout->addWidget(m_CalendarWidget);
    m_VBoxLayout->addWidget(m_ExitButton);

    m_Dialog->setLayout(m_VBoxLayout);
    m_Dialog->show();
    m_Dialog->connect(m_ExitButton,SIGNAL(clicked()),m_Dialog,SLOT(close()));        
    QObject::connect(m_CalendarWidget,SIGNAL(clicked(const QDate&)),this, SLOT(on_CalendarWidget_Changed(const QDate&)));

}

void MainWindow::on_CalendarWidget_Changed(const QDate& date)
{
    qDebug()<< "on_CalendarWidget_Changed";
    ui->m_DateEdit->setDate(date);
    this->on_Filtrar_clicked();
}

void MainWindow::on_m_ComboBoxItem_HL_currentTextChanged(const QString &arg1)
{
    qDebug()<< "on_m_ComboBoxItem_HL_currentTextChanged";
    this->on_Filtrar_clicked();
}


void MainWindow::on_m_ComboBoxPrice_HL_currentTextChanged(const QString &arg1)
{
    qDebug()<< "on_m_ComboBoxPrice_HL_currentTextChanged";
    this->on_Filtrar_clicked();
}


void MainWindow::on_m_ComboBoxLocal_HL_currentTextChanged(const QString &arg1)
{
    qDebug()<< "on_m_ComboBoxLocal_HL_currentTextChanged";
    this->on_Filtrar_clicked();

}

