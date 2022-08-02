/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QSlider *frequencySlider;
    QSlider *powerSlider;
    QGroupBox *groupBox;
    QProgressBar *progressBar;
    QListWidget *menu;
    QPushButton *Down;
    QPushButton *Up;
    QPushButton *right;
    QPushButton *left;
    QPushButton *ok;
    QPushButton *turnOnOffDevice;
    QPushButton *returnMenu;
    QPushButton *back;
    QSlider *BatteryLevel;
    QLabel *timer;
    QTableWidget *tableWidget;
    QRadioButton *contactSkin;
    QLabel *label;
    QLabel *label_2;
    QLabel *powerDisplay;
    QLabel *frequencyDisplay;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(659, 443);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        frequencySlider = new QSlider(centralWidget);
        frequencySlider->setObjectName(QString::fromUtf8("frequencySlider"));
        frequencySlider->setGeometry(QRect(350, 240, 160, 16));
        frequencySlider->setOrientation(Qt::Horizontal);
        powerSlider = new QSlider(centralWidget);
        powerSlider->setObjectName(QString::fromUtf8("powerSlider"));
        powerSlider->setGeometry(QRect(350, 170, 160, 16));
        powerSlider->setOrientation(Qt::Horizontal);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 291, 371));
        groupBox->setAutoFillBackground(true);
        groupBox->setAlignment(Qt::AlignCenter);
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        progressBar = new QProgressBar(groupBox);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(220, 0, 71, 16));
        progressBar->setMaximum(100);
        progressBar->setValue(100);
        menu = new QListWidget(groupBox);
        QFont font;
        font.setPointSize(10);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(menu);
        __qlistwidgetitem->setFont(font);
        new QListWidgetItem(menu);
        new QListWidgetItem(menu);
        new QListWidgetItem(menu);
        new QListWidgetItem(menu);
        new QListWidgetItem(menu);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu->setGeometry(QRect(0, 20, 171, 111));
        menu->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        menu->setSpacing(2);
        Down = new QPushButton(groupBox);
        Down->setObjectName(QString::fromUtf8("Down"));
        Down->setGeometry(QRect(90, 240, 41, 41));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/images/down.png"), QSize(), QIcon::Normal, QIcon::Off);
        Down->setIcon(icon);
        Down->setIconSize(QSize(32, 32));
        Up = new QPushButton(groupBox);
        Up->setObjectName(QString::fromUtf8("Up"));
        Up->setGeometry(QRect(90, 160, 41, 41));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resources/images/arrowUp.png"), QSize(), QIcon::Normal, QIcon::Off);
        Up->setIcon(icon1);
        Up->setIconSize(QSize(32, 32));
        right = new QPushButton(groupBox);
        right->setObjectName(QString::fromUtf8("right"));
        right->setGeometry(QRect(130, 200, 41, 41));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/resources/images/right.png"), QSize(), QIcon::Normal, QIcon::Off);
        right->setIcon(icon2);
        right->setIconSize(QSize(32, 32));
        right->setAutoDefault(false);
        right->setFlat(false);
        left = new QPushButton(groupBox);
        left->setObjectName(QString::fromUtf8("left"));
        left->setGeometry(QRect(50, 200, 41, 41));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/resources/images/left.png"), QSize(), QIcon::Normal, QIcon::Off);
        left->setIcon(icon3);
        left->setIconSize(QSize(32, 32));
        ok = new QPushButton(groupBox);
        ok->setObjectName(QString::fromUtf8("ok"));
        ok->setGeometry(QRect(90, 200, 41, 41));
        ok->setIconSize(QSize(32, 32));
        turnOnOffDevice = new QPushButton(groupBox);
        turnOnOffDevice->setObjectName(QString::fromUtf8("turnOnOffDevice"));
        turnOnOffDevice->setGeometry(QRect(90, 290, 41, 41));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/resources/images/powerButton.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        turnOnOffDevice->setIcon(icon4);
        turnOnOffDevice->setIconSize(QSize(40, 40));
        returnMenu = new QPushButton(groupBox);
        returnMenu->setObjectName(QString::fromUtf8("returnMenu"));
        returnMenu->setGeometry(QRect(150, 150, 41, 41));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/resources/images/menuButton.png"), QSize(), QIcon::Normal, QIcon::Off);
        returnMenu->setIcon(icon5);
        returnMenu->setIconSize(QSize(40, 40));
        back = new QPushButton(groupBox);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(20, 150, 41, 41));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/resources/images/returnButton.png"), QSize(), QIcon::Normal, QIcon::Off);
        back->setIcon(icon6);
        back->setIconSize(QSize(37, 37));
        BatteryLevel = new QSlider(groupBox);
        BatteryLevel->setObjectName(QString::fromUtf8("BatteryLevel"));
        BatteryLevel->setGeometry(QRect(110, 340, 160, 16));
        BatteryLevel->setMaximum(100);
        BatteryLevel->setValue(100);
        BatteryLevel->setOrientation(Qt::Horizontal);
        BatteryLevel->setInvertedAppearance(false);
        BatteryLevel->setInvertedControls(false);
        BatteryLevel->setTickPosition(QSlider::TicksAbove);
        timer = new QLabel(groupBox);
        timer->setObjectName(QString::fromUtf8("timer"));
        timer->setEnabled(true);
        timer->setGeometry(QRect(10, 50, 151, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("DejaVu Sans"));
        font1.setPointSize(28);
        timer->setFont(font1);
        tableWidget = new QTableWidget(groupBox);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 20, 256, 101));
        tableWidget->raise();
        progressBar->raise();
        menu->raise();
        Down->raise();
        Up->raise();
        right->raise();
        left->raise();
        ok->raise();
        turnOnOffDevice->raise();
        returnMenu->raise();
        back->raise();
        BatteryLevel->raise();
        timer->raise();
        contactSkin = new QRadioButton(centralWidget);
        contactSkin->setObjectName(QString::fromUtf8("contactSkin"));
        contactSkin->setGeometry(QRect(350, 280, 131, 23));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(350, 140, 181, 17));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(360, 210, 171, 20));
        powerDisplay = new QLabel(centralWidget);
        powerDisplay->setObjectName(QString::fromUtf8("powerDisplay"));
        powerDisplay->setGeometry(QRect(510, 170, 64, 17));
        frequencyDisplay = new QLabel(centralWidget);
        frequencyDisplay->setObjectName(QString::fromUtf8("frequencyDisplay"));
        frequencyDisplay->setGeometry(QRect(510, 240, 64, 17));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 659, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(BatteryLevel, SIGNAL(valueChanged(int)), progressBar, SLOT(setValue(int)));
        QObject::connect(progressBar, SIGNAL(valueChanged(int)), BatteryLevel, SLOT(setValue(int)));

        menu->setCurrentRow(-1);
        right->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "DENAS", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Denas Simulation", nullptr));

        const bool __sortingEnabled = menu->isSortingEnabled();
        menu->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = menu->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("MainWindow", "Programs", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = menu->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("MainWindow", "Frequency", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = menu->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("MainWindow", "History", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = menu->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("MainWindow", "Med", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = menu->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("MainWindow", "Screening", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = menu->item(5);
        ___qlistwidgetitem5->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        menu->setSortingEnabled(__sortingEnabled);

        Down->setText(QString());
        Up->setText(QString());
        right->setText(QString());
        left->setText(QString());
        ok->setText(QCoreApplication::translate("MainWindow", "OK", nullptr));
        turnOnOffDevice->setText(QString());
        returnMenu->setText(QString());
        back->setText(QString());
        timer->setText(QString());
        contactSkin->setText(QCoreApplication::translate("MainWindow", "Skin Touching", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Power Level", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Frequency", nullptr));
        powerDisplay->setText(QString());
        frequencyDisplay->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
