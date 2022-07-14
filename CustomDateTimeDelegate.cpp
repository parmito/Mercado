#include "CustomDateTimeDelegate.h"

CustomDateTimeDelegate::CustomDateTimeDelegate(QObject *parent)
    : QStyledItemDelegate{parent}
{

}


void CustomDateTimeDelegate::initStyleOption(QStyleOptionViewItem *option, const QModelIndex &index) const
{
    /*QVariant value = index.data();
    QString qString = value.toString();
    qString.replace("-","/");
    qString.append(" 00:00:00");

    QDateTime qDateTime = QDateTime::fromString(qString,"dd/MM/yyyy 00:00:00");
    qint64 i64value = qDateTime.toMSecsSinceEpoch();
    option->text = QDateTime::fromMSecsSinceEpoch(i64value).toString("dd.MM.yyyy");*/

    QVariant value = index.data();
    qint64 i64value = value.toLongLong();
    option->text = QDateTime::fromMSecsSinceEpoch(i64value).toString("dd.MM.yyyy");
}
