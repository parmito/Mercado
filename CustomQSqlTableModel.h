#ifndef CUSTOMQSQLTABLEMODEL_H
#define CUSTOMQSQLTABLEMODEL_H

#include <QDateTime>
#include <QSqlTableModel>

class CustomQSqlTableModel : public QSqlTableModel
{

public:
    explicit CustomQSqlTableModel(QObject *parent = nullptr);
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const override;
    QVariant data(const QModelIndex &index, int role) const;  
};

#endif // CUSTOMQSQLTABLEMODEL_H
