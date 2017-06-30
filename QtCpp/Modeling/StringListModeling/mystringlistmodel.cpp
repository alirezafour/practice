#include "mystringlistmodel.h"

MyStringListModel::MyStringListModel(const QStringList &strings, QObject *parent)
    :QAbstractListModel(parent), stringList(strings)
{

}

int MyStringListModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);

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

    //we are just support this 2 role for now
    if(role == Qt::DisplayRole || role == Qt::EditRole)
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

Qt::ItemFlags MyStringListModel::flags(const QModelIndex &index) const
{
    if(!index.isValid())
        return Qt::ItemIsEnabled;

    //delegate check if item editable or not and set every Item flag Editable
    return QAbstractItemModel::flags(index) | Qt::ItemIsEditable;
}

bool MyStringListModel::setData(const QModelIndex &index, const QVariant &value, int role)
{
    //first we need to be sure that index is valid and the roll is the correct one
    //the EditRole used by delegate
    if(index.isValid() && role == Qt::EditRole)
    {
        stringList.replace(index.row(), value.toString());
        //emit that data changed for the view to know and update it self
        emit dataChanged(index, index);
        return true;
    }
    return false;
}

bool MyStringListModel::insertRows(int position, int rows, const QModelIndex &index)
{
    Q_UNUSED(index);

    //it tells other components and ... that the row is going to be change
    beginInsertRows(QModelIndex(), position, position+rows-1);

    for(int row = 0; row < rows; ++row)
    {
        stringList.insert(position, ""); //adding empty string to the list
    }

    //it tells other we finished changing rows
    endInsertRows();
    return true;
}

bool MyStringListModel::removeRows(int position, int rows, const QModelIndex &index)
{
    Q_UNUSED(index);

    //this allows other components to access the data before it becomes unavailable
    beginRemoveRows(QModelIndex(), position, position+rows-1);

    for(int row = 0; row < rows; ++row)
    {
        stringList.removeAt(position); //remove the string from the list at the position
    }

    //emits that we are finishing and let other components know that the dimensions of the model have changed
    endRemoveRows();
    return true;
}

