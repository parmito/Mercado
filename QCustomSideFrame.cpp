#include "QCustomSideFrame.h"

QCustomSideFrame::QCustomSideFrame(QWidget *parent)
    :QFrame(parent)
{

}

bool QCustomSideFrame::event(QEvent *event)
{
    qDebug() << " QCustomSideFrame event";
    QEvent::Type type = event->type();
    if (type == QEvent::Enter)
        return enteringEvent(static_cast<QEnterEvent*>(event));
    if (type == QEvent::Resize)
        return resizingEvent(static_cast<QResizeEvent*>(event));
    return QWidget::event(event);
}

bool QCustomSideFrame::enteringEvent(QEnterEvent *event)
{
    qDebug() << " QCustomSideFrame enterEvent";

    m_AnimationSideMenu = new QPropertyAnimation(this, "size");
    m_AnimationSideMenu->setEasingCurve(QEasingCurve::Linear);
    m_AnimationSideMenu->setDuration(500);

    if (this->width() > 0)
    {
        m_AnimationSideMenu->setEndValue(QSize(0, this->size().height()));
        m_AnimationSideMenu->start();
        /*emit DrawerClosed();*/
    }
    return true;
}

bool QCustomSideFrame::resizingEvent(QResizeEvent *event)
{
    qDebug() << " QCustomSideFrame resizingEvent";
    qDebug() << " old size:" << event->oldSize();
    qDebug() << " new size:" << event->size();

    if(event->size().width() == 0)  emit DrawerClosed();
    return true;
}
