#include "QCustomTableView.h"

QCustomTableView::QCustomTableView(QWidget *parent)
    :QTableView(parent)
{

}

bool QCustomTableView::event(QEvent *event)
{
    qDebug() << " QCustomTableView event";
    QEvent::Type type = event->type();
    if (type == QEvent::Gesture)
        return gestureEvent(static_cast<QGestureEvent*>(event));
    return QWidget::event(event);
}

bool QCustomTableView::gestureEvent(QGestureEvent *event)
{
    qDebug() << " QCustomTableView gestureEvent";
    if (QGesture *swipe = event->gesture(Qt::SwipeGesture))
        swipeTriggered(static_cast<QSwipeGesture *>(swipe));
    else if (QGesture *pan = event->gesture(Qt::PanGesture))
        panTriggered(static_cast<QPanGesture *>(pan));
    else if (QGesture *pinch = event->gesture(Qt::PinchGesture))
        pinchTriggered(static_cast<QPinchGesture *>(pinch));
    else if (QGesture *tap = event->gesture(Qt::TapAndHoldGesture))
    {
        /*event->accept();*/
        tapAndHold(static_cast<QTapAndHoldGesture *>(tap));
    }
    return true;
}

void QCustomTableView::swipeTriggered(QSwipeGesture *gesture)
{
    qDebug() << " QCustomTableView swipeTriggered";
}

void QCustomTableView::panTriggered(QPanGesture *gesture)
{
    qDebug() << " QCustomTableView panTriggered";
}

void QCustomTableView::pinchTriggered(QPinchGesture *gesture)
{
    qDebug() << " QCustomTableView pinchTriggered";

}

void QCustomTableView::tapAndHold(QTapAndHoldGesture *gesture)
{
    if (gesture->state() == Qt::GestureStarted) {
        qDebug() << " QCustomTableView tapAndHold Started";
    }
    if (gesture->state() == Qt::GestureFinished) {
        qDebug() << " QCustomTableView tapAndHold Finished";
    }

}

