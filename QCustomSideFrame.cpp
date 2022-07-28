#include "QCustomSideFrame.h"

using namespace QTCUSTOMSIDEFRAME;

QCustomSideFrame::QCustomSideFrame(QWidget *parent)
    :QFrame(parent)
{
    /*m_StartPointDrawer = new QPointF(0,0);*/
    /*m_EndPointDrawer = new QPointF(0,0);*/
    m_CurrPointDrawer = new QPointF(0,0);
    iHoverEventCnt = 0;

    m_AnimationSideMenu = new QPropertyAnimation(this, "size");
    m_AnimationSideMenu->setEasingCurve(QEasingCurve::Linear);
    m_AnimationSideMenu->setDuration(250);

    enDrawerTrendingMovement = enNO_MOVEMENT;
    /*m_SideMenuStatus =  enCLOSED_DRAWER;*/
    QObject::connect(m_AnimationSideMenu,SIGNAL(finished()),this,SLOT(SideMenuAnimationFinished()));
}

#if 0
void QCustomSideFrame::onHoverEventDetected(QEvent *event)
{
    QHoverEvent *hoverEvent = static_cast<QHoverEvent*>(event);
    qDebug() << "onHoverEventDetected";
    qDebug() << "x:" << hoverEvent->position().x();

    *m_CurrPointDrawer = hoverEvent->position();

    switch(iHoverEventCnt)
    {
    case 0:
        /* First action to open*/
        if(m_CurrPointDrawer->x()== m_StartPointDrawer->x()){
            m_StartPointDrawer->setX(m_CurrPointDrawer->x());
            iHoverEventCnt++;
        }
        break;

    case 1:/* Second action to open*/
        if(m_CurrPointDrawer->x()> m_StartPointDrawer->x())
        {
            this->SideMenuAnimation(enOPENED_DRAWER);
        }
        break;
        /* First action to close*/
        case 2:
            if(m_CurrPointDrawer->x() >= m_EndPointDrawer->x()){
                m_EndPointDrawer->setX(m_CurrPointDrawer->x());
                iHoverEventCnt++;
            }
            break;

        /* 2nd action to close*/
        case 3:
            if(m_CurrPointDrawer->x() < m_EndPointDrawer->x())
            {
                this->SideMenuAnimation(enCLOSED_DRAWER);
            }
            break;

    }
}
#endif

void QCustomSideFrame::onHoverEventDetected(QEvent *event)
{
    QHoverEvent *hoverEvent = static_cast<QHoverEvent*>(event);
    qDebug() << "onHoverEventDetected" << "x:" << hoverEvent->position().x()\
             << "old" << m_CurrPointDrawer->x();

    /* Opening movement*/
    if((hoverEvent->position().x() > m_CurrPointDrawer->x()) && iHoverEventCnt < 5){
        iHoverEventCnt++;
    }
    if((hoverEvent->position().x() < m_CurrPointDrawer->x()) && iHoverEventCnt > 0){
        iHoverEventCnt--;
    }
    *m_CurrPointDrawer = hoverEvent->position();

    qDebug() << "iHoverEventCnt" << iHoverEventCnt;

    if(iHoverEventCnt >= 5 && this->width() < 270)
    {
        m_AnimationSideMenu->setEndValue(QSize(hoverEvent->position().x(), this->height()));
        m_AnimationSideMenu->start();
        enDrawerTrendingMovement = enOPENING_TREND;
    }
    if(iHoverEventCnt <= 0 && this->width() > 0)
    {
        m_AnimationSideMenu->setEndValue(QSize(hoverEvent->position().x(), this->height()));
        m_AnimationSideMenu->start();
        enDrawerTrendingMovement = enCLOSING_TREND;
    }
}

#if 0
void QCustomSideFrame::SideMenuAnimation(tenCustomSideFrameStatus status)
{
    m_AnimationSideMenu->stop();

    auto const current = this->size();
    m_AnimationSideMenu->setStartValue(current);

    m_SideMenuStatus = status;
    switch(status)
    {
    case enOPENED_DRAWER:
        if (this->width() < 200)
        {
            m_AnimationSideMenu->setEndValue(QSize(200, current.height()));
            m_AnimationSideMenu->start();
            m_EndPointDrawer->setX(200);
            emit DrawerOpened();
        }
        break;

    case enCLOSED_DRAWER:
        if (this->width() > 0)
        {
            m_AnimationSideMenu->setEndValue(QSize(0, current.height()));
            m_AnimationSideMenu->start();
            m_StartPointDrawer->setX(0);
        }
        break;
    }
}
#endif

void QCustomSideFrame::SideMenuAnimationFinished()
{
    qDebug() <<" SideMenu Animation finished";

    if(this->width() > 20){
        if( enDrawerTrendingMovement == enOPENING_TREND )
        {
            emit DrawerOpened();
            enDrawerTrendingMovement = enNO_MOVEMENT;
        }else
        {
            if( enDrawerTrendingMovement == enCLOSING_TREND )
            {
                emit DrawerClosed();
                m_AnimationSideMenu->setEndValue(QSize(0, this->height()));
                m_AnimationSideMenu->start();
                enDrawerTrendingMovement = enNO_MOVEMENT;
            }
        }
    }
    else
    {
        emit DrawerClosed();
    }
}

void QCustomSideFrame::onForceDrawerOpened()
{
    m_AnimationSideMenu->setEndValue(QSize(200, this->height()));
    m_AnimationSideMenu->start();
}


#if 0
void QCustomSideFrame::SideMenuAnimationFinished()
{
    qDebug() <<" SideMenu Animation finished:" << m_SideMenuStatus;

    switch(m_SideMenuStatus)
    {
    case enOPENED_DRAWER:
        iHoverEventCnt++;
        break;

    case enCLOSED_DRAWER:
        emit DrawerClosed();
        iHoverEventCnt = 0;
        break;
    }
}
#endif

#if 0
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
#endif

#if 0
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
#endif
