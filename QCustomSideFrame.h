#ifndef QCUSTOMSIDEFRAME_H
#define QCUSTOMSIDEFRAME_H

#include <QPropertyAnimation>
#include <QFrame>
#include <QObject>
#include <QWidget>
#include <QEvent>
#include <QGestureEvent>


class QCustomSideFrame : public QFrame
{
    Q_OBJECT
public:
    QCustomSideFrame(QWidget *parent = nullptr);
    bool event(QEvent *event) override;
    bool enteringEvent(QEnterEvent *event);
    bool resizingEvent(QResizeEvent *event);

signals:
    void DrawerClosed(void);

private:
    QPropertyAnimation *m_AnimationSideMenu;
    QPointF *m_StartPointDrawer;
    QSize m_oldSize,m_Size;
};

#endif // QCUSTOMSIDEFRAME_H
