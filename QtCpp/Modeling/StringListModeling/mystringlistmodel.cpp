#include "mystringlistmodel.h"

MyStringListModel::MyStringListModel(const QStringList &strings, QObject *parent)
    :QAbstractListModel(parent), stringList(strings)
{

}

int MyStringListModel::rowCount(const QModelIndex &parent) const
{
    return stringList.count();
}

QVariant MyStringListModel::data(const QModelIndex &index, int role) const
{
    //if it's not valid we return the empty QVariant
    if(!index.isValid())
        return QVariant();

    //if we are out of the list we return empty QVariant
    if(index.row() >= stringList.size())
        return QVariant();

    //we only support this role for now
    if(role == Qt::DisplayRole)
        return stringList.at(index.row());
    else
        return QVariant();
}

QVariant MyStringListModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    //we only support this roll for now
    if(role != Qt::DisplayRole)
        return QVariant();

    //a simple headers and rows
    if(orientation == Qt::Horizontal)
        return QString("Column %1").arg(section);
    else
        return QString("Row %1").arg(section);
}

