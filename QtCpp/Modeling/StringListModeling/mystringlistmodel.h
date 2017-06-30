#ifndef MYSTRINGLISTMODEL_H
#define MYSTRINGLISTMODEL_H
#include <QAbstractListModel>
#include <QStringList>

class MyStringListModel : public QAbstractListModel
{
    Q_OBJECT

public:

    /**
     * @brief MyStringListModel the constructor that give a list and store it
     * @param strings the list of data you want to make a model out of it
     * @param parent the parent child relationship for Qt
     */
    MyStringListModel(const QStringList &strings, QObject *parent = 0);

    /**
     * @brief rowCount show the number of item in the list
     * @param parent do nothing in this model
     * @return the number of item in the string list
     */
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;

    /**
     * @brief data represent the data in the string list
     * @param index the index of the data in the list
     * @param role for now we only support one roll
     * @return the data on the list as a QVariant
     */
    QVariant data(const QModelIndex &index, int role) const override;

    /**
     * @brief headerData it Display the custom header for some view that support that
     * @param section the place that header is going to be
     * @param orientation for now it's just horizental cuz we just have a string list
     * @param role for now we only support one roll
     * @return the header that should show in the view header
     */
    QVariant headerData(int section, Qt::Orientation orientation, int role) const override;

    /**
     * @brief flags this function and setData make model editable
     * @param index the index of the item we want to check it's editable or not
     * @return the flags of item that editable is added to it
     */
    Qt::ItemFlags flags(const QModelIndex &index) const override;

    /**
     * @brief setData this function and flags make model editable
     * @param index index of the item that we select for edit
     * @param value the value we want to change the old data to
     * @param role check if it's editable or not by default it's Editrole that we use
     * @return the flag that show the edit was successful or not
     */
    bool setData(const QModelIndex &index, const QVariant &value, int role = Qt::EditRole) override;

private:
    /**
     * @brief stringList the list of data we going to store in it or show from it
     */
    QStringList stringList;
};

#endif // MYSTRINGLISTMODEL_H
