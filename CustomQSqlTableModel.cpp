#include "CustomQSqlTableModel.h"
#include "qcolor.h"

CustomQSqlTableModel::CustomQSqlTableModel(QObject *parent)
    : QSqlTableModel(parent)
{       
}


QVariant CustomQSqlTableModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    // FIXME: Implement me!

    if (role == Qt::DisplayRole && orientation == Qt::Horizontal) {
        switch (section) {
        case 1:
            return QString("Produtos");
        case 2:
            return QString("Preços");
        case 3:
            return QString("Data        ");
        case 4:
            return QString("Local");
        }
    }
    return QVariant();

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
