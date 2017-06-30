#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <mystringlistmodel.h>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QStringList &string, QWidget *parent = 0);
    ~Widget();

private:
    Ui::Widget *ui;
    MyStringListModel *model;
};

#endif // WIDGET_H
