#ifndef DEVLISTWINDOW_H
#define DEVLISTWINDOW_H

#include <QMainWindow>

namespace Ui {
class devListWindow;
}

class devListWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit devListWindow(QWidget *parent = 0);
    ~devListWindow();

private:
    Ui::devListWindow *ui;
};

#endif // DEVLISTWINDOW_H
