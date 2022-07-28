#ifndef QCUSTOMSIDEFRAME_H
#define QCUSTOMSIDEFRAME_H

#include <QPropertyAnimation>
#include <QFrame>
#include <QObject>
#include <QWidget>
#include <QEvent>
#include <QGestureEvent>

namespace QTCUSTOMSIDEFRAME
{
typedef enum {
    enOPENED_DRAWER,
    enCLOSED_DRAWER
}tenCustomSideFrameStatus;

typedef enum {
    enNO_MOVEMENT,
    enOPENING_TREND,
    enCLOSING_TREND
}tenDrawerTrendingMovement;

class QCustomSideFrame : public QFrame
{
    Q_OBJECT
public:
    QCustomSideFrame(QWidget *parent = nullptr);
    /*bool event(QEvent *event) override;
    bool enteringEvent(QEnterEvent *event);
    bool resizingEvent(QResizeEvent *event);*/

signals:
    void DrawerOpened(void);
    void DrawerClosed(void);

private slots:
    void onHoverEventDetected(QEvent *event);
    void SideMenuAnimationFinished(void);
    void onForceDrawerOpened(void);

private:
    QPropertyAnimation *m_AnimationSideMenu;
    QPointF /**m_StartPointDrawer,*/ /**m_EndPointDrawer,*/ *m_CurrPointDrawer;
    int iHoverEventCnt/*,iHoverUpCnt,iHoverDownCnt*/;
    /*tenCustomSideFrameStatus m_SideMenuStatus;*/
    /*QSize m_oldSize,m_Size;*/
    /*void SideMenuAnimation(tenCustomSideFrameStatus status);*/
    tenDrawerTrendingMovement enDrawerTrendingMovement;
};
}
#endif // QCUSTOMSIDEFRAME_H
