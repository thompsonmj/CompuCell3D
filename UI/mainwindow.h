#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <requesthandler.h>
#include <QStandardItemModel>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void preOrder(QDomNode dom, QStandardItemModel *model, QStandardItem *item=NULL);
private slots:
    void on_actionOpenSimulation_triggered();

private:
    RequestHandler requestHandler;
    Ui::MainWindow *ui;

    void setupModelEditor();
};

#endif // MAINWINDOW_H
