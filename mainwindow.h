#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardPaths>
#include <QScreen>
#include <QMessageBox>
#include <QQmlEngine>
#include <QQmlComponent>
#include <QQuickItem>
#include <QSqlTableModel>
#include <QQuickView>
#include <QFile>
#include <QGestureEvent>
#include <QObject>
#include <QStackedLayout>
#include <QPropertyAnimation>
#include <QtCharts>
#include <QChartView>
#include <QLineSeries>
#include "CustomDateTimeDelegate.h"
#include "CustomQSqlTableModel.h"
#include "dbmanager.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

typedef enum {
    enOPENED,
    enCLOSED
}tenSideMenuStatus;

class MainWindow : public QMainWindow{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_m_toolButton_Adicionar_clicked();

    void on_m_toolButton_AdicionarEscolher_clicked();

    void on_Filtrar_clicked();

    void on_m_pushButton_Drawer_clicked();

    void SideMenuAnimationFinished();

    void on_m_pushButton_GraficoPrecos_clicked();

    void on_pushButton_clicked();

    void on_QDate_clicked();

    void on_CalendarWidget_Changed(const QDate& date);

    void on_m_DateEdit_onClick();

    void on_m_DateEdit_userDateChanged(const QDate &date);

    void on_m_ComboBoxItem_HL_currentTextChanged(const QString &arg1);

    void on_m_ComboBoxPrice_HL_currentTextChanged(const QString &arg1);

    void on_m_ComboBoxLocal_HL_currentTextChanged(const QString &arg1);

    void on_m_ComboBox_Graph_TextChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
    /* Also present are two methods that form
     * the model and appearance TableView
     * */
    CustomQSqlTableModel  *model;
    QSortFilterProxyModel *m_proxyModel;
    QTableView *m_DialogTableView;
    CustomDateTimeDelegate *m_DateTimeDelegate;
    void setupModel(const QString &tableName, const QStringList &headers);
    void createUI(void);
    void InserirDadosDB(void);
    void InserirDadosDB(QString strItem, QString strLocal, QString strPreco);
    template<typename TItem> QList<TItem> LerDadosDB();
    template<typename TItem> QList<TItem>RemoveDuplicatesItemList(void);
    template<typename TItem> QList<TItem>RemoveDuplicatesPriceList(void);
    template<typename TItem> QList<TItem>RemoveDuplicatesLocalList(void);
    DBManager *db;
    QPropertyAnimation *m_AnimationSideMenu;
    void SideMenuAnimation(tenSideMenuStatus status);
    bool event(QEvent *event) override;
    bool gestureEvent(QHoverEvent *event);
    void swipeTriggered(QSwipeGesture* gesture);
    QPointF *m_StartPointDrawer, *m_EndPointDrawer, *m_CurrPointDrawer;
    int iHoverEventCnt;
    tenSideMenuStatus m_SideMenuStatus;
    QCalendarWidget *m_CalendarWidget;
    QComboBox *m_ComboBox_Graph;
    QChart *m_DialogQChart;
    QLineSeries *m_DialogSeries;
    QBarSeries *m_DialogBarSeries;
    QVXYModelMapper *m_DialogMapper;
    QVBarModelMapper *m_DialogBarMapper;
    QChartView *m_DialogChartView;
    QDateTimeAxis *m_axisX;
    QValueAxis *m_axisY;
    QLabel *m_labelSelectItem;
    QVBoxLayout *m_vlayoutSelectItem;
    QAbstractButton *m_bExit;
    qsizetype m_QtyOfItemsComboBox;


};
#endif // MAINWINDOW_H
