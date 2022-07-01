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
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include "CustomQSqlTableModel.h"
#include "dbmanager.h"
#include "itemtabledb.h"


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

    void on_m_pushButton_Filtrar_clicked();

    void on_m_pushButton_Drawer_clicked();

    void SideMenuAnimationFinished();
    /*void SideMenuAnimationStarted();*/

    void on_m_pushButton_GraficoPrecos_clicked();

private:
    Ui::MainWindow *ui;
    /* Also present are two methods that form
     * the model and appearance TableView
     * */
    CustomQSqlTableModel  *model;
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
};
#endif // MAINWINDOW_H