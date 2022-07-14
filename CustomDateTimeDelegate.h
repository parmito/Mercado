#ifndef CUSTOMDATETIMEDELEGATE_H
#define CUSTOMDATETIMEDELEGATE_H

#include <QDateTime>
#include <QStyledItemDelegate>

class CustomDateTimeDelegate : public QStyledItemDelegate
{
public:
    explicit CustomDateTimeDelegate(QObject *parent = nullptr);
    void initStyleOption(QStyleOptionViewItem *option, const QModelIndex &index) const override;
    //void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const override;
};

#endif // CUSTOMDATETIMEDELEGATE_H
