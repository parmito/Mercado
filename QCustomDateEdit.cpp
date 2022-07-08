#include "QCustomDateEdit.h"
#include "qevent.h"

QCustomDateEdit::QCustomDateEdit(QWidget *parent):QDateEdit(parent)
{

}


void QCustomDateEdit::focusInEvent(QFocusEvent *event)
{
    if (event->reason() == Qt::MouseFocusReason)
    {
        emit clicked();
    }
}
