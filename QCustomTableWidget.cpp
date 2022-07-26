#include "QCustomTableWidget.h"

QCustomTableWidget::QCustomTableWidget(QWidget *parent): QTableWidget(parent)
{
    qDebug() <<"Constructor" ;
}

bool QCustomTableWidget::event(QEvent *e)
{
    qDebug() <<"event QTbleWidget" ;
    QEvent::Type type = e->type();
    if (type == QEvent::HoverMove)
        return gestureEvent(static_cast<QHoverEvent*>(e));
    return QWidget::event(e);

}

bool QCustomTableWidget::gestureEvent(QHoverEvent *e)
{
    qDebug() <<"TableWidget gestureEvent" ;
}

