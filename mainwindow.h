// Author Jakub Wolski kubixwol@gmail.com licence: GNU GPL v3.0
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QDateTime>
#include <QFile>
#include <QTextStream>
#include <QtXml/QtXml>
#include <QMessageBox>
#include <QApplication>
#include <QCloseEvent>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    void closeEvent(QCloseEvent *event);

private slots:
    void on_info_clicked();

    void on_save_clicked();

public slots:
    void onstart();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
