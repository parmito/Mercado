/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QCustomSideFrame.h>
#include <QCustomTableView.h>
#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "QCustomDateEdit.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *m_tabWidget_Main;
    QWidget *m_Tab_Escolher;
    QGroupBox *groupBox_2;
    QToolButton *m_toolButton_AdicionarEscolher;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QComboBox *m_ComboBox_Local;
    QComboBox *m_ComboBox_Item;
    QComboBox *m_ComboBox_Price;
    QLabel *m_label_DiaMesAno_Escolher;
    QWidget *m_Tab_Editar;
    QGroupBox *groupBox;
    QTextEdit *m_textEdit_Local;
    QTextEdit *m_textEdit_Item;
    QTextEdit *m_textEdit_Preco;
    QToolButton *m_toolButton_Adicionar;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *m_label_DiaMesAno;
    QWidget *m_Tab_Hoje;
    QFrame *m_Frame_Hoje;
    QCustomTableView *m_tableView_Today;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QComboBox *m_ComboBoxItem_HL;
    QComboBox *m_ComboBoxPrice_HL;
    QCustomDateEdit *m_DateEdit;
    QComboBox *m_ComboBoxLocal_HL;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *m_LabelItem_HL;
    QLabel *m_LabelPrice_HL;
    QLabel *m_LabelDate_HL;
    QLabel *m_LabelLocal_HL;
    QLabel *m_Logo;
    QCustomSideFrame *m_SideMenu_Frame;
    QLabel *m_label_Mercado;
    QPushButton *m_pushButton_GraficoPrecos;
    QLabel *m_Logo_2;
    QPushButton *m_pushButton_Drawer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(375, 800);
        QFont font;
        font.setPointSize(14);
        font.setKerning(false);
        MainWindow->setFont(font);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setInputMethodHints(Qt::ImhDigitsOnly);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        m_tabWidget_Main = new QTabWidget(centralwidget);
        m_tabWidget_Main->setObjectName(QString::fromUtf8("m_tabWidget_Main"));
        m_tabWidget_Main->setGeometry(QRect(5, 80, 361, 1300));
        m_tabWidget_Main->setFont(font);
        m_Tab_Escolher = new QWidget();
        m_Tab_Escolher->setObjectName(QString::fromUtf8("m_Tab_Escolher"));
        QFont font1;
        font1.setPointSize(12);
        font1.setKerning(false);
        m_Tab_Escolher->setFont(font1);
        groupBox_2 = new QGroupBox(m_Tab_Escolher);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(5, 25, 350, 596));
        groupBox_2->setStyleSheet(QString::fromUtf8("background-color: #dddddd;\n"
"border-radius: 8px;\n"
"color: #444444;\n"
"font: 20pt \"Ubuntu Condensed\";\n"
"text-decoration: none;\n"
"margin: 4px 2px;\n"
"cursor: pointer;"));
        m_toolButton_AdicionarEscolher = new QToolButton(groupBox_2);
        m_toolButton_AdicionarEscolher->setObjectName(QString::fromUtf8("m_toolButton_AdicionarEscolher"));
        m_toolButton_AdicionarEscolher->setGeometry(QRect(90, 360, 160, 60));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Ubuntu Condensed")});
        font2.setPointSize(18);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setUnderline(false);
        font2.setStrikeOut(false);
        font2.setKerning(false);
        m_toolButton_AdicionarEscolher->setFont(font2);
        m_toolButton_AdicionarEscolher->setAutoFillBackground(false);
        m_toolButton_AdicionarEscolher->setStyleSheet(QString::fromUtf8("width: 40%;\n"
"background-color: #555555;\n"
"border-radius: 8px;\n"
"color: white;\n"
"font: 18pt \"Ubuntu Condensed\";\n"
"padding: 16px 32px;\n"
"text-decoration: none;\n"
"margin: 4px 2px;\n"
"cursor: pointer;"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(25, 125, 41, 21));
        label_5->setStyleSheet(QString::fromUtf8("font: 16pt \"Ubuntu Condensed\";\n"
"border-radius: 10px;\n"
"color: #444444;\n"
"text-decoration: none;\n"
"margin: 0px 0px;\n"
"cursor: pointer;"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(25, 15, 46, 30));
        label_6->setStyleSheet(QString::fromUtf8("font: 16pt \"Ubuntu Condensed\";\n"
"border-radius: 10px;\n"
"color: #444444;\n"
"text-decoration: none;\n"
"margin: 0px 0px;\n"
"cursor: pointer;"));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(25, 235, 21, 21));
        label_7->setStyleSheet(QString::fromUtf8("font: 16pt \"Ubuntu Condensed\";\n"
"border-radius: 10px;\n"
"color: #444444;\n"
"text-decoration: none;\n"
"margin: 0px 0px;\n"
"cursor: pointer;"));
        m_ComboBox_Local = new QComboBox(groupBox_2);
        m_ComboBox_Local->setObjectName(QString::fromUtf8("m_ComboBox_Local"));
        m_ComboBox_Local->setGeometry(QRect(20, 40, 310, 80));
        m_ComboBox_Local->setStyleSheet(QString::fromUtf8("width: 40%;\n"
"background-color: #fafa73;\n"
"border-radius: 8px;\n"
"color: black;\n"
"padding: 4px 4px;\n"
"font: 24pt \"Ubuntu Thin\";"));
        m_ComboBox_Local->setModelColumn(0);
        m_ComboBox_Item = new QComboBox(groupBox_2);
        m_ComboBox_Item->setObjectName(QString::fromUtf8("m_ComboBox_Item"));
        m_ComboBox_Item->setGeometry(QRect(20, 145, 310, 80));
        m_ComboBox_Item->setStyleSheet(QString::fromUtf8("width: 40%;\n"
"background-color: #3ab7c9;\n"
"selection-background-color: #fafa73;\n"
"combobox-popup: 0;\n"
"border-radius: 8px;\n"
"color: black;\n"
"padding: 4px 4px;\n"
"font: 24pt \"Ubuntu Thin\";"));
        m_ComboBox_Price = new QComboBox(groupBox_2);
        m_ComboBox_Price->setObjectName(QString::fromUtf8("m_ComboBox_Price"));
        m_ComboBox_Price->setGeometry(QRect(20, 255, 310, 80));
        m_ComboBox_Price->setStyleSheet(QString::fromUtf8("width: 40%;\n"
"background-color: #fa7373;\n"
"selection-background-color: #fafa73;\n"
"combobox-popup: 0;\n"
"border-radius: 8px;\n"
"color: black;\n"
"padding: 4px 4px;\n"
"font: 24pt \"Ubuntu Thin\";\n"
""));
        m_label_DiaMesAno_Escolher = new QLabel(groupBox_2);
        m_label_DiaMesAno_Escolher->setObjectName(QString::fromUtf8("m_label_DiaMesAno_Escolher"));
        m_label_DiaMesAno_Escolher->setGeometry(QRect(250, 10, 70, 20));
        m_label_DiaMesAno_Escolher->setStyleSheet(QString::fromUtf8("font: 14pt \"Ubuntu Condensed\";\n"
"border-radius: 10px;\n"
"color: #444444;\n"
"text-decoration: none;\n"
"margin: 0px 0px;\n"
"cursor: pointer;"));
        m_tabWidget_Main->addTab(m_Tab_Escolher, QString());
        m_Tab_Editar = new QWidget();
        m_Tab_Editar->setObjectName(QString::fromUtf8("m_Tab_Editar"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_Tab_Editar->sizePolicy().hasHeightForWidth());
        m_Tab_Editar->setSizePolicy(sizePolicy);
        m_Tab_Editar->setFont(font1);
        groupBox = new QGroupBox(m_Tab_Editar);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(5, 25, 350, 596));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: #dddddd;\n"
"border-radius: 8px;\n"
"color: #444444;\n"
"font: 20pt \"Ubuntu Condensed\";\n"
"text-decoration: none;\n"
"margin: 4px 2px;\n"
"cursor: pointer;"));
        m_textEdit_Local = new QTextEdit(groupBox);
        m_textEdit_Local->setObjectName(QString::fromUtf8("m_textEdit_Local"));
        m_textEdit_Local->setEnabled(true);
        m_textEdit_Local->setGeometry(QRect(20, 40, 310, 80));
        m_textEdit_Local->setMinimumSize(QSize(0, 0));
        m_textEdit_Local->setBaseSize(QSize(0, 0));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Ubuntu Thin")});
        font3.setPointSize(24);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setUnderline(false);
        font3.setStrikeOut(false);
        font3.setKerning(true);
        m_textEdit_Local->setFont(font3);
        m_textEdit_Local->setLayoutDirection(Qt::LeftToRight);
        m_textEdit_Local->setStyleSheet(QString::fromUtf8("width: 40%;\n"
"background-color: #fafa73;\n"
"border-radius: 8px;\n"
"color: black;\n"
"font: 24pt \"Ubuntu Thin\";"));
        m_textEdit_Local->setInputMethodHints(Qt::ImhNone);
        m_textEdit_Local->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        m_textEdit_Local->setTabChangesFocus(true);
        m_textEdit_Item = new QTextEdit(groupBox);
        m_textEdit_Item->setObjectName(QString::fromUtf8("m_textEdit_Item"));
        m_textEdit_Item->setGeometry(QRect(20, 145, 310, 80));
        m_textEdit_Item->setFont(font3);
        m_textEdit_Item->setStyleSheet(QString::fromUtf8("width: 40%;\n"
"background-color: #3ab7c9;\n"
"border-radius: 8px;\n"
"color: black;\n"
"font: 24pt \"Ubuntu Thin\";"));
        m_textEdit_Item->setInputMethodHints(Qt::ImhLatinOnly);
        m_textEdit_Item->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        m_textEdit_Item->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        m_textEdit_Item->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        m_textEdit_Preco = new QTextEdit(groupBox);
        m_textEdit_Preco->setObjectName(QString::fromUtf8("m_textEdit_Preco"));
        m_textEdit_Preco->setGeometry(QRect(20, 255, 310, 80));
        m_textEdit_Preco->setFont(font3);
        m_textEdit_Preco->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        m_textEdit_Preco->setStyleSheet(QString::fromUtf8("width: 40%;\n"
"background-color: #fa7373;\n"
"border-radius: 8px;\n"
"color: black;\n"
"font: 24pt \"Ubuntu Thin\";"));
        m_textEdit_Preco->setInputMethodHints(Qt::ImhFormattedNumbersOnly);
        m_textEdit_Preco->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        m_textEdit_Preco->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        m_toolButton_Adicionar = new QToolButton(groupBox);
        m_toolButton_Adicionar->setObjectName(QString::fromUtf8("m_toolButton_Adicionar"));
        m_toolButton_Adicionar->setGeometry(QRect(90, 360, 160, 60));
        m_toolButton_Adicionar->setFont(font2);
        m_toolButton_Adicionar->setAutoFillBackground(false);
        m_toolButton_Adicionar->setStyleSheet(QString::fromUtf8("width: 40%;\n"
"background-color: #555555;\n"
"border-radius: 8px;\n"
"color: white;\n"
"font: 18pt \"Ubuntu Condensed\";\n"
"padding: 16px 32px;\n"
"text-decoration: none;\n"
"margin: 4px 2px;\n"
"cursor: pointer;"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(25, 125, 41, 16));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Ubuntu Condensed")});
        font4.setPointSize(16);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setUnderline(false);
        font4.setStrikeOut(false);
        label_2->setFont(font4);
        label_2->setStyleSheet(QString::fromUtf8("font: 16pt \"Ubuntu Condensed\";\n"
"border-radius: 8px;\n"
"color: #444444;\n"
"text-decoration: none;\n"
"margin: 0px 0px;\n"
"cursor: pointer;"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(25, 15, 46, 26));
        label_3->setFont(font4);
        label_3->setStyleSheet(QString::fromUtf8("font: 16pt \"Ubuntu Condensed\";\n"
"border-radius: 8px;\n"
"color: #444444;\n"
"text-decoration: none;\n"
"margin: 0px 0px;\n"
"cursor: pointer;"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(25, 235, 21, 16));
        label_4->setFont(font4);
        label_4->setStyleSheet(QString::fromUtf8("font: 16pt \"Ubuntu Condensed\";\n"
"border-radius: 8px;\n"
"color: #444444;\n"
"text-decoration: none;\n"
"margin: 0px 0px;\n"
"cursor: pointer;"));
        m_label_DiaMesAno = new QLabel(groupBox);
        m_label_DiaMesAno->setObjectName(QString::fromUtf8("m_label_DiaMesAno"));
        m_label_DiaMesAno->setGeometry(QRect(250, 10, 70, 20));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Ubuntu Condensed")});
        font5.setPointSize(14);
        font5.setBold(false);
        font5.setItalic(false);
        font5.setUnderline(false);
        font5.setStrikeOut(false);
        m_label_DiaMesAno->setFont(font5);
        m_label_DiaMesAno->setStyleSheet(QString::fromUtf8("font: 14pt \"Ubuntu Condensed\";\n"
"border-radius: 10px;\n"
"color: #444444;\n"
"text-decoration: none;\n"
"margin: 0px 0px;\n"
"cursor: pointer;"));
        m_tabWidget_Main->addTab(m_Tab_Editar, QString());
        m_Tab_Hoje = new QWidget();
        m_Tab_Hoje->setObjectName(QString::fromUtf8("m_Tab_Hoje"));
        m_Frame_Hoje = new QFrame(m_Tab_Hoje);
        m_Frame_Hoje->setObjectName(QString::fromUtf8("m_Frame_Hoje"));
        m_Frame_Hoje->setGeometry(QRect(5, 25, 350, 596));
        m_Frame_Hoje->setStyleSheet(QString::fromUtf8("background-color: #dddddd;\n"
"border-radius: 8px;\n"
"color: #444444;\n"
"font: 20pt \"Ubuntu Condensed\";\n"
"text-decoration: none;\n"
"margin: 4px 2px;\n"
"cursor: pointer;"));
        m_tableView_Today = new QCustomTableView(m_Frame_Hoje);
        m_tableView_Today->setObjectName(QString::fromUtf8("m_tableView_Today"));
        m_tableView_Today->setGeometry(QRect(10, 104, 335, 471));
        m_tableView_Today->setAutoFillBackground(true);
        m_tableView_Today->setStyleSheet(QString::fromUtf8(""));
        m_tableView_Today->setFrameShape(QFrame::WinPanel);
        m_tableView_Today->setFrameShadow(QFrame::Raised);
        m_tableView_Today->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        m_tableView_Today->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);
        m_tableView_Today->setAutoScroll(true);
        m_tableView_Today->setAutoScrollMargin(10);
        m_tableView_Today->setEditTriggers(QAbstractItemView::NoEditTriggers);
        m_tableView_Today->setTabKeyNavigation(true);
        m_tableView_Today->setProperty("showDropIndicator", QVariant(true));
        m_tableView_Today->setDragDropOverwriteMode(false);
        m_tableView_Today->setAlternatingRowColors(true);
        m_tableView_Today->setSelectionMode(QAbstractItemView::SingleSelection);
        m_tableView_Today->setSelectionBehavior(QAbstractItemView::SelectRows);
        m_tableView_Today->setTextElideMode(Qt::ElideLeft);
        m_tableView_Today->setShowGrid(true);
        m_tableView_Today->setSortingEnabled(true);
        m_tableView_Today->setWordWrap(true);
        m_tableView_Today->setCornerButtonEnabled(true);
        m_tableView_Today->horizontalHeader()->setVisible(true);
        m_tableView_Today->horizontalHeader()->setCascadingSectionResizes(false);
        m_tableView_Today->horizontalHeader()->setMinimumSectionSize(20);
        m_tableView_Today->horizontalHeader()->setDefaultSectionSize(40);
        m_tableView_Today->horizontalHeader()->setHighlightSections(false);
        m_tableView_Today->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        m_tableView_Today->horizontalHeader()->setStretchLastSection(false);
        m_tableView_Today->verticalHeader()->setVisible(false);
        m_tableView_Today->verticalHeader()->setCascadingSectionResizes(false);
        m_tableView_Today->verticalHeader()->setDefaultSectionSize(40);
        m_tableView_Today->verticalHeader()->setHighlightSections(false);
        m_tableView_Today->verticalHeader()->setStretchLastSection(false);
        formLayoutWidget = new QWidget(m_Frame_Hoje);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(5, 1485, 215, 70));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        layoutWidget = new QWidget(m_Frame_Hoje);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(5, 30, 341, 58));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        m_ComboBoxItem_HL = new QComboBox(layoutWidget);
        m_ComboBoxItem_HL->setObjectName(QString::fromUtf8("m_ComboBoxItem_HL"));
        m_ComboBoxItem_HL->setMaximumSize(QSize(250, 120));
        m_ComboBoxItem_HL->setStyleSheet(QString::fromUtf8("width:40%;\n"
"height:40%;\n"
"background-color: #3ab7c9;\n"
"selection-background-color: #fafa73;\n"
"combobox-popup: 0;\n"
"border-radius: 4px;\n"
"color: black;\n"
"font: 12pt \"Ubuntu Thin\";\n"
"text-decoration: none;\n"
"margin: 4px 2px;\n"
"cursor: pointer;"));

        horizontalLayout->addWidget(m_ComboBoxItem_HL);

        m_ComboBoxPrice_HL = new QComboBox(layoutWidget);
        m_ComboBoxPrice_HL->setObjectName(QString::fromUtf8("m_ComboBoxPrice_HL"));
        m_ComboBoxPrice_HL->setMaximumSize(QSize(250, 120));
        m_ComboBoxPrice_HL->setStyleSheet(QString::fromUtf8("width:40%;\n"
"height:40%;\n"
"background-color: #fa7373;\n"
"selection-background-color: #fafa73;\n"
"combobox-popup: 0;\n"
"border-radius: 4px;\n"
"color: black;\n"
"font: 12pt \"Ubuntu Thin\";\n"
"text-decoration: none;\n"
"margin: 4px 2px;\n"
"cursor: pointer;"));

        horizontalLayout->addWidget(m_ComboBoxPrice_HL);

        m_DateEdit = new QCustomDateEdit(layoutWidget);
        m_DateEdit->setObjectName(QString::fromUtf8("m_DateEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_DateEdit->sizePolicy().hasHeightForWidth());
        m_DateEdit->setSizePolicy(sizePolicy1);
        m_DateEdit->setMaximumSize(QSize(80, 70));
        m_DateEdit->setStyleSheet(QString::fromUtf8("width: 40%;\n"
"height:40%;\n"
"background-color: #ca7373;\n"
"border-radius: 4px;\n"
"color: black;\n"
"font: 12pt \"Ubuntu Thin\";\n"
"text-decoration: none;\n"
"margin: 4px 2px;\n"
"cursor: pointer;"));
        m_DateEdit->setFrame(true);
        m_DateEdit->setButtonSymbols(QAbstractSpinBox::NoButtons);
        m_DateEdit->setDateTime(QDateTime(QDate(2020, 1, 1), QTime(0, 0, 0)));
        m_DateEdit->setMinimumDate(QDate(2020, 1, 1));

        horizontalLayout->addWidget(m_DateEdit);

        m_ComboBoxLocal_HL = new QComboBox(layoutWidget);
        m_ComboBoxLocal_HL->setObjectName(QString::fromUtf8("m_ComboBoxLocal_HL"));
        m_ComboBoxLocal_HL->setMaximumSize(QSize(250, 120));
        m_ComboBoxLocal_HL->setStyleSheet(QString::fromUtf8("width: 40%;\n"
"height:40%;\n"
"background-color: #fafa73;\n"
"selection-background-color: #fa7373;\n"
"combobox-popup: 0;\n"
"border-radius: 4px;\n"
"color: black;\n"
"font: 12pt \"Ubuntu Thin\";\n"
"text-decoration: none;\n"
"margin: 4px 2px;\n"
"cursor: pointer;"));

        horizontalLayout->addWidget(m_ComboBoxLocal_HL);

        layoutWidget1 = new QWidget(m_Frame_Hoje);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(5, 5, 341, 28));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        m_LabelItem_HL = new QLabel(layoutWidget1);
        m_LabelItem_HL->setObjectName(QString::fromUtf8("m_LabelItem_HL"));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Ubuntu")});
        font6.setPointSize(12);
        font6.setBold(false);
        font6.setItalic(false);
        font6.setUnderline(false);
        font6.setStrikeOut(false);
        m_LabelItem_HL->setFont(font6);
        m_LabelItem_HL->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";"));

        horizontalLayout_2->addWidget(m_LabelItem_HL);

        m_LabelPrice_HL = new QLabel(layoutWidget1);
        m_LabelPrice_HL->setObjectName(QString::fromUtf8("m_LabelPrice_HL"));
        m_LabelPrice_HL->setFont(font6);
        m_LabelPrice_HL->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";"));

        horizontalLayout_2->addWidget(m_LabelPrice_HL);

        m_LabelDate_HL = new QLabel(layoutWidget1);
        m_LabelDate_HL->setObjectName(QString::fromUtf8("m_LabelDate_HL"));
        m_LabelDate_HL->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";"));

        horizontalLayout_2->addWidget(m_LabelDate_HL);

        m_LabelLocal_HL = new QLabel(layoutWidget1);
        m_LabelLocal_HL->setObjectName(QString::fromUtf8("m_LabelLocal_HL"));
        m_LabelLocal_HL->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";"));

        horizontalLayout_2->addWidget(m_LabelLocal_HL);

        m_tabWidget_Main->addTab(m_Tab_Hoje, QString());
        m_Logo = new QLabel(centralwidget);
        m_Logo->setObjectName(QString::fromUtf8("m_Logo"));
        m_Logo->setGeometry(QRect(310, 15, 56, 56));
        m_Logo->setFrameShape(QFrame::Panel);
        m_Logo->setFrameShadow(QFrame::Sunken);
        m_Logo->setLineWidth(1);
        m_Logo->setPixmap(QPixmap(QString::fromUtf8(":/rc/android/assets/img/trolley.png")));
        m_Logo->setScaledContents(true);
        m_SideMenu_Frame = new QCustomSideFrame(centralwidget);
        m_SideMenu_Frame->setObjectName(QString::fromUtf8("m_SideMenu_Frame"));
        m_SideMenu_Frame->setGeometry(QRect(0, 0, 0, 728));
        sizePolicy.setHeightForWidth(m_SideMenu_Frame->sizePolicy().hasHeightForWidth());
        m_SideMenu_Frame->setSizePolicy(sizePolicy);
        m_SideMenu_Frame->setMinimumSize(QSize(0, 728));
        m_SideMenu_Frame->setMaximumSize(QSize(200, 728));
        m_SideMenu_Frame->setStyleSheet(QString::fromUtf8("background-color: #fafa73;"));
        m_SideMenu_Frame->setFrameShape(QFrame::StyledPanel);
        m_SideMenu_Frame->setFrameShadow(QFrame::Raised);
        m_label_Mercado = new QLabel(m_SideMenu_Frame);
        m_label_Mercado->setObjectName(QString::fromUtf8("m_label_Mercado"));
        m_label_Mercado->setGeometry(QRect(30, 670, 136, 51));
        m_label_Mercado->setStyleSheet(QString::fromUtf8("font: 700 26pt \"KacstOne\";"));
        m_pushButton_GraficoPrecos = new QPushButton(m_SideMenu_Frame);
        m_pushButton_GraficoPrecos->setObjectName(QString::fromUtf8("m_pushButton_GraficoPrecos"));
        m_pushButton_GraficoPrecos->setGeometry(QRect(10, 90, 171, 22));
        QFont font7;
        font7.setFamilies({QString::fromUtf8("Ubuntu Thin")});
        font7.setPointSize(20);
        font7.setBold(false);
        font7.setItalic(false);
        m_pushButton_GraficoPrecos->setFont(font7);
        m_pushButton_GraficoPrecos->setStyleSheet(QString::fromUtf8("font: 20pt \"Ubuntu Thin\";\n"
"background-color: #fafa73;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/rc/android/assets/img/graph.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_pushButton_GraficoPrecos->setIcon(icon);
        m_pushButton_GraficoPrecos->setIconSize(QSize(32, 32));
        m_pushButton_GraficoPrecos->setFlat(true);
        m_Logo_2 = new QLabel(m_SideMenu_Frame);
        m_Logo_2->setObjectName(QString::fromUtf8("m_Logo_2"));
        m_Logo_2->setGeometry(QRect(65, 15, 56, 56));
        m_Logo_2->setFrameShape(QFrame::Panel);
        m_Logo_2->setFrameShadow(QFrame::Raised);
        m_Logo_2->setLineWidth(1);
        m_Logo_2->setPixmap(QPixmap(QString::fromUtf8(":/rc/android/assets/img/trolley.png")));
        m_Logo_2->setScaledContents(true);
        m_pushButton_Drawer = new QPushButton(centralwidget);
        m_pushButton_Drawer->setObjectName(QString::fromUtf8("m_pushButton_Drawer"));
        m_pushButton_Drawer->setGeometry(QRect(10, 15, 56, 56));
        m_pushButton_Drawer->setStyleSheet(QString::fromUtf8(""));
        m_pushButton_Drawer->setAutoDefault(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 375, 28));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(m_textEdit_Local, m_textEdit_Item);
        QWidget::setTabOrder(m_textEdit_Item, m_textEdit_Preco);
        QWidget::setTabOrder(m_textEdit_Preco, m_toolButton_Adicionar);
        QWidget::setTabOrder(m_toolButton_Adicionar, m_tabWidget_Main);
        QWidget::setTabOrder(m_tabWidget_Main, m_tableView_Today);
        QWidget::setTabOrder(m_tableView_Today, m_ComboBox_Item);
        QWidget::setTabOrder(m_ComboBox_Item, m_ComboBox_Local);
        QWidget::setTabOrder(m_ComboBox_Local, m_toolButton_AdicionarEscolher);
        QWidget::setTabOrder(m_toolButton_AdicionarEscolher, m_ComboBox_Price);

        retranslateUi(MainWindow);

        m_tabWidget_Main->setCurrentIndex(2);
        m_pushButton_Drawer->setDefault(true);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        m_toolButton_AdicionarEscolher->setText(QCoreApplication::translate("MainWindow", "Adicionar", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Item", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Local", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "R$", nullptr));
        m_label_DiaMesAno_Escolher->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
        m_tabWidget_Main->setTabText(m_tabWidget_Main->indexOf(m_Tab_Escolher), QCoreApplication::translate("MainWindow", "Escolher", nullptr));
        m_toolButton_Adicionar->setText(QCoreApplication::translate("MainWindow", "Adicionar", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Item", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Local", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "R$", nullptr));
        m_label_DiaMesAno->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
        m_tabWidget_Main->setTabText(m_tabWidget_Main->indexOf(m_Tab_Editar), QCoreApplication::translate("MainWindow", "Editar", nullptr));
        m_DateEdit->setDisplayFormat(QCoreApplication::translate("MainWindow", "dd-MM-yyyy", nullptr));
        m_LabelItem_HL->setText(QCoreApplication::translate("MainWindow", "Item", nullptr));
        m_LabelPrice_HL->setText(QCoreApplication::translate("MainWindow", "Pre\303\247os", nullptr));
        m_LabelDate_HL->setText(QCoreApplication::translate("MainWindow", "Dia", nullptr));
        m_LabelLocal_HL->setText(QCoreApplication::translate("MainWindow", "Local", nullptr));
        m_tabWidget_Main->setTabText(m_tabWidget_Main->indexOf(m_Tab_Hoje), QCoreApplication::translate("MainWindow", "Filtrar", nullptr));
        m_Logo->setText(QString());
        m_label_Mercado->setText(QCoreApplication::translate("MainWindow", "MERCADO", nullptr));
        m_pushButton_GraficoPrecos->setText(QCoreApplication::translate("MainWindow", "Grafico Pre\303\247os", nullptr));
        m_Logo_2->setText(QString());
        m_pushButton_Drawer->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
