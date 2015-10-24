/********************************************************************************
** Form generated from reading UI file 'glcapsviewer.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GLCAPSVIEWER_H
#define UI_GLCAPSVIEWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_glcapsviewerClass
{
public:
    QAction *actionRefresh;
    QAction *actionUpload;
    QAction *actionDatabase;
    QAction *actionSettings;
    QAction *actionAbout;
    QAction *actionExit;
    QAction *actionSave_xml;
    QAction *actionDevice;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_7;
    QWidget *widget;
    QVBoxLayout *verticalLayout_8;
    QLabel *labelDescription;
    QLabel *labelReportPresent;
    QTabWidget *tabWidget;
    QWidget *tabDevice;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidgetDevice;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_9;
    QWidget *widget_3;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    QLineEdit *lineEditImplementation;
    QTreeView *treeViewImplementation;
    QWidget *tab;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_2;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *lineEditeExtensions;
    QTreeView *treeViewExtensions;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget_4;
    QFormLayout *formLayout_3;
    QLabel *label_4;
    QLineEdit *lineEditTexFormats;
    QListView *listViewCompressedFormats;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_6;
    QTreeWidget *treeWidgetInternalFormats;
    QWidget *tabDatabase;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButtonRefreshDataBase;
    QHBoxLayout *horizontalLayout_4;
    QListWidget *listWidgetDatabaseDevices;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QComboBox *comboBoxDeviceVersions;
    QLabel *labelDatabaseDeviceImplementation;
    QTableWidget *tableWidgetDatabaseDeviceReport;
    QLabel *labelDatabaseDeviceExtensions;
    QListWidget *listWidgetDatabaseDeviceExtensions;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *glcapsviewerClass)
    {
        if (glcapsviewerClass->objectName().isEmpty())
            glcapsviewerClass->setObjectName(QStringLiteral("glcapsviewerClass"));
        glcapsviewerClass->resize(994, 796);
        QIcon icon;
        icon.addFile(QStringLiteral(":/glcapsviewer/Resources/glCapsViewer.ico"), QSize(), QIcon::Normal, QIcon::Off);
        glcapsviewerClass->setWindowIcon(icon);
        glcapsviewerClass->setLayoutDirection(Qt::LeftToRight);
        glcapsviewerClass->setStyleSheet(QLatin1String("QToolBar {\n"
"	background-image: url(:/glcapsviewer/Resources/OpenGL48.png);\n"
"	background-repeat:no;\n"
"	background-position:right;\n"
"	border:0px;\n"
"}\n"
"\n"
"QTabWidget::pane {   \n"
"	align:center;\n"
"	border-top: 1px solid rgb(180, 180, 180);\n"
"}\n"
"\n"
"QTabWidget::tab-bar { \n"
"	alignment: center; \n"
"}\n"
"\n"
"QTabBar::tab {\n"
"    min-width: 8ex;\n"
"    padding: 8px 16px;\n"
"   border:0px;\n"
"}\n"
"\n"
"QTabBar::tab:hover {       \n"
"	color: rgb(85, 170, 255);\n"
"}\n"
"\n"
"QTabBar::tab:selected {\n"
"color: rgb(0, 85, 255);\n"
"	background-color: rgb(205, 205, 205);\n"
"border-left: 1px solid rgb(180, 180, 180);\n"
"border-right: 1px solid rgb(180, 180, 180);\n"
"}"));
        actionRefresh = new QAction(glcapsviewerClass);
        actionRefresh->setObjectName(QStringLiteral("actionRefresh"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/glcapsviewer/Resources/refresh48.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRefresh->setIcon(icon1);
        actionUpload = new QAction(glcapsviewerClass);
        actionUpload->setObjectName(QStringLiteral("actionUpload"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/glcapsviewer/Resources/upload48.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUpload->setIcon(icon2);
        actionDatabase = new QAction(glcapsviewerClass);
        actionDatabase->setObjectName(QStringLiteral("actionDatabase"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/glcapsviewer/Resources/browse48.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDatabase->setIcon(icon3);
        actionSettings = new QAction(glcapsviewerClass);
        actionSettings->setObjectName(QStringLiteral("actionSettings"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/glcapsviewer/Resources/settings48.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSettings->setIcon(icon4);
        actionAbout = new QAction(glcapsviewerClass);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/glcapsviewer/Resources/about48.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon5);
        actionExit = new QAction(glcapsviewerClass);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/glcapsviewer/Resources/close48.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon6);
        actionSave_xml = new QAction(glcapsviewerClass);
        actionSave_xml->setObjectName(QStringLiteral("actionSave_xml"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/glcapsviewer/Resources/save48.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_xml->setIcon(icon7);
        actionDevice = new QAction(glcapsviewerClass);
        actionDevice->setObjectName(QStringLiteral("actionDevice"));
        actionDevice->setEnabled(false);
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/glcapsviewer/Resources/device48.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDevice->setIcon(icon8);
        centralWidget = new QWidget(glcapsviewerClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_7 = new QVBoxLayout(centralWidget);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setStyleSheet(QStringLiteral("background-color: rgb(68, 68, 68);"));
        verticalLayout_8 = new QVBoxLayout(widget);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        labelDescription = new QLabel(widget);
        labelDescription->setObjectName(QStringLiteral("labelDescription"));
        labelDescription->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 11pt;"));
        labelDescription->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(labelDescription);

        labelReportPresent = new QLabel(widget);
        labelReportPresent->setObjectName(QStringLiteral("labelReportPresent"));
        labelReportPresent->setStyleSheet(QLatin1String("font: 10pt;\n"
"color: rgb(255, 255, 255);"));
        labelReportPresent->setFrameShape(QFrame::NoFrame);
        labelReportPresent->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(labelReportPresent);


        verticalLayout_7->addWidget(widget);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setTabBarAutoHide(false);
        tabDevice = new QWidget();
        tabDevice->setObjectName(QStringLiteral("tabDevice"));
        horizontalLayout_3 = new QHBoxLayout(tabDevice);
        horizontalLayout_3->setSpacing(5);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tabWidgetDevice = new QTabWidget(tabDevice);
        tabWidgetDevice->setObjectName(QStringLiteral("tabWidgetDevice"));
        tabWidgetDevice->setAutoFillBackground(true);
        tabWidgetDevice->setTabPosition(QTabWidget::North);
        tabWidgetDevice->setTabShape(QTabWidget::Rounded);
        tabWidgetDevice->setElideMode(Qt::ElideNone);
        tabWidgetDevice->setUsesScrollButtons(true);
        tabWidgetDevice->setDocumentMode(false);
        tabWidgetDevice->setTabBarAutoHide(false);
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        verticalLayout_9 = new QVBoxLayout(tab_4);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        widget_3 = new QWidget(tab_4);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        formLayout_2 = new QFormLayout(widget_3);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setContentsMargins(0, 2, 0, 2);
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setScaledContents(false);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_3);

        lineEditImplementation = new QLineEdit(widget_3);
        lineEditImplementation->setObjectName(QStringLiteral("lineEditImplementation"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEditImplementation->sizePolicy().hasHeightForWidth());
        lineEditImplementation->setSizePolicy(sizePolicy1);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEditImplementation);


        verticalLayout_9->addWidget(widget_3);

        treeViewImplementation = new QTreeView(tab_4);
        treeViewImplementation->setObjectName(QStringLiteral("treeViewImplementation"));
        treeViewImplementation->setStyleSheet(QStringLiteral("QTreeView::item { height: 24px;}"));
        treeViewImplementation->setEditTriggers(QAbstractItemView::NoEditTriggers);
        treeViewImplementation->setAlternatingRowColors(true);
        treeViewImplementation->header()->setVisible(false);

        verticalLayout_9->addWidget(treeViewImplementation);

        tabWidgetDevice->addTab(tab_4, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_4 = new QVBoxLayout(tab);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, -1, 9, -1);
        widget_2 = new QWidget(tab);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        formLayout = new QFormLayout(widget_2);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 2, 0, 2);
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setScaledContents(false);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        lineEditeExtensions = new QLineEdit(widget_2);
        lineEditeExtensions->setObjectName(QStringLiteral("lineEditeExtensions"));
        sizePolicy1.setHeightForWidth(lineEditeExtensions->sizePolicy().hasHeightForWidth());
        lineEditeExtensions->setSizePolicy(sizePolicy1);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditeExtensions);


        verticalLayout_4->addWidget(widget_2);

        treeViewExtensions = new QTreeView(tab);
        treeViewExtensions->setObjectName(QStringLiteral("treeViewExtensions"));
        treeViewExtensions->setStyleSheet(QStringLiteral("QTreeView::item { height: 24px;}"));
        treeViewExtensions->setEditTriggers(QAbstractItemView::NoEditTriggers);
        treeViewExtensions->setAlternatingRowColors(true);
        treeViewExtensions->setHeaderHidden(true);

        verticalLayout_4->addWidget(treeViewExtensions);

        tabWidgetDevice->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_5 = new QVBoxLayout(tab_2);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        widget_4 = new QWidget(tab_2);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        formLayout_3 = new QFormLayout(widget_4);
        formLayout_3->setSpacing(6);
        formLayout_3->setContentsMargins(11, 11, 11, 11);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        formLayout_3->setContentsMargins(0, 2, 0, 2);
        label_4 = new QLabel(widget_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setScaledContents(false);
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_4);

        lineEditTexFormats = new QLineEdit(widget_4);
        lineEditTexFormats->setObjectName(QStringLiteral("lineEditTexFormats"));
        sizePolicy1.setHeightForWidth(lineEditTexFormats->sizePolicy().hasHeightForWidth());
        lineEditTexFormats->setSizePolicy(sizePolicy1);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, lineEditTexFormats);


        verticalLayout_5->addWidget(widget_4);

        listViewCompressedFormats = new QListView(tab_2);
        listViewCompressedFormats->setObjectName(QStringLiteral("listViewCompressedFormats"));
        listViewCompressedFormats->setStyleSheet(QStringLiteral("QListView::item { height: 24px;}"));
        listViewCompressedFormats->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listViewCompressedFormats->setAlternatingRowColors(true);

        verticalLayout_5->addWidget(listViewCompressedFormats);

        tabWidgetDevice->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout_6 = new QVBoxLayout(tab_3);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        treeWidgetInternalFormats = new QTreeWidget(tab_3);
        treeWidgetInternalFormats->setObjectName(QStringLiteral("treeWidgetInternalFormats"));
        treeWidgetInternalFormats->setStyleSheet(QStringLiteral("QTreeView::item { height: 24px;}"));
        treeWidgetInternalFormats->setEditTriggers(QAbstractItemView::NoEditTriggers);
        treeWidgetInternalFormats->setAlternatingRowColors(true);
        treeWidgetInternalFormats->setIndentation(10);
        treeWidgetInternalFormats->header()->setDefaultSectionSize(250);
        treeWidgetInternalFormats->header()->setStretchLastSection(true);

        verticalLayout_6->addWidget(treeWidgetInternalFormats);

        tabWidgetDevice->addTab(tab_3, QString());

        horizontalLayout->addWidget(tabWidgetDevice);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_3->addLayout(verticalLayout);

        tabWidget->addTab(tabDevice, QString());
        tabDatabase = new QWidget();
        tabDatabase->setObjectName(QStringLiteral("tabDatabase"));
        horizontalLayout_5 = new QHBoxLayout(tabDatabase);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        pushButtonRefreshDataBase = new QPushButton(tabDatabase);
        pushButtonRefreshDataBase->setObjectName(QStringLiteral("pushButtonRefreshDataBase"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/glcapsviewer/Resources/refresh16.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonRefreshDataBase->setIcon(icon9);
        pushButtonRefreshDataBase->setFlat(false);

        verticalLayout_2->addWidget(pushButtonRefreshDataBase, 0, Qt::AlignLeft);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        listWidgetDatabaseDevices = new QListWidget(tabDatabase);
        new QListWidgetItem(listWidgetDatabaseDevices);
        listWidgetDatabaseDevices->setObjectName(QStringLiteral("listWidgetDatabaseDevices"));
        listWidgetDatabaseDevices->setAlternatingRowColors(true);

        horizontalLayout_4->addWidget(listWidgetDatabaseDevices);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label = new QLabel(tabDatabase);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("font: 75;\n"
"color: rgb(0, 0, 255);"));
        label->setFrameShape(QFrame::NoFrame);
        label->setFrameShadow(QFrame::Plain);

        verticalLayout_3->addWidget(label);

        comboBoxDeviceVersions = new QComboBox(tabDatabase);
        comboBoxDeviceVersions->setObjectName(QStringLiteral("comboBoxDeviceVersions"));

        verticalLayout_3->addWidget(comboBoxDeviceVersions);

        labelDatabaseDeviceImplementation = new QLabel(tabDatabase);
        labelDatabaseDeviceImplementation->setObjectName(QStringLiteral("labelDatabaseDeviceImplementation"));
        labelDatabaseDeviceImplementation->setStyleSheet(QLatin1String("font: 75;\n"
"color: rgb(0, 0, 255);"));
        labelDatabaseDeviceImplementation->setFrameShape(QFrame::NoFrame);

        verticalLayout_3->addWidget(labelDatabaseDeviceImplementation);

        tableWidgetDatabaseDeviceReport = new QTableWidget(tabDatabase);
        if (tableWidgetDatabaseDeviceReport->columnCount() < 2)
            tableWidgetDatabaseDeviceReport->setColumnCount(2);
        QFont font;
        font.setBold(false);
        font.setUnderline(false);
        font.setWeight(50);
        font.setKerning(true);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        tableWidgetDatabaseDeviceReport->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font1);
        tableWidgetDatabaseDeviceReport->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidgetDatabaseDeviceReport->setObjectName(QStringLiteral("tableWidgetDatabaseDeviceReport"));
        tableWidgetDatabaseDeviceReport->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidgetDatabaseDeviceReport->setAlternatingRowColors(true);
        tableWidgetDatabaseDeviceReport->setShowGrid(false);
        tableWidgetDatabaseDeviceReport->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_3->addWidget(tableWidgetDatabaseDeviceReport);

        labelDatabaseDeviceExtensions = new QLabel(tabDatabase);
        labelDatabaseDeviceExtensions->setObjectName(QStringLiteral("labelDatabaseDeviceExtensions"));
        labelDatabaseDeviceExtensions->setStyleSheet(QLatin1String("font: 75;\n"
"color: rgb(0, 0, 255);"));
        labelDatabaseDeviceExtensions->setFrameShape(QFrame::NoFrame);

        verticalLayout_3->addWidget(labelDatabaseDeviceExtensions);

        listWidgetDatabaseDeviceExtensions = new QListWidget(tabDatabase);
        listWidgetDatabaseDeviceExtensions->setObjectName(QStringLiteral("listWidgetDatabaseDeviceExtensions"));
        listWidgetDatabaseDeviceExtensions->setAlternatingRowColors(true);

        verticalLayout_3->addWidget(listWidgetDatabaseDeviceExtensions);


        horizontalLayout_4->addLayout(verticalLayout_3);


        verticalLayout_2->addLayout(horizontalLayout_4);


        horizontalLayout_5->addLayout(verticalLayout_2);

        tabWidget->addTab(tabDatabase, QString());

        verticalLayout_7->addWidget(tabWidget);

        glcapsviewerClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(glcapsviewerClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 994, 21));
        glcapsviewerClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(glcapsviewerClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setStyleSheet(QLatin1String("background-color: rgb(40, 40, 40);\n"
"color: rgb(255, 255, 255);\n"
""));
        mainToolBar->setMovable(false);
        mainToolBar->setIconSize(QSize(64, 32));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        mainToolBar->setFloatable(false);
        glcapsviewerClass->addToolBar(Qt::TopToolBarArea, mainToolBar);

        mainToolBar->addAction(actionRefresh);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionUpload);
        mainToolBar->addAction(actionSave_xml);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionDevice);
        mainToolBar->addAction(actionDatabase);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionSettings);
        mainToolBar->addAction(actionAbout);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionExit);

        retranslateUi(glcapsviewerClass);

        tabWidget->setCurrentIndex(0);
        tabWidgetDevice->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(glcapsviewerClass);
    } // setupUi

    void retranslateUi(QMainWindow *glcapsviewerClass)
    {
        glcapsviewerClass->setWindowTitle(QApplication::translate("glcapsviewerClass", "OpenGL Hardware Capability Viewer 1.1 - \302\251 2011-2015 by Sascha Willems (www.saschawillems.de)", 0));
        actionRefresh->setText(QApplication::translate("glcapsviewerClass", "Refresh", 0));
#ifndef QT_NO_TOOLTIP
        actionRefresh->setToolTip(QApplication::translate("glcapsviewerClass", "Refrehs OpenGL report", 0));
#endif // QT_NO_TOOLTIP
        actionUpload->setText(QApplication::translate("glcapsviewerClass", "Upload", 0));
#ifndef QT_NO_TOOLTIP
        actionUpload->setToolTip(QApplication::translate("glcapsviewerClass", "Upload OpenGL report to online database", 0));
#endif // QT_NO_TOOLTIP
        actionDatabase->setText(QApplication::translate("glcapsviewerClass", "Database", 0));
#ifndef QT_NO_TOOLTIP
        actionDatabase->setToolTip(QApplication::translate("glcapsviewerClass", "Display OpenGL online database in default browser", 0));
#endif // QT_NO_TOOLTIP
        actionSettings->setText(QApplication::translate("glcapsviewerClass", "Settings", 0));
#ifndef QT_NO_TOOLTIP
        actionSettings->setToolTip(QApplication::translate("glcapsviewerClass", "Application settings (Proxy)", 0));
#endif // QT_NO_TOOLTIP
        actionAbout->setText(QApplication::translate("glcapsviewerClass", "About", 0));
#ifndef QT_NO_TOOLTIP
        actionAbout->setToolTip(QApplication::translate("glcapsviewerClass", "Application information", 0));
#endif // QT_NO_TOOLTIP
        actionExit->setText(QApplication::translate("glcapsviewerClass", "Exit", 0));
#ifndef QT_NO_TOOLTIP
        actionExit->setToolTip(QApplication::translate("glcapsviewerClass", "Exit OpenGL caps viewer", 0));
#endif // QT_NO_TOOLTIP
        actionSave_xml->setText(QApplication::translate("glcapsviewerClass", "Save xml", 0));
#ifndef QT_NO_TOOLTIP
        actionSave_xml->setToolTip(QApplication::translate("glcapsviewerClass", "Export current OpenGL report to xml", 0));
#endif // QT_NO_TOOLTIP
        actionDevice->setText(QApplication::translate("glcapsviewerClass", "Device", 0));
#ifndef QT_NO_TOOLTIP
        actionDevice->setToolTip(QApplication::translate("glcapsviewerClass", "Show device in database", 0));
#endif // QT_NO_TOOLTIP
        labelDescription->setText(QApplication::translate("glcapsviewerClass", "Getting OpenGL implementation details...", 0));
        labelReportPresent->setText(QApplication::translate("glcapsviewerClass", "TextLabel", 0));
        label_3->setText(QApplication::translate("glcapsviewerClass", "Filter : ", 0));
        tabWidgetDevice->setTabText(tabWidgetDevice->indexOf(tab_4), QApplication::translate("glcapsviewerClass", "Implementation", 0));
        label_2->setText(QApplication::translate("glcapsviewerClass", "Filter : ", 0));
        tabWidgetDevice->setTabText(tabWidgetDevice->indexOf(tab), QApplication::translate("glcapsviewerClass", "Extensions", 0));
        label_4->setText(QApplication::translate("glcapsviewerClass", "Filter : ", 0));
        tabWidgetDevice->setTabText(tabWidgetDevice->indexOf(tab_2), QApplication::translate("glcapsviewerClass", "Compressed texture formats", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidgetInternalFormats->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("glcapsviewerClass", "value", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("glcapsviewerClass", "key", 0));
        tabWidgetDevice->setTabText(tabWidgetDevice->indexOf(tab_3), QApplication::translate("glcapsviewerClass", "Internal formats", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabDevice), QApplication::translate("glcapsviewerClass", "Your device", 0));
        pushButtonRefreshDataBase->setText(QApplication::translate("glcapsviewerClass", "Refresh", 0));

        const bool __sortingEnabled = listWidgetDatabaseDevices->isSortingEnabled();
        listWidgetDatabaseDevices->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidgetDatabaseDevices->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("glcapsviewerClass", "Please refresh...", 0));
        listWidgetDatabaseDevices->setSortingEnabled(__sortingEnabled);

        label->setText(QApplication::translate("glcapsviewerClass", "Report version", 0));
        labelDatabaseDeviceImplementation->setText(QApplication::translate("glcapsviewerClass", "Implementation", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetDatabaseDeviceReport->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("glcapsviewerClass", "Capability", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetDatabaseDeviceReport->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("glcapsviewerClass", "Value", 0));
        labelDatabaseDeviceExtensions->setText(QApplication::translate("glcapsviewerClass", "Extensions", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabDatabase), QApplication::translate("glcapsviewerClass", "Database", 0));
    } // retranslateUi

};

namespace Ui {
    class glcapsviewerClass: public Ui_glcapsviewerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GLCAPSVIEWER_H
