#ifndef QCUSTOMTABLEWIDGET_H
#define QCUSTOMTABLEWIDGET_H

#include <QTableWidget>
#include <QEvent>
#include <QGestureEvent>
#include <QWidget>

class QCustomTableWidget : public QTableWidget
{
public:
    QCustomTableWidget(QWidget *parent = nullptr);
    bool event(QEvent *e) override;
    bool gestureEvent(QHoverEvent *e);
};

#endif // QCUSTOMTABLEWIDGET_H
