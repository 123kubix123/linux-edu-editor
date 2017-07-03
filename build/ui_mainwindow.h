/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionTest1;
    QAction *actionTest2;
    QAction *actionTest3;
    QAction *actionTest4;
    QAction *actionTest5;
    QAction *actionTest1_2;
    QWidget *centralWidget;
    QPushButton *save;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *InfoWpis;
    QTextBrowser *tresc;
    QPushButton *exit;
    QPushButton *info;
    QTextBrowser *skrypt;
    QLabel *label_2;
    QLineEdit *nazwa;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(900, 600);
        MainWindow->setMinimumSize(QSize(900, 600));
        MainWindow->setMaximumSize(QSize(900, 600));
        MainWindow->setCursor(QCursor(Qt::ArrowCursor));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/egzaminator-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionTest1 = new QAction(MainWindow);
        actionTest1->setObjectName(QStringLiteral("actionTest1"));
        actionTest1->setCheckable(false);
        actionTest2 = new QAction(MainWindow);
        actionTest2->setObjectName(QStringLiteral("actionTest2"));
        actionTest3 = new QAction(MainWindow);
        actionTest3->setObjectName(QStringLiteral("actionTest3"));
        actionTest4 = new QAction(MainWindow);
        actionTest4->setObjectName(QStringLiteral("actionTest4"));
        actionTest5 = new QAction(MainWindow);
        actionTest5->setObjectName(QStringLiteral("actionTest5"));
        actionTest1_2 = new QAction(MainWindow);
        actionTest1_2->setObjectName(QStringLiteral("actionTest1_2"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        save = new QPushButton(centralWidget);
        save->setObjectName(QStringLiteral("save"));
        save->setEnabled(true);
        save->setGeometry(QRect(750, 530, 131, 23));
        save->setFlat(false);
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 10, 871, 24));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        InfoWpis = new QLabel(horizontalLayoutWidget);
        InfoWpis->setObjectName(QStringLiteral("InfoWpis"));

        horizontalLayout->addWidget(InfoWpis);

        tresc = new QTextBrowser(centralWidget);
        tresc->setObjectName(QStringLiteral("tresc"));
        tresc->setGeometry(QRect(10, 50, 431, 431));
        QFont font;
        font.setPointSize(10);
        tresc->setFont(font);
        tresc->setReadOnly(false);
        tresc->setAcceptRichText(false);
        tresc->setTextInteractionFlags(Qt::TextEditorInteraction);
        exit = new QPushButton(centralWidget);
        exit->setObjectName(QStringLiteral("exit"));
        exit->setGeometry(QRect(10, 530, 131, 23));
        info = new QPushButton(centralWidget);
        info->setObjectName(QStringLiteral("info"));
        info->setGeometry(QRect(10, 570, 16, 16));
        skrypt = new QTextBrowser(centralWidget);
        skrypt->setObjectName(QStringLiteral("skrypt"));
        skrypt->setGeometry(QRect(450, 50, 431, 431));
        skrypt->setAcceptRichText(false);
        skrypt->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextEditable|Qt::TextEditorInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 500, 141, 16));
        nazwa = new QLineEdit(centralWidget);
        nazwa->setObjectName(QStringLiteral("nazwa"));
        nazwa->setGeometry(QRect(160, 500, 113, 24));
        MainWindow->setCentralWidget(centralWidget);
        tresc->raise();
        save->raise();
        horizontalLayoutWidget->raise();
        exit->raise();
        info->raise();
        skrypt->raise();
        label_2->raise();
        nazwa->raise();

        retranslateUi(MainWindow);
        QObject::connect(exit, SIGNAL(clicked()), MainWindow, SLOT(close()));

        save->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Linux edu eddit", 0));
        actionTest1->setText(QApplication::translate("MainWindow", "Test1", 0));
        actionTest2->setText(QApplication::translate("MainWindow", "Test2", 0));
        actionTest3->setText(QApplication::translate("MainWindow", "Test3", 0));
        actionTest4->setText(QApplication::translate("MainWindow", "Test4", 0));
        actionTest5->setText(QApplication::translate("MainWindow", "Test5", 0));
        actionTest1_2->setText(QApplication::translate("MainWindow", "Test1", 0));
        save->setText(QApplication::translate("MainWindow", "Save", 0));
        label->setText(QApplication::translate("MainWindow", "Wpisz tre\305\233\304\207 zadania:", 0));
        InfoWpis->setText(QApplication::translate("MainWindow", "Wpisz tre\305\233c skryptu sprawdzaj\304\205cego:", 0));
        exit->setText(QApplication::translate("MainWindow", "Exit", 0));
        info->setText(QApplication::translate("MainWindow", "i", 0));
        label_2->setText(QApplication::translate("MainWindow", "Podaj nazw\304\231 zadania:", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
