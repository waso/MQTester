/********************************************************************************
** Form generated from reading UI file 'testcaseform.ui'
**
** Created: Fri 25. Mar 14:16:02 2011
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTCASEFORM_H
#define UI_TESTCASEFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGraphicsView>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStackedWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestCaseForm
{
public:
    QVBoxLayout *verticalLayout_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_11;
    QComboBox *pageDetailsSelector;
    QLabel *label_13;
    QGraphicsView *testStatus;
    QLabel *label_30;
    QLabel *lastRunHour;
    QSpacerItem *horizontalSpacer_3;
    QStackedWidget *stackedWidget;
    QWidget *requestPage;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_4;
    QLabel *label;
    QLineEdit *reqHostName;
    QLineEdit *reqPort;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *reqChannel;
    QLabel *label_14;
    QComboBox *reqTransportType;
    QLabel *label_12;
    QLabel *label_20;
    QComboBox *reqIpVersion;
    QLabel *label_16;
    QLineEdit *reqUserId;
    QLabel *label_17;
    QLineEdit *reqPassword;
    QComboBox *reqMessageFormat;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *reqQueue;
    QLabel *label_18;
    QHBoxLayout *horizontalLayout_9;
    QComboBox *messageIdSetType;
    QLabel *label_Message_ID;
    QLineEdit *reqUserMessageId;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_22;
    QHBoxLayout *horizontalLayout_10;
    QComboBox *correlationIdSetType;
    QLabel *label_Correlation_ID;
    QLineEdit *reqUserCorrelationId;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *reqQueueManager;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_4;
    QPlainTextEdit *reqMessage;
    QWidget *responsePage;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_3;
    QLabel *label_6;
    QLineEdit *resHostName;
    QLabel *label_7;
    QLineEdit *resPort;
    QLabel *label_10;
    QLabel *label_23;
    QComboBox *resTransportType;
    QLabel *label_21;
    QLabel *label_27;
    QLineEdit *resPassword;
    QComboBox *resMessageFormat;
    QLabel *label_25;
    QComboBox *resIpVersion;
    QLabel *label_28;
    QLineEdit *resUserId;
    QLineEdit *resChannel;
    QLabel *label_19;
    QHBoxLayout *horizontalLayout_7;
    QSpinBox *responseTimeout;
    QLabel *label_24;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_5;
    QLabel *label_8;
    QLineEdit *resQueueManager;
    QLabel *label_9;
    QLineEdit *resQueue;
    QLabel *label_15;
    QHBoxLayout *horizontalLayout_8;
    QComboBox *resSelectionMethod;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox_8;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_11;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_10;
    QPushButton *acAdd;
    QPushButton *acRemove;
    QSpacerItem *verticalSpacer;
    QListWidget *acList;
    QGroupBox *groupBox_7;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_26;
    QLineEdit *resMessageId;
    QLabel *label_29;
    QLineEdit *resCorrelationId;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_3;
    QPlainTextEdit *resMessage;

    void setupUi(QWidget *TestCaseForm)
    {
        if (TestCaseForm->objectName().isEmpty())
            TestCaseForm->setObjectName(QString::fromUtf8("TestCaseForm"));
        TestCaseForm->resize(806, 720);
        verticalLayout_3 = new QVBoxLayout(TestCaseForm);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        scrollArea = new QScrollArea(TestCaseForm);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setFrameShadow(QFrame::Raised);
        scrollArea->setLineWidth(0);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 806, 720));
        verticalLayout_5 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_5->setSpacing(9);
#ifndef Q_OS_MAC
        verticalLayout_5->setContentsMargins(9, 9, 9, 9);
#endif
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, 20, -1, -1);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_11 = new QLabel(scrollAreaWidgetContents);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_5->addWidget(label_11);

        pageDetailsSelector = new QComboBox(scrollAreaWidgetContents);
        pageDetailsSelector->setObjectName(QString::fromUtf8("pageDetailsSelector"));

        horizontalLayout_5->addWidget(pageDetailsSelector);

        label_13 = new QLabel(scrollAreaWidgetContents);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_5->addWidget(label_13);

        testStatus = new QGraphicsView(scrollAreaWidgetContents);
        testStatus->setObjectName(QString::fromUtf8("testStatus"));
        testStatus->setMinimumSize(QSize(50, 20));
        testStatus->setMaximumSize(QSize(50, 20));

        horizontalLayout_5->addWidget(testStatus);

        label_30 = new QLabel(scrollAreaWidgetContents);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        horizontalLayout_5->addWidget(label_30);

        lastRunHour = new QLabel(scrollAreaWidgetContents);
        lastRunHour->setObjectName(QString::fromUtf8("lastRunHour"));

        horizontalLayout_5->addWidget(lastRunHour);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        verticalLayout_4->addLayout(horizontalLayout_5);

        stackedWidget = new QStackedWidget(scrollAreaWidgetContents);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        requestPage = new QWidget();
        requestPage->setObjectName(QString::fromUtf8("requestPage"));
        verticalLayout_7 = new QVBoxLayout(requestPage);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        groupBox_5 = new QGroupBox(requestPage);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        gridLayout = new QGridLayout(groupBox_5);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label = new QLabel(groupBox_5);
        label->setObjectName(QString::fromUtf8("label"));
        label->setLayoutDirection(Qt::RightToLeft);

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        reqHostName = new QLineEdit(groupBox_5);
        reqHostName->setObjectName(QString::fromUtf8("reqHostName"));

        gridLayout_4->addWidget(reqHostName, 0, 1, 1, 1);

        reqPort = new QLineEdit(groupBox_5);
        reqPort->setObjectName(QString::fromUtf8("reqPort"));

        gridLayout_4->addWidget(reqPort, 0, 3, 1, 1);

        label_2 = new QLabel(groupBox_5);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setLayoutDirection(Qt::RightToLeft);

        gridLayout_4->addWidget(label_2, 0, 2, 1, 1);

        label_3 = new QLabel(groupBox_5);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setLayoutDirection(Qt::RightToLeft);

        gridLayout_4->addWidget(label_3, 1, 0, 1, 1);

        reqChannel = new QLineEdit(groupBox_5);
        reqChannel->setObjectName(QString::fromUtf8("reqChannel"));

        gridLayout_4->addWidget(reqChannel, 1, 1, 1, 1);

        label_14 = new QLabel(groupBox_5);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_4->addWidget(label_14, 2, 0, 1, 1);

        reqTransportType = new QComboBox(groupBox_5);
        reqTransportType->setObjectName(QString::fromUtf8("reqTransportType"));

        gridLayout_4->addWidget(reqTransportType, 2, 1, 1, 1);

        label_12 = new QLabel(groupBox_5);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setLayoutDirection(Qt::LeftToRight);

        gridLayout_4->addWidget(label_12, 3, 0, 1, 1);

        label_20 = new QLabel(groupBox_5);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_4->addWidget(label_20, 1, 2, 1, 1);

        reqIpVersion = new QComboBox(groupBox_5);
        reqIpVersion->setObjectName(QString::fromUtf8("reqIpVersion"));

        gridLayout_4->addWidget(reqIpVersion, 1, 3, 1, 1);

        label_16 = new QLabel(groupBox_5);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_4->addWidget(label_16, 2, 2, 1, 1);

        reqUserId = new QLineEdit(groupBox_5);
        reqUserId->setObjectName(QString::fromUtf8("reqUserId"));

        gridLayout_4->addWidget(reqUserId, 2, 3, 1, 1);

        label_17 = new QLabel(groupBox_5);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_4->addWidget(label_17, 3, 2, 1, 1);

        reqPassword = new QLineEdit(groupBox_5);
        reqPassword->setObjectName(QString::fromUtf8("reqPassword"));

        gridLayout_4->addWidget(reqPassword, 3, 3, 1, 1);

        reqMessageFormat = new QComboBox(groupBox_5);
        reqMessageFormat->setObjectName(QString::fromUtf8("reqMessageFormat"));

        gridLayout_4->addWidget(reqMessageFormat, 3, 1, 1, 1);


        gridLayout->addLayout(gridLayout_4, 0, 0, 1, 1);


        verticalLayout_7->addWidget(groupBox_5);

        groupBox = new QGroupBox(requestPage);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setLayoutDirection(Qt::LeftToRight);

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setLayoutDirection(Qt::RightToLeft);

        gridLayout_2->addWidget(label_5, 2, 0, 1, 1);

        reqQueue = new QLineEdit(groupBox);
        reqQueue->setObjectName(QString::fromUtf8("reqQueue"));

        gridLayout_2->addWidget(reqQueue, 2, 1, 1, 1);

        label_18 = new QLabel(groupBox);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setLayoutDirection(Qt::LeftToRight);

        gridLayout_2->addWidget(label_18, 3, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        messageIdSetType = new QComboBox(groupBox);
        messageIdSetType->setObjectName(QString::fromUtf8("messageIdSetType"));

        horizontalLayout_9->addWidget(messageIdSetType);

        label_Message_ID = new QLabel(groupBox);
        label_Message_ID->setObjectName(QString::fromUtf8("label_Message_ID"));
        label_Message_ID->setEnabled(true);

        horizontalLayout_9->addWidget(label_Message_ID);

        reqUserMessageId = new QLineEdit(groupBox);
        reqUserMessageId->setObjectName(QString::fromUtf8("reqUserMessageId"));
        reqUserMessageId->setEnabled(true);
        reqUserMessageId->setMaximumSize(QSize(180, 16777215));
        reqUserMessageId->setMaxLength(24);

        horizontalLayout_9->addWidget(reqUserMessageId);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_5);


        gridLayout_2->addLayout(horizontalLayout_9, 3, 1, 1, 1);

        label_22 = new QLabel(groupBox);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout_2->addWidget(label_22, 4, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        correlationIdSetType = new QComboBox(groupBox);
        correlationIdSetType->setObjectName(QString::fromUtf8("correlationIdSetType"));

        horizontalLayout_10->addWidget(correlationIdSetType);

        label_Correlation_ID = new QLabel(groupBox);
        label_Correlation_ID->setObjectName(QString::fromUtf8("label_Correlation_ID"));

        horizontalLayout_10->addWidget(label_Correlation_ID);

        reqUserCorrelationId = new QLineEdit(groupBox);
        reqUserCorrelationId->setObjectName(QString::fromUtf8("reqUserCorrelationId"));
        reqUserCorrelationId->setMinimumSize(QSize(0, 0));
        reqUserCorrelationId->setMaximumSize(QSize(180, 16777215));
        reqUserCorrelationId->setMaxLength(24);

        horizontalLayout_10->addWidget(reqUserCorrelationId);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_6);


        gridLayout_2->addLayout(horizontalLayout_10, 4, 1, 1, 1);

        reqQueueManager = new QLineEdit(groupBox);
        reqQueueManager->setObjectName(QString::fromUtf8("reqQueueManager"));

        gridLayout_2->addWidget(reqQueueManager, 0, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);


        verticalLayout_7->addWidget(groupBox);

        groupBox_3 = new QGroupBox(requestPage);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        horizontalLayout_4 = new QHBoxLayout(groupBox_3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        reqMessage = new QPlainTextEdit(groupBox_3);
        reqMessage->setObjectName(QString::fromUtf8("reqMessage"));
        reqMessage->setMinimumSize(QSize(200, 100));

        horizontalLayout_4->addWidget(reqMessage);


        verticalLayout_7->addWidget(groupBox_3);

        stackedWidget->addWidget(requestPage);
        responsePage = new QWidget();
        responsePage->setObjectName(QString::fromUtf8("responsePage"));
        verticalLayout_6 = new QVBoxLayout(responsePage);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        groupBox_2 = new QGroupBox(responsePage);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setLayoutDirection(Qt::RightToLeft);

        gridLayout_3->addWidget(label_6, 0, 0, 1, 1);

        resHostName = new QLineEdit(groupBox_2);
        resHostName->setObjectName(QString::fromUtf8("resHostName"));

        gridLayout_3->addWidget(resHostName, 0, 1, 1, 1);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setLayoutDirection(Qt::RightToLeft);

        gridLayout_3->addWidget(label_7, 0, 2, 1, 1);

        resPort = new QLineEdit(groupBox_2);
        resPort->setObjectName(QString::fromUtf8("resPort"));

        gridLayout_3->addWidget(resPort, 0, 3, 1, 1);

        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setLayoutDirection(Qt::RightToLeft);

        gridLayout_3->addWidget(label_10, 1, 0, 1, 1);

        label_23 = new QLabel(groupBox_2);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout_3->addWidget(label_23, 2, 0, 1, 1);

        resTransportType = new QComboBox(groupBox_2);
        resTransportType->setObjectName(QString::fromUtf8("resTransportType"));

        gridLayout_3->addWidget(resTransportType, 2, 1, 1, 1);

        label_21 = new QLabel(groupBox_2);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_3->addWidget(label_21, 3, 0, 1, 1);

        label_27 = new QLabel(groupBox_2);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        gridLayout_3->addWidget(label_27, 3, 2, 1, 1);

        resPassword = new QLineEdit(groupBox_2);
        resPassword->setObjectName(QString::fromUtf8("resPassword"));

        gridLayout_3->addWidget(resPassword, 3, 3, 1, 1);

        resMessageFormat = new QComboBox(groupBox_2);
        resMessageFormat->setObjectName(QString::fromUtf8("resMessageFormat"));

        gridLayout_3->addWidget(resMessageFormat, 3, 1, 1, 1);

        label_25 = new QLabel(groupBox_2);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout_3->addWidget(label_25, 2, 2, 1, 1);

        resIpVersion = new QComboBox(groupBox_2);
        resIpVersion->setObjectName(QString::fromUtf8("resIpVersion"));

        gridLayout_3->addWidget(resIpVersion, 1, 3, 1, 1);

        label_28 = new QLabel(groupBox_2);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        gridLayout_3->addWidget(label_28, 1, 2, 1, 1);

        resUserId = new QLineEdit(groupBox_2);
        resUserId->setObjectName(QString::fromUtf8("resUserId"));

        gridLayout_3->addWidget(resUserId, 2, 3, 1, 1);

        resChannel = new QLineEdit(groupBox_2);
        resChannel->setObjectName(QString::fromUtf8("resChannel"));

        gridLayout_3->addWidget(resChannel, 1, 1, 1, 1);

        label_19 = new QLabel(groupBox_2);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_3->addWidget(label_19, 4, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        responseTimeout = new QSpinBox(groupBox_2);
        responseTimeout->setObjectName(QString::fromUtf8("responseTimeout"));
        responseTimeout->setMaximumSize(QSize(100, 16777215));
        responseTimeout->setMaximum(999999);

        horizontalLayout_7->addWidget(responseTimeout);

        label_24 = new QLabel(groupBox_2);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        horizontalLayout_7->addWidget(label_24);


        gridLayout_3->addLayout(horizontalLayout_7, 4, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_3);


        verticalLayout_6->addWidget(groupBox_2);

        groupBox_6 = new QGroupBox(responsePage);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        gridLayout_6 = new QGridLayout(groupBox_6);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_8 = new QLabel(groupBox_6);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setLayoutDirection(Qt::RightToLeft);

        gridLayout_5->addWidget(label_8, 0, 0, 1, 1);

        resQueueManager = new QLineEdit(groupBox_6);
        resQueueManager->setObjectName(QString::fromUtf8("resQueueManager"));

        gridLayout_5->addWidget(resQueueManager, 0, 1, 1, 1);

        label_9 = new QLabel(groupBox_6);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setLayoutDirection(Qt::RightToLeft);

        gridLayout_5->addWidget(label_9, 1, 0, 1, 1);

        resQueue = new QLineEdit(groupBox_6);
        resQueue->setObjectName(QString::fromUtf8("resQueue"));

        gridLayout_5->addWidget(resQueue, 1, 1, 1, 1);

        label_15 = new QLabel(groupBox_6);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_5->addWidget(label_15, 2, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        resSelectionMethod = new QComboBox(groupBox_6);
        resSelectionMethod->setObjectName(QString::fromUtf8("resSelectionMethod"));

        horizontalLayout_8->addWidget(resSelectionMethod);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);


        gridLayout_5->addLayout(horizontalLayout_8, 2, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 0, 0, 1, 1);


        verticalLayout_6->addWidget(groupBox_6);

        groupBox_8 = new QGroupBox(responsePage);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        verticalLayout_9 = new QVBoxLayout(groupBox_8);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        acAdd = new QPushButton(groupBox_8);
        acAdd->setObjectName(QString::fromUtf8("acAdd"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/TestCaseForm/resources/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        acAdd->setIcon(icon);

        verticalLayout_10->addWidget(acAdd);

        acRemove = new QPushButton(groupBox_8);
        acRemove->setObjectName(QString::fromUtf8("acRemove"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/TestCaseForm/resources/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        acRemove->setIcon(icon1);

        verticalLayout_10->addWidget(acRemove);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer);


        horizontalLayout_6->addLayout(verticalLayout_10);


        horizontalLayout_11->addLayout(horizontalLayout_6);

        acList = new QListWidget(groupBox_8);
        acList->setObjectName(QString::fromUtf8("acList"));

        horizontalLayout_11->addWidget(acList);


        verticalLayout_9->addLayout(horizontalLayout_11);


        verticalLayout_6->addWidget(groupBox_8);

        groupBox_7 = new QGroupBox(responsePage);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_7);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_26 = new QLabel(groupBox_7);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setEnabled(true);

        horizontalLayout->addWidget(label_26);

        resMessageId = new QLineEdit(groupBox_7);
        resMessageId->setObjectName(QString::fromUtf8("resMessageId"));
        resMessageId->setEnabled(false);
        resMessageId->setMinimumSize(QSize(180, 0));
        resMessageId->setMaximumSize(QSize(180, 16777215));
        resMessageId->setReadOnly(false);

        horizontalLayout->addWidget(resMessageId);

        label_29 = new QLabel(groupBox_7);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        horizontalLayout->addWidget(label_29);

        resCorrelationId = new QLineEdit(groupBox_7);
        resCorrelationId->setObjectName(QString::fromUtf8("resCorrelationId"));
        resCorrelationId->setEnabled(false);
        resCorrelationId->setMinimumSize(QSize(180, 0));
        resCorrelationId->setMaximumSize(QSize(180, 16777215));
        resCorrelationId->setReadOnly(false);

        horizontalLayout->addWidget(resCorrelationId);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        horizontalLayout_2->addLayout(horizontalLayout);


        verticalLayout_6->addWidget(groupBox_7);

        groupBox_4 = new QGroupBox(responsePage);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_4);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        resMessage = new QPlainTextEdit(groupBox_4);
        resMessage->setObjectName(QString::fromUtf8("resMessage"));
        resMessage->setMinimumSize(QSize(200, 100));

        horizontalLayout_3->addWidget(resMessage);


        verticalLayout_6->addWidget(groupBox_4);

        stackedWidget->addWidget(responsePage);

        verticalLayout_4->addWidget(stackedWidget);


        verticalLayout_5->addLayout(verticalLayout_4);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_3->addWidget(scrollArea);


        retranslateUi(TestCaseForm);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TestCaseForm);
    } // setupUi

    void retranslateUi(QWidget *TestCaseForm)
    {
        TestCaseForm->setWindowTitle(QApplication::translate("TestCaseForm", "Form", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("TestCaseForm", "Details for: ", 0, QApplication::UnicodeUTF8));
        pageDetailsSelector->clear();
        pageDetailsSelector->insertItems(0, QStringList()
         << QApplication::translate("TestCaseForm", "Request", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TestCaseForm", "Response", 0, QApplication::UnicodeUTF8)
        );
        label_13->setText(QApplication::translate("TestCaseForm", "Test status:", 0, QApplication::UnicodeUTF8));
        label_30->setText(QApplication::translate("TestCaseForm", "   Last run:", 0, QApplication::UnicodeUTF8));
        lastRunHour->setText(QString());
        groupBox_5->setTitle(QApplication::translate("TestCaseForm", "Channel", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("TestCaseForm", "Host:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("TestCaseForm", "Port:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("TestCaseForm", "Channel:", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("TestCaseForm", "Transport type:", 0, QApplication::UnicodeUTF8));
        reqTransportType->clear();
        reqTransportType->insertItems(0, QStringList()
         << QApplication::translate("TestCaseForm", "MQXPT_LU62", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TestCaseForm", "MQXPT_TCP", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TestCaseForm", "MQXPT_NETBIOS", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TestCaseForm", "MQXPT_SPX", 0, QApplication::UnicodeUTF8)
        );
        label_12->setText(QApplication::translate("TestCaseForm", "Message format:", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("TestCaseForm", "IP version:", 0, QApplication::UnicodeUTF8));
        reqIpVersion->clear();
        reqIpVersion->insertItems(0, QStringList()
         << QApplication::translate("TestCaseForm", "MQIPADDR_IPV4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TestCaseForm", "MQIPADDR_IPV6", 0, QApplication::UnicodeUTF8)
        );
        label_16->setText(QApplication::translate("TestCaseForm", "User ID:", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("TestCaseForm", "Password:", 0, QApplication::UnicodeUTF8));
        reqMessageFormat->clear();
        reqMessageFormat->insertItems(0, QStringList()
         << QApplication::translate("TestCaseForm", "MQFMT_ADMIN", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TestCaseForm", "MQFMT_CICS", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TestCaseForm", "MQFMT_COMMAND_1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TestCaseForm", "MQFMT_COMMAND_2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TestCaseForm", "MQFMT_DEAD_LETTER_HEADER", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TestCaseForm", "MQFMT_DIST_HEADER", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TestCaseForm", "MQFMT_EVENT", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TestCaseForm", "MQFMT_IMS", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TestCaseForm", "MQFMT_IMS_VAR_STRING", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TestCaseForm", "MQFMT_MD_EXTENSION", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TestCaseForm", "MQFMT_PCF", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TestCaseForm", "MQFMT_REF_MSG_HEADER", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TestCaseForm", "MQFMT_RF_HEADER", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TestCaseForm", "MQFMT_RF_HEADER_2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TestCaseForm", "MQFMT_STRING", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TestCaseForm", "MQFMT_TRIGGER", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TestCaseForm", "MQFMT_WORK_INFO_HEADER", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TestCaseForm", "MQFMT_XMIT_Q_HEADER", 0, QApplication::UnicodeUTF8)
        );
        groupBox->setTitle(QApplication::translate("TestCaseForm", "Queue Manager", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("TestCaseForm", "Queue Manager:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("TestCaseForm", "Queue:", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("TestCaseForm", "Set Message ID:", 0, QApplication::UnicodeUTF8));
        messageIdSetType->clear();
        messageIdSetType->insertItems(0, QStringList()
         << QApplication::translate("TestCaseForm", "Automatically by MQ", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TestCaseForm", "Manually", 0, QApplication::UnicodeUTF8)
        );
        label_Message_ID->setText(QApplication::translate("TestCaseForm", "    Message ID:", 0, QApplication::UnicodeUTF8));
        reqUserMessageId->setInputMask(QString());
        label_22->setText(QApplication::translate("TestCaseForm", "Set Correlation ID:", 0, QApplication::UnicodeUTF8));
        correlationIdSetType->clear();
        correlationIdSetType->insertItems(0, QStringList()
         << QApplication::translate("TestCaseForm", "Automatically by MQ", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TestCaseForm", "Manually", 0, QApplication::UnicodeUTF8)
        );
        label_Correlation_ID->setText(QApplication::translate("TestCaseForm", "Correlation ID:", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("TestCaseForm", "Request message", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("TestCaseForm", "Channel", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("TestCaseForm", "Host:", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("TestCaseForm", "Port:", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("TestCaseForm", "Channel:", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("TestCaseForm", "Transport type:", 0, QApplication::UnicodeUTF8));
        resTransportType->clear();
        resTransportType->insertItems(0, QStringList()
         << QApplication::translate("TestCaseForm", "MQXPT_LU62", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TestCaseForm", "MQXPT_TCP", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TestCaseForm", "MQXPT_NETBIOS", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TestCaseForm", "MQXPT_SPX", 0, QApplication::UnicodeUTF8)
        );
        label_21->setText(QApplication::translate("TestCaseForm", "Message format:", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("TestCaseForm", "Password:", 0, QApplication::UnicodeUTF8));
        resMessageFormat->clear();
        resMessageFormat->insertItems(0, QStringList()
         << QApplication::translate("TestCaseForm", "MQFMT_ADMIN", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TestCaseForm", "MQFMT_CICS", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TestCaseForm", "MQFMT_COMMAND_1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TestCaseForm", "MQFMT_COMMAND_2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TestCaseForm", "MQFMT_DEAD_LETTER_HEADER", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TestCaseForm", "MQFMT_DIST_HEADER", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TestCaseForm", "MQFMT_EVENT", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TestCaseForm", "MQFMT_IMS", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TestCaseForm", "MQFMT_IMS_VAR_STRING", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TestCaseForm", "MQFMT_MD_EXTENSION", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TestCaseForm", "MQFMT_PCF", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TestCaseForm", "MQFMT_REF_MSG_HEADER", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TestCaseForm", "MQFMT_RF_HEADER", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TestCaseForm", "MQFMT_RF_HEADER_2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TestCaseForm", "MQFMT_STRING", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TestCaseForm", "MQFMT_TRIGGER", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TestCaseForm", "MQFMT_WORK_INFO_HEADER", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TestCaseForm", "MQFMT_XMIT_Q_HEADER", 0, QApplication::UnicodeUTF8)
        );
        label_25->setText(QApplication::translate("TestCaseForm", "User ID:", 0, QApplication::UnicodeUTF8));
        resIpVersion->clear();
        resIpVersion->insertItems(0, QStringList()
         << QApplication::translate("TestCaseForm", "MQIPADDR_IPV4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TestCaseForm", "MQIPADDR_IPV6", 0, QApplication::UnicodeUTF8)
        );
        label_28->setText(QApplication::translate("TestCaseForm", "IP version:", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("TestCaseForm", "Timeout:", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("TestCaseForm", "seconds", 0, QApplication::UnicodeUTF8));
        groupBox_6->setTitle(QApplication::translate("TestCaseForm", "Queue Manager", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("TestCaseForm", "Queue Manager:", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("TestCaseForm", "Queue:", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("TestCaseForm", "Selection method:", 0, QApplication::UnicodeUTF8));
        resSelectionMethod->clear();
        resSelectionMethod->insertItems(0, QStringList()
         << QApplication::translate("TestCaseForm", "Request MsgID is equal to Response MsgID", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TestCaseForm", "Request CorrelationID is equal to Response CorrelationID", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TestCaseForm", "Request MsgID is equal to Response CorrelationID", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TestCaseForm", "None", 0, QApplication::UnicodeUTF8)
        );
        groupBox_8->setTitle(QApplication::translate("TestCaseForm", "Acceptance criteria", 0, QApplication::UnicodeUTF8));
        acAdd->setText(QString());
        acRemove->setText(QString());
        groupBox_7->setTitle(QApplication::translate("TestCaseForm", "Response properties", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("TestCaseForm", "Message ID:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        resMessageId->setToolTip(QApplication::translate("TestCaseForm", "Response Message ID", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_29->setText(QApplication::translate("TestCaseForm", "Correlation ID:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        resCorrelationId->setToolTip(QApplication::translate("TestCaseForm", "Response Correlation ID", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        groupBox_4->setTitle(QApplication::translate("TestCaseForm", "Response message", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TestCaseForm: public Ui_TestCaseForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTCASEFORM_H
