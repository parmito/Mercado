#include "CustomQSqlTableModel.h"
#include "qcolor.h"

CustomQSqlTableModel::CustomQSqlTableModel(QObject *parent)
    : QSqlTableModel(parent)
{       
}

QVariant CustomQSqlTableModel::data(const QModelIndex &index, int role=Qt::ForegroundRole) const
{
    QVariant value;

    switch(role)
    {
        case Qt::ForegroundRole:
            value =  QVariant::fromValue(QColor(Qt::black));
            break;

        default:
            value = QSqlTableModel::data(index, role);
            if((role == Qt::DisplayRole) && (index.column()== 2))
            {
                value = value.toString();
            }
            break;
    }
    return value;
}
