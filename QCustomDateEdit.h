#ifndef QCUSTOMDATEEDIT_H
#define QCUSTOMDATEEDIT_H

#include <QDateEdit>
#include <QObject>
#include <QWidget>
#include <QFocusEvent>

class QCustomDateEdit : public QDateEdit
{
     Q_OBJECT

signals:
    void clicked(void);

public:
    QCustomDateEdit(QWidget *parent = nullptr);
    void focusInEvent(QFocusEvent *event) override;
};

#endif // QCUSTOMDATEEDIT_H
