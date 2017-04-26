/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QStackedWidget *pages;
    QWidget *Home;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *loginButton;
    QPushButton *registerButton;
    QGroupBox *groupBox;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QDateEdit *toDataEdit;
    QComboBox *fromAirportList;
    QPushButton *exitButton;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QListView *listView;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_5;
    QComboBox *toAirportList;
    QDateEdit *fromDateEdit;
    QHBoxLayout *horizontalLayout_8;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QPushButton *searchFlightButton;
    QWidget *Login;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *usernameLabel;
    QLineEdit *usernameField;
    QHBoxLayout *horizontalLayout_2;
    QLabel *passwordLabel;
    QLineEdit *passwordField;
    QLabel *label_2;
    QWidget *widget3;
    QVBoxLayout *verticalLayout_3;
    QPushButton *loginuserButton;
    QPushButton *loginBackButton;
    QWidget *Register;
    QLabel *label_3;
    QPushButton *registerBackButton;
    QWidget *bookFlight;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(772, 402);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pages = new QStackedWidget(centralWidget);
        pages->setObjectName(QStringLiteral("pages"));
        pages->setGeometry(QRect(40, 30, 711, 341));
        Home = new QWidget();
        Home->setObjectName(QStringLiteral("Home"));
        layoutWidget_2 = new QWidget(Home);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(630, 0, 77, 54));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        loginButton = new QPushButton(layoutWidget_2);
        loginButton->setObjectName(QStringLiteral("loginButton"));

        verticalLayout_2->addWidget(loginButton);

        registerButton = new QPushButton(layoutWidget_2);
        registerButton->setObjectName(QStringLiteral("registerButton"));

        verticalLayout_2->addWidget(registerButton);

        groupBox = new QGroupBox(Home);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(390, 0, 211, 91));
        widget = new QWidget(groupBox);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 30, 179, 22));
        horizontalLayout_6 = new QHBoxLayout(widget);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_6->addWidget(label_4);

        toDataEdit = new QDateEdit(widget);
        toDataEdit->setObjectName(QStringLiteral("toDataEdit"));
        toDataEdit->setDateTime(QDateTime(QDate(2017, 1, 1), QTime(0, 0, 0)));

        horizontalLayout_6->addWidget(toDataEdit);

        fromAirportList = new QComboBox(widget);
        fromAirportList->setObjectName(QStringLiteral("fromAirportList"));

        horizontalLayout_6->addWidget(fromAirportList);

        exitButton = new QPushButton(Home);
        exitButton->setObjectName(QStringLiteral("exitButton"));
        exitButton->setGeometry(QRect(610, 270, 75, 23));
        widget1 = new QWidget(Home);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(10, 140, 541, 161));
        verticalLayout_4 = new QVBoxLayout(widget1);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget1);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_4->addWidget(label);

        listView = new QListView(widget1);
        listView->setObjectName(QStringLiteral("listView"));

        verticalLayout_4->addWidget(listView);

        widget2 = new QWidget(Home);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(0, 0, 383, 58));
        verticalLayout_5 = new QVBoxLayout(widget2);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_5 = new QLabel(widget2);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_9->addWidget(label_5);

        toAirportList = new QComboBox(widget2);
        toAirportList->setObjectName(QStringLiteral("toAirportList"));

        horizontalLayout_9->addWidget(toAirportList);

        fromDateEdit = new QDateEdit(widget2);
        fromDateEdit->setObjectName(QStringLiteral("fromDateEdit"));
        fromDateEdit->setDateTime(QDateTime(QDate(2017, 1, 1), QTime(0, 0, 0)));

        horizontalLayout_9->addWidget(fromDateEdit);


        verticalLayout_5->addLayout(horizontalLayout_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        checkBox = new QCheckBox(widget2);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        horizontalLayout_8->addWidget(checkBox);

        checkBox_2 = new QCheckBox(widget2);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        horizontalLayout_8->addWidget(checkBox_2);

        searchFlightButton = new QPushButton(widget2);
        searchFlightButton->setObjectName(QStringLiteral("searchFlightButton"));

        horizontalLayout_8->addWidget(searchFlightButton);


        verticalLayout_5->addLayout(horizontalLayout_8);

        pages->addWidget(Home);
        exitButton->raise();
        registerButton->raise();
        loginButton->raise();
        layoutWidget_2->raise();
        label->raise();
        listView->raise();
        label_4->raise();
        label_5->raise();
        label_4->raise();
        label_5->raise();
        fromAirportList->raise();
        toAirportList->raise();
        searchFlightButton->raise();
        checkBox->raise();
        checkBox_2->raise();
        toDataEdit->raise();
        fromAirportList->raise();
        label_4->raise();
        groupBox->raise();
        exitButton->raise();
        Login = new QWidget();
        Login->setObjectName(QStringLiteral("Login"));
        layoutWidget = new QWidget(Login);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(170, 100, 195, 52));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        usernameLabel = new QLabel(layoutWidget);
        usernameLabel->setObjectName(QStringLiteral("usernameLabel"));

        horizontalLayout->addWidget(usernameLabel);

        usernameField = new QLineEdit(layoutWidget);
        usernameField->setObjectName(QStringLiteral("usernameField"));
        usernameField->setMaximumSize(QSize(135, 16777215));

        horizontalLayout->addWidget(usernameField);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        passwordLabel = new QLabel(layoutWidget);
        passwordLabel->setObjectName(QStringLiteral("passwordLabel"));

        horizontalLayout_2->addWidget(passwordLabel);

        passwordField = new QLineEdit(layoutWidget);
        passwordField->setObjectName(QStringLiteral("passwordField"));
        passwordField->setMaximumSize(QSize(135, 16777215));

        horizontalLayout_2->addWidget(passwordField);


        verticalLayout->addLayout(horizontalLayout_2);

        label_2 = new QLabel(Login);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 10, 71, 16));
        widget3 = new QWidget(Login);
        widget3->setObjectName(QStringLiteral("widget3"));
        widget3->setGeometry(QRect(230, 160, 77, 54));
        verticalLayout_3 = new QVBoxLayout(widget3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        loginuserButton = new QPushButton(widget3);
        loginuserButton->setObjectName(QStringLiteral("loginuserButton"));

        verticalLayout_3->addWidget(loginuserButton);

        loginBackButton = new QPushButton(widget3);
        loginBackButton->setObjectName(QStringLiteral("loginBackButton"));

        verticalLayout_3->addWidget(loginBackButton);

        pages->addWidget(Login);
        Register = new QWidget();
        Register->setObjectName(QStringLiteral("Register"));
        label_3 = new QLabel(Register);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 10, 81, 21));
        registerBackButton = new QPushButton(Register);
        registerBackButton->setObjectName(QStringLiteral("registerBackButton"));
        registerBackButton->setGeometry(QRect(460, 10, 75, 23));
        pages->addWidget(Register);
        bookFlight = new QWidget();
        bookFlight->setObjectName(QStringLiteral("bookFlight"));
        pages->addWidget(bookFlight);
        MainWindow->setCentralWidget(centralWidget);
        pages->raise();
        layoutWidget_2->raise();
        listView->raise();
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(checkBox_2, SIGNAL(clicked(bool)), groupBox, SLOT(show()));

        pages->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        loginButton->setText(QApplication::translate("MainWindow", "Login", Q_NULLPTR));
        registerButton->setText(QApplication::translate("MainWindow", "Register", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Return Airport", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "To:", Q_NULLPTR));
        fromAirportList->clear();
        fromAirportList->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Airport 1", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Airport 2", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Airport 3", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Airport 4", Q_NULLPTR)
        );
        exitButton->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Upcoming Flights", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "From:", Q_NULLPTR));
        toAirportList->clear();
        toAirportList->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Airport 1", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Airport 2", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Airport 3", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Airport 4", Q_NULLPTR)
        );
        checkBox->setText(QApplication::translate("MainWindow", "One way", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("MainWindow", "Return", Q_NULLPTR));
        searchFlightButton->setText(QApplication::translate("MainWindow", "Search", Q_NULLPTR));
        usernameLabel->setText(QApplication::translate("MainWindow", "Username:", Q_NULLPTR));
        passwordLabel->setText(QApplication::translate("MainWindow", "Password:", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Login Page", Q_NULLPTR));
        loginuserButton->setText(QApplication::translate("MainWindow", "Login", Q_NULLPTR));
        loginBackButton->setText(QApplication::translate("MainWindow", "Back", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Register Page", Q_NULLPTR));
        registerBackButton->setText(QApplication::translate("MainWindow", "Back", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
