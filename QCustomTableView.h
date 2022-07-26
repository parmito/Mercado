#ifndef QCUSTOMTABLEVIEW_H
#define QCUSTOMTABLEVIEW_H

#include <QEvent>
#include <QGestureEvent>
#include <QTableView>
#include <QObject>
#include <QWidget>

class QCustomTableView : public QTableView
{
public:
    QCustomTableView(QWidget *parent = nullptr);
    bool event(QEvent *event) override;
    bool gestureEvent(QGestureEvent *event);
    void swipeTriggered(QSwipeGesture *gesture);
    void panTriggered(QPanGesture *gesture);
    void pinchTriggered(QPinchGesture *gesture);
    void tapAndHold(QTapAndHoldGesture *gesture);
};

#endif // QCUSTOMTABLEVIEW_H
