/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Fri 25. Mar 14:16:02 2011
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QSplitter>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QToolBar>
#include <QtGui/QTreeView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionAddProject;
    QAction *actionAddSuite;
    QAction *actionAddTestCase;
    QAction *actionDeleteTreeItem;
    QAction *actionItemInformation;
    QAction *actionSave;
    QAction *actionRunTestCase;
    QAction *actionStopTestCase;
    QAction *actionReport;
    QAction *actionReportExport;
    QAction *actionMenuAddProject;
    QAction *actionMenuAddSuite;
    QAction *actionMenuAddTestCase;
    QAction *actionMenuSave;
    QAction *actionMenuSaveAs;
    QAction *actionMenuExit;
    QAction *actionOpenFile;
    QAction *actionMenuDeleteTreeItem;
    QAction *actionMenuItemInformation;
    QAction *actionMenuRunTestCase;
    QAction *actionMenuStopTestCase;
    QAction *actionMenuReport;
    QAction *actionMenuReportExport;
    QAction *actionMenuAbout;
    QAction *actionMenuOpenFile;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QSplitter *splitter;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QTreeView *projectTreeView;
    QTabWidget *contentTabPanel;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuTools;
    QMenu *menuReport;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(997, 684);
        MainWindow->setMinimumSize(QSize(0, 0));
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/door_out.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon);
        actionAddProject = new QAction(MainWindow);
        actionAddProject->setObjectName(QString::fromUtf8("actionAddProject"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resources/book_add.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAddProject->setIcon(icon1);
        actionAddSuite = new QAction(MainWindow);
        actionAddSuite->setObjectName(QString::fromUtf8("actionAddSuite"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/resources/folder_add.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAddSuite->setIcon(icon2);
        actionAddTestCase = new QAction(MainWindow);
        actionAddTestCase->setObjectName(QString::fromUtf8("actionAddTestCase"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/resources/page_white_add.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAddTestCase->setIcon(icon3);
        actionDeleteTreeItem = new QAction(MainWindow);
        actionDeleteTreeItem->setObjectName(QString::fromUtf8("actionDeleteTreeItem"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/resources/cross.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDeleteTreeItem->setIcon(icon4);
        actionItemInformation = new QAction(MainWindow);
        actionItemInformation->setObjectName(QString::fromUtf8("actionItemInformation"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/resources/information.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionItemInformation->setIcon(icon5);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/resources/disk.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon6);
        actionRunTestCase = new QAction(MainWindow);
        actionRunTestCase->setObjectName(QString::fromUtf8("actionRunTestCase"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/resources/control_play_blue.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRunTestCase->setIcon(icon7);
        actionStopTestCase = new QAction(MainWindow);
        actionStopTestCase->setObjectName(QString::fromUtf8("actionStopTestCase"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/resources/control_stop_blue.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStopTestCase->setIcon(icon8);
        actionReport = new QAction(MainWindow);
        actionReport->setObjectName(QString::fromUtf8("actionReport"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/resources/report.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReport->setIcon(icon9);
        actionReportExport = new QAction(MainWindow);
        actionReportExport->setObjectName(QString::fromUtf8("actionReportExport"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/resources/report_disk.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReportExport->setIcon(icon10);
        actionMenuAddProject = new QAction(MainWindow);
        actionMenuAddProject->setObjectName(QString::fromUtf8("actionMenuAddProject"));
        actionMenuAddProject->setIcon(icon1);
        actionMenuAddSuite = new QAction(MainWindow);
        actionMenuAddSuite->setObjectName(QString::fromUtf8("actionMenuAddSuite"));
        actionMenuAddSuite->setIcon(icon2);
        actionMenuAddTestCase = new QAction(MainWindow);
        actionMenuAddTestCase->setObjectName(QString::fromUtf8("actionMenuAddTestCase"));
        actionMenuAddTestCase->setIcon(icon3);
        actionMenuSave = new QAction(MainWindow);
        actionMenuSave->setObjectName(QString::fromUtf8("actionMenuSave"));
        actionMenuSave->setIcon(icon6);
        actionMenuSaveAs = new QAction(MainWindow);
        actionMenuSaveAs->setObjectName(QString::fromUtf8("actionMenuSaveAs"));
        actionMenuExit = new QAction(MainWindow);
        actionMenuExit->setObjectName(QString::fromUtf8("actionMenuExit"));
        actionMenuExit->setIcon(icon);
        actionOpenFile = new QAction(MainWindow);
        actionOpenFile->setObjectName(QString::fromUtf8("actionOpenFile"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/resources/folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpenFile->setIcon(icon11);
        actionMenuDeleteTreeItem = new QAction(MainWindow);
        actionMenuDeleteTreeItem->setObjectName(QString::fromUtf8("actionMenuDeleteTreeItem"));
        actionMenuDeleteTreeItem->setIcon(icon4);
        actionMenuItemInformation = new QAction(MainWindow);
        actionMenuItemInformation->setObjectName(QString::fromUtf8("actionMenuItemInformation"));
        actionMenuItemInformation->setIcon(icon5);
        actionMenuRunTestCase = new QAction(MainWindow);
        actionMenuRunTestCase->setObjectName(QString::fromUtf8("actionMenuRunTestCase"));
        actionMenuRunTestCase->setIcon(icon7);
        actionMenuStopTestCase = new QAction(MainWindow);
        actionMenuStopTestCase->setObjectName(QString::fromUtf8("actionMenuStopTestCase"));
        actionMenuStopTestCase->setIcon(icon8);
        actionMenuReport = new QAction(MainWindow);
        actionMenuReport->setObjectName(QString::fromUtf8("actionMenuReport"));
        actionMenuReport->setIcon(icon9);
        actionMenuReportExport = new QAction(MainWindow);
        actionMenuReportExport->setObjectName(QString::fromUtf8("actionMenuReportExport"));
        actionMenuReportExport->setIcon(icon10);
        actionMenuAbout = new QAction(MainWindow);
        actionMenuAbout->setObjectName(QString::fromUtf8("actionMenuAbout"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/resources/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMenuAbout->setIcon(icon12);
        actionMenuOpenFile = new QAction(MainWindow);
        actionMenuOpenFile->setObjectName(QString::fromUtf8("actionMenuOpenFile"));
        actionMenuOpenFile->setIcon(icon11);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(3);
        horizontalLayout->setContentsMargins(3, 3, 3, 3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy1);
        splitter->setOrientation(Qt::Horizontal);
        horizontalLayoutWidget = new QWidget(splitter);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(horizontalLayoutWidget->sizePolicy().hasHeightForWidth());
        horizontalLayoutWidget->setSizePolicy(sizePolicy2);
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(1, 1, 1, 1);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        projectTreeView = new QTreeView(horizontalLayoutWidget);
        projectTreeView->setObjectName(QString::fromUtf8("projectTreeView"));
        projectTreeView->setEnabled(true);
        sizePolicy.setHeightForWidth(projectTreeView->sizePolicy().hasHeightForWidth());
        projectTreeView->setSizePolicy(sizePolicy);
        projectTreeView->setMaximumSize(QSize(250, 16777215));
        projectTreeView->setSizeIncrement(QSize(0, 0));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(8);
        font.setBold(false);
        font.setWeight(50);
        projectTreeView->setFont(font);
        projectTreeView->setMouseTracking(true);
        projectTreeView->setContextMenuPolicy(Qt::CustomContextMenu);
        projectTreeView->setFrameShape(QFrame::StyledPanel);
        projectTreeView->setRootIsDecorated(true);
        projectTreeView->setSortingEnabled(false);
        projectTreeView->setAnimated(true);
        projectTreeView->setExpandsOnDoubleClick(false);

        horizontalLayout_4->addWidget(projectTreeView);

        contentTabPanel = new QTabWidget(horizontalLayoutWidget);
        contentTabPanel->setObjectName(QString::fromUtf8("contentTabPanel"));
        sizePolicy1.setHeightForWidth(contentTabPanel->sizePolicy().hasHeightForWidth());
        contentTabPanel->setSizePolicy(sizePolicy1);
        contentTabPanel->setMinimumSize(QSize(0, 0));
        contentTabPanel->setBaseSize(QSize(0, 0));
        QFont font1;
        font1.setStyleStrategy(QFont::PreferDefault);
        contentTabPanel->setFont(font1);
        contentTabPanel->setAutoFillBackground(false);
        contentTabPanel->setStyleSheet(QString::fromUtf8(""));
        contentTabPanel->setTabsClosable(true);
        contentTabPanel->setMovable(true);

        horizontalLayout_4->addWidget(contentTabPanel);

        splitter->addWidget(horizontalLayoutWidget);

        horizontalLayout->addWidget(splitter);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 997, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        menuReport = new QMenu(menuBar);
        menuReport->setObjectName(QString::fromUtf8("menuReport"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setMovable(false);
        mainToolBar->setIconSize(QSize(22, 22));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuReport->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionMenuAddProject);
        menuFile->addAction(actionMenuAddSuite);
        menuFile->addAction(actionMenuAddTestCase);
        menuFile->addSeparator();
        menuFile->addAction(actionMenuOpenFile);
        menuFile->addAction(actionMenuSave);
        menuFile->addAction(actionMenuSaveAs);
        menuFile->addSeparator();
        menuFile->addAction(actionMenuExit);
        menuTools->addSeparator();
        menuTools->addAction(actionMenuDeleteTreeItem);
        menuTools->addAction(actionMenuItemInformation);
        menuTools->addSeparator();
        menuTools->addAction(actionMenuRunTestCase);
        menuReport->addAction(actionMenuReport);
        menuReport->addAction(actionMenuReportExport);
        menuHelp->addAction(actionMenuAbout);
        mainToolBar->addAction(actionAddProject);
        mainToolBar->addAction(actionAddSuite);
        mainToolBar->addAction(actionAddTestCase);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionSave);
        mainToolBar->addAction(actionOpenFile);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionDeleteTreeItem);
        mainToolBar->addAction(actionItemInformation);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionRunTestCase);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionReport);
        mainToolBar->addAction(actionReportExport);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("MainWindow", "Quit", 0, QApplication::UnicodeUTF8));
        actionExit->setIconText(QApplication::translate("MainWindow", "Quit", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionExit->setToolTip(QApplication::translate("MainWindow", "Quit", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionExit->setStatusTip(QApplication::translate("MainWindow", "Quit", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionAddProject->setText(QApplication::translate("MainWindow", "Add Project", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionAddProject->setStatusTip(QApplication::translate("MainWindow", "Add Project", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionAddSuite->setText(QApplication::translate("MainWindow", "Add Suite", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAddSuite->setToolTip(QApplication::translate("MainWindow", "Add Suite", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionAddSuite->setStatusTip(QApplication::translate("MainWindow", "Add Suite", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionAddTestCase->setText(QApplication::translate("MainWindow", "Add Test Case", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAddTestCase->setToolTip(QApplication::translate("MainWindow", "Add Test Case", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionAddTestCase->setStatusTip(QApplication::translate("MainWindow", "Add Test Case", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionDeleteTreeItem->setText(QApplication::translate("MainWindow", "Delete Item", 0, QApplication::UnicodeUTF8));
        actionDeleteTreeItem->setIconText(QApplication::translate("MainWindow", "Delete Item", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDeleteTreeItem->setToolTip(QApplication::translate("MainWindow", "Delete Item", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionDeleteTreeItem->setStatusTip(QApplication::translate("MainWindow", "Delete Item", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionItemInformation->setText(QApplication::translate("MainWindow", "Details", 0, QApplication::UnicodeUTF8));
        actionItemInformation->setIconText(QApplication::translate("MainWindow", "Details", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionItemInformation->setToolTip(QApplication::translate("MainWindow", "Details", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionItemInformation->setStatusTip(QApplication::translate("MainWindow", "Details", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionSave->setText(QApplication::translate("MainWindow", "Save", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionSave->setStatusTip(QApplication::translate("MainWindow", "Save", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionRunTestCase->setText(QApplication::translate("MainWindow", "Run TestCase", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionRunTestCase->setStatusTip(QApplication::translate("MainWindow", "Run", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionStopTestCase->setText(QApplication::translate("MainWindow", "Stop TestCase", 0, QApplication::UnicodeUTF8));
        actionReport->setText(QApplication::translate("MainWindow", "Report", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionReport->setToolTip(QApplication::translate("MainWindow", "Show Report", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionReportExport->setText(QApplication::translate("MainWindow", "Report Export", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionReportExport->setToolTip(QApplication::translate("MainWindow", "Export Report", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionMenuAddProject->setText(QApplication::translate("MainWindow", "New Project", 0, QApplication::UnicodeUTF8));
        actionMenuAddSuite->setText(QApplication::translate("MainWindow", "New Suite", 0, QApplication::UnicodeUTF8));
        actionMenuAddTestCase->setText(QApplication::translate("MainWindow", "New Test Case", 0, QApplication::UnicodeUTF8));
        actionMenuSave->setText(QApplication::translate("MainWindow", "Save", 0, QApplication::UnicodeUTF8));
        actionMenuSaveAs->setText(QApplication::translate("MainWindow", "Save as...", 0, QApplication::UnicodeUTF8));
        actionMenuExit->setText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
        actionOpenFile->setText(QApplication::translate("MainWindow", "Open file", 0, QApplication::UnicodeUTF8));
        actionMenuDeleteTreeItem->setText(QApplication::translate("MainWindow", "Delete", 0, QApplication::UnicodeUTF8));
        actionMenuItemInformation->setText(QApplication::translate("MainWindow", "Information", 0, QApplication::UnicodeUTF8));
        actionMenuRunTestCase->setText(QApplication::translate("MainWindow", "Run", 0, QApplication::UnicodeUTF8));
        actionMenuStopTestCase->setText(QApplication::translate("MainWindow", "Stop", 0, QApplication::UnicodeUTF8));
        actionMenuReport->setText(QApplication::translate("MainWindow", "Show report", 0, QApplication::UnicodeUTF8));
        actionMenuReportExport->setText(QApplication::translate("MainWindow", "Export report", 0, QApplication::UnicodeUTF8));
        actionMenuAbout->setText(QApplication::translate("MainWindow", "About MQTester", 0, QApplication::UnicodeUTF8));
        actionMenuOpenFile->setText(QApplication::translate("MainWindow", "Open file", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        contentTabPanel->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        menuTools->setTitle(QApplication::translate("MainWindow", "Item", 0, QApplication::UnicodeUTF8));
        menuReport->setTitle(QApplication::translate("MainWindow", "Report", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
