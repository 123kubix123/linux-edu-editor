// Author Jakub Wolski kubixwol@gmail.com licence: GNU GPL v3.0
#include "mainwindow.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    //chowanie niepotrzebnych aktualnie elementów ui
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//wywołuje się na początku pokazuje okienko o autorach
void MainWindow::onstart()
{
    QMessageBox::information(this,tr("Informacje"),tr("Autor Jakub Wolski  Kontakt: kubixwol@gmail.com licence: GNU GPL v3.0"));
}

//funkcja wyświetlająca okienko o autorach po kliknięciu guzika info
void MainWindow::on_info_clicked()
{
   onstart();
}

//weryfikacja pewności przy zamykaniu
void MainWindow::closeEvent(QCloseEvent *event)
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Jesteś pewien", "Czy na pewno chcesz zamknąć program?", QMessageBox::Yes | QMessageBox::No);
    if(reply == QMessageBox::Yes)
    {
        event->accept();
    }
    else
    {
        event->ignore();
    }
}

void MainWindow::on_save_clicked()
{
    QString tresc = ui->tresc->toPlainText();
    QString skrypt = ui->skrypt->toPlainText();
    QString nazwa = ui->nazwa->text();

    QFile file(nazwa+".txt");
        if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
            return;

        QTextStream out(&file);
        out << tresc;

        QFile file1(nazwa+".sh");
            if (!file1.open(QIODevice::WriteOnly | QIODevice::Text))
                return;

            QTextStream out1(&file1);
            out1 << skrypt;

            QMessageBox::information(this,tr("Zapis"),tr("Pliki zapisano."));
}
