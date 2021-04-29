/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QTabWidget *tabWidget_3;
    QWidget *tab_5;
    QFrame *frame_3;
    QLineEdit *lineEdit_id_2;
    QLineEdit *lineEdit_nom_2;
    QLineEdit *lineEdit_nombre;
    QLineEdit *lineEdit_prix;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_16;
    QComboBox *comboBox_cat;
    QLabel *label_15;
    QComboBox *combobox_mag;
    QPushButton *pushButton_sauvgarderproduit;
    QPushButton *pushButton_modifierproduit;
    QPushButton *pushButton_supprimerpr;
    QLabel *label_18;
    QLabel *label_19;
    QWidget *tab_6;
    QFrame *frame_4;
    QTableView *tableView_2;
    QPushButton *pushButton_recherche_2;
    QLineEdit *lineEdit_rechercher_2;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_4;
    QPushButton *pushButton_produit;
    QLabel *label_11;
    QWidget *tab;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QFrame *frame;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_5;
    QLineEdit *Edit_id;
    QLineEdit *Edit_nom;
    QLineEdit *Edit_adresse;
    QLabel *label_6;
    QLineEdit *Edit_bloc;
    QPushButton *btn_ajout;
    QPushButton *btn_modifier;
    QPushButton *btn_supp;
    QLabel *label_2;
    QLabel *label_17;
    QWidget *tab_4;
    QFrame *frame_2;
    QTableView *tableView_mag;
    QPushButton *pushButton_recherche;
    QLineEdit *lineEdit_rechercher;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_3;
    QPushButton *pushButton_pdf;
    QLabel *label_7;
    QPushButton *pushButton_ajoutmag;
    QLabel *label_8;
    QWidget *tab_8;
    QComboBox *combo_action;
    QListView *listhistorique;
    QWidget *tab_7;
    QPushButton *buttonon;
    QLabel *label_etat;
    QLabel *temp_label_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLCDNumber *temp_lcdNumber;
    QLabel *temp_label_3;
    QLabel *label_alert;
    QLabel *temp_label;
    QPushButton *buttonoff;
    QLabel *label_14;
    QGroupBox *groupBox;
    QPushButton *start;
    QPushButton *stop;
    QSlider *sliderprogress;
    QSlider *slider_volume;
    QPushButton *fichiermp3;
    QLabel *label_musique;
    QPushButton *btn_volume;
    QLabel *valeur_volume;
    QLabel *label_20;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(1443, 701);
        Dialog->setLayoutDirection(Qt::LeftToRight);
        Dialog->setStyleSheet(QLatin1String("\n"
"\n"
"\n"
"background-color: rgb(110, 165, 165);\n"
"\n"
"background-image: url(:/images/background.jpg);"));
        centralwidget = new QWidget(Dialog);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1171, 681));
        tabWidget->setContextMenuPolicy(Qt::DefaultContextMenu);
        tabWidget->setStyleSheet(QStringLiteral(""));
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setIconSize(QSize(16, 16));
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tabWidget->setTabBarAutoHide(false);
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget_3 = new QTabWidget(tab_2);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(0, 0, 1171, 691));
        tabWidget_3->setTabShape(QTabWidget::Rounded);
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        frame_3 = new QFrame(tab_5);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(160, 10, 641, 451));
        frame_3->setStyleSheet(QStringLiteral(""));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        lineEdit_id_2 = new QLineEdit(frame_3);
        lineEdit_id_2->setObjectName(QStringLiteral("lineEdit_id_2"));
        lineEdit_id_2->setGeometry(QRect(300, 50, 181, 20));
        lineEdit_id_2->setStyleSheet(QStringLiteral(""));
        lineEdit_nom_2 = new QLineEdit(frame_3);
        lineEdit_nom_2->setObjectName(QStringLiteral("lineEdit_nom_2"));
        lineEdit_nom_2->setGeometry(QRect(300, 100, 181, 20));
        lineEdit_nom_2->setStyleSheet(QStringLiteral(""));
        lineEdit_nombre = new QLineEdit(frame_3);
        lineEdit_nombre->setObjectName(QStringLiteral("lineEdit_nombre"));
        lineEdit_nombre->setGeometry(QRect(300, 150, 181, 20));
        lineEdit_nombre->setStyleSheet(QStringLiteral(""));
        lineEdit_prix = new QLineEdit(frame_3);
        lineEdit_prix->setObjectName(QStringLiteral("lineEdit_prix"));
        lineEdit_prix->setGeometry(QRect(300, 210, 181, 20));
        lineEdit_prix->setStyleSheet(QStringLiteral(""));
        label_9 = new QLabel(frame_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(130, 100, 41, 20));
        QFont font;
        font.setFamily(QStringLiteral("Trebuchet MS"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_9->setFont(font);
        label_10 = new QLabel(frame_3);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(120, 150, 61, 20));
        label_10->setFont(font);
        label_12 = new QLabel(frame_3);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(130, 210, 41, 20));
        label_12->setFont(font);
        label_12->setStyleSheet(QStringLiteral(""));
        label_13 = new QLabel(frame_3);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(120, 260, 71, 31));
        label_13->setFont(font);
        label_16 = new QLabel(frame_3);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(140, 50, 21, 20));
        label_16->setFont(font);
        comboBox_cat = new QComboBox(frame_3);
        comboBox_cat->setObjectName(QStringLiteral("comboBox_cat"));
        comboBox_cat->setGeometry(QRect(300, 260, 171, 22));
        label_15 = new QLabel(frame_3);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(120, 330, 71, 31));
        label_15->setFont(font);
        combobox_mag = new QComboBox(frame_3);
        combobox_mag->setObjectName(QStringLiteral("combobox_mag"));
        combobox_mag->setGeometry(QRect(300, 330, 171, 22));
        pushButton_sauvgarderproduit = new QPushButton(tab_5);
        pushButton_sauvgarderproduit->setObjectName(QStringLiteral("pushButton_sauvgarderproduit"));
        pushButton_sauvgarderproduit->setGeometry(QRect(190, 470, 161, 51));
        QFont font1;
        font1.setFamily(QStringLiteral("Trebuchet MS"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton_sauvgarderproduit->setFont(font1);
        pushButton_sauvgarderproduit->setStyleSheet(QStringLiteral(""));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/add-button.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_sauvgarderproduit->setIcon(icon);
        pushButton_sauvgarderproduit->setIconSize(QSize(30, 30));
        pushButton_modifierproduit = new QPushButton(tab_5);
        pushButton_modifierproduit->setObjectName(QStringLiteral("pushButton_modifierproduit"));
        pushButton_modifierproduit->setGeometry(QRect(410, 470, 161, 51));
        pushButton_modifierproduit->setFont(font1);
        pushButton_modifierproduit->setStyleSheet(QStringLiteral(""));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/modifier.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_modifierproduit->setIcon(icon1);
        pushButton_modifierproduit->setIconSize(QSize(30, 30));
        pushButton_supprimerpr = new QPushButton(tab_5);
        pushButton_supprimerpr->setObjectName(QStringLiteral("pushButton_supprimerpr"));
        pushButton_supprimerpr->setGeometry(QRect(620, 470, 161, 51));
        pushButton_supprimerpr->setFont(font1);
        pushButton_supprimerpr->setStyleSheet(QStringLiteral(""));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/Erase.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_supprimerpr->setIcon(icon2);
        pushButton_supprimerpr->setIconSize(QSize(25, 25));
        label_18 = new QLabel(tab_5);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(0, 10, 121, 61));
        label_18->setStyleSheet(QStringLiteral("background-image: url(:/images/logo.png);"));
        label_19 = new QLabel(tab_5);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(10, 80, 111, 20));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        label_19->setFont(font2);
        label_19->setStyleSheet(QStringLiteral("backgound-color:rgb(255, 0, 0)"));
        tabWidget_3->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        frame_4 = new QFrame(tab_6);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(30, 50, 761, 441));
        frame_4->setStyleSheet(QStringLiteral(""));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        tableView_2 = new QTableView(frame_4);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(50, 100, 601, 241));
        tableView_2->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 75 9pt \"Arial\";"));
        tableView_2->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_2->setSelectionBehavior(QAbstractItemView::SelectRows);
        pushButton_recherche_2 = new QPushButton(frame_4);
        pushButton_recherche_2->setObjectName(QStringLiteral("pushButton_recherche_2"));
        pushButton_recherche_2->setGeometry(QRect(60, 50, 121, 31));
        QFont font3;
        font3.setFamily(QStringLiteral("Trebuchet MS"));
        font3.setPointSize(11);
        font3.setBold(true);
        font3.setWeight(75);
        pushButton_recherche_2->setFont(font3);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/recherhche.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_recherche_2->setIcon(icon3);
        pushButton_recherche_2->setIconSize(QSize(30, 30));
        lineEdit_rechercher_2 = new QLineEdit(frame_4);
        lineEdit_rechercher_2->setObjectName(QStringLiteral("lineEdit_rechercher_2"));
        lineEdit_rechercher_2->setGeometry(QRect(190, 40, 171, 41));
        lineEdit_rechercher_2->setStyleSheet(QStringLiteral(""));
        radioButton_4 = new QRadioButton(frame_4);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setGeometry(QRect(660, 150, 91, 31));
        QFont font4;
        font4.setFamily(QStringLiteral("Century Gothic"));
        font4.setPointSize(10);
        font4.setBold(true);
        font4.setWeight(75);
        radioButton_4->setFont(font4);
        radioButton_4->setStyleSheet(QStringLiteral(""));
        radioButton_5 = new QRadioButton(frame_4);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));
        radioButton_5->setGeometry(QRect(660, 240, 91, 31));
        radioButton_5->setFont(font4);
        radioButton_5->setStyleSheet(QStringLiteral(""));
        pushButton_2 = new QPushButton(frame_4);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(120, 360, 131, 41));
        QFont font5;
        font5.setFamily(QStringLiteral("Trebuchet MS"));
        font5.setPointSize(18);
        font5.setBold(true);
        font5.setWeight(75);
        pushButton_2->setFont(font5);
        pushButton_2->setStyleSheet(QStringLiteral(""));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/pdf.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon4);
        pushButton_2->setIconSize(QSize(25, 25));
        pushButton_3 = new QPushButton(frame_4);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(420, 360, 141, 41));
        pushButton_3->setFont(font1);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/statistique.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon5);
        label_4 = new QLabel(tab_6);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(180, 0, 441, 41));
        QFont font6;
        font6.setFamily(QStringLiteral("Trebuchet MS"));
        font6.setPointSize(28);
        font6.setBold(true);
        font6.setWeight(75);
        label_4->setFont(font6);
        pushButton_produit = new QPushButton(tab_6);
        pushButton_produit->setObjectName(QStringLiteral("pushButton_produit"));
        pushButton_produit->setGeometry(QRect(810, 290, 131, 131));
        pushButton_produit->setStyleSheet(QStringLiteral("background-image: url(:/images/addproduct.png);"));
        label_11 = new QLabel(tab_6);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(810, 430, 141, 41));
        label_11->setFont(font6);
        tabWidget_3->addTab(tab_6, QString());
        tabWidget->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget_2 = new QTabWidget(tab);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(0, 0, 1171, 741));
        tabWidget_2->setStyleSheet(QStringLiteral(""));
        tabWidget_2->setTabShape(QTabWidget::Rounded);
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        frame = new QFrame(tab_3);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(150, 30, 651, 451));
        QFont font7;
        font7.setFamily(QStringLiteral("century gothic"));
        font7.setBold(false);
        font7.setWeight(50);
        frame->setFont(font7);
        frame->setStyleSheet(QStringLiteral(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(90, 40, 41, 35));
        QFont font8;
        font8.setFamily(QStringLiteral("century gothic"));
        font8.setPointSize(12);
        font8.setBold(true);
        font8.setItalic(false);
        font8.setUnderline(false);
        font8.setWeight(75);
        label_3->setFont(font8);
        label_3->setStyleSheet(QLatin1String("*{\n"
"font-family:century gothic ;\n"
"font-size: 20ptx;\n"
"}"));
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 100, 111, 35));
        QFont font9;
        font9.setFamily(QStringLiteral("Trebuchet MS"));
        font9.setPointSize(12);
        font9.setBold(true);
        font9.setItalic(false);
        font9.setWeight(75);
        label->setFont(font9);
        label_5 = new QLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(90, 160, 71, 35));
        label_5->setFont(font9);
        Edit_id = new QLineEdit(frame);
        Edit_id->setObjectName(QStringLiteral("Edit_id"));
        Edit_id->setGeometry(QRect(240, 50, 221, 20));
        QFont font10;
        font10.setFamily(QStringLiteral("century gothic"));
        font10.setBold(false);
        font10.setItalic(false);
        font10.setWeight(50);
        Edit_id->setFont(font10);
        Edit_id->setStyleSheet(QStringLiteral(""));
        Edit_nom = new QLineEdit(frame);
        Edit_nom->setObjectName(QStringLiteral("Edit_nom"));
        Edit_nom->setGeometry(QRect(240, 110, 221, 20));
        Edit_nom->setFont(font10);
        Edit_nom->setStyleSheet(QStringLiteral(""));
        Edit_adresse = new QLineEdit(frame);
        Edit_adresse->setObjectName(QStringLiteral("Edit_adresse"));
        Edit_adresse->setGeometry(QRect(240, 170, 221, 20));
        Edit_adresse->setFont(font10);
        Edit_adresse->setStyleSheet(QStringLiteral(""));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(80, 230, 101, 35));
        label_6->setFont(font9);
        Edit_bloc = new QLineEdit(frame);
        Edit_bloc->setObjectName(QStringLiteral("Edit_bloc"));
        Edit_bloc->setGeometry(QRect(240, 240, 221, 20));
        Edit_bloc->setFont(font10);
        Edit_bloc->setStyleSheet(QStringLiteral(""));
        btn_ajout = new QPushButton(frame);
        btn_ajout->setObjectName(QStringLiteral("btn_ajout"));
        btn_ajout->setGeometry(QRect(50, 350, 131, 41));
        QFont font11;
        font11.setFamily(QStringLiteral("Trebuchet MS"));
        font11.setPointSize(14);
        font11.setBold(true);
        font11.setItalic(false);
        font11.setWeight(75);
        btn_ajout->setFont(font11);
        btn_ajout->setStyleSheet(QStringLiteral(""));
        btn_ajout->setIcon(icon);
        btn_ajout->setIconSize(QSize(30, 30));
        btn_modifier = new QPushButton(frame);
        btn_modifier->setObjectName(QStringLiteral("btn_modifier"));
        btn_modifier->setGeometry(QRect(250, 350, 141, 41));
        btn_modifier->setFont(font11);
        btn_modifier->setStyleSheet(QStringLiteral(""));
        btn_modifier->setIcon(icon1);
        btn_modifier->setIconSize(QSize(30, 30));
        btn_supp = new QPushButton(frame);
        btn_supp->setObjectName(QStringLiteral("btn_supp"));
        btn_supp->setGeometry(QRect(460, 350, 141, 41));
        btn_supp->setFont(font11);
        btn_supp->setStyleSheet(QStringLiteral(""));
        btn_supp->setIcon(icon2);
        btn_supp->setIconSize(QSize(30, 30));
        label_2 = new QLabel(tab_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 10, 121, 61));
        label_2->setStyleSheet(QStringLiteral("background-image: url(:/images/logo.png);"));
        label_17 = new QLabel(tab_3);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(10, 80, 111, 20));
        label_17->setFont(font2);
        label_17->setStyleSheet(QStringLiteral("backgound-color:rgb(255, 0, 0)"));
        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        frame_2 = new QFrame(tab_4);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(50, 80, 751, 431));
        frame_2->setStyleSheet(QStringLiteral(""));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        tableView_mag = new QTableView(frame_2);
        tableView_mag->setObjectName(QStringLiteral("tableView_mag"));
        tableView_mag->setGeometry(QRect(20, 80, 541, 231));
        tableView_mag->setStyleSheet(QStringLiteral(""));
        tableView_mag->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_mag->setSelectionBehavior(QAbstractItemView::SelectRows);
        pushButton_recherche = new QPushButton(frame_2);
        pushButton_recherche->setObjectName(QStringLiteral("pushButton_recherche"));
        pushButton_recherche->setGeometry(QRect(20, 40, 111, 31));
        QFont font12;
        font12.setFamily(QStringLiteral("Trebuchet MS"));
        font12.setPointSize(10);
        font12.setBold(true);
        font12.setWeight(75);
        pushButton_recherche->setFont(font12);
        pushButton_recherche->setIcon(icon3);
        pushButton_recherche->setIconSize(QSize(30, 30));
        lineEdit_rechercher = new QLineEdit(frame_2);
        lineEdit_rechercher->setObjectName(QStringLiteral("lineEdit_rechercher"));
        lineEdit_rechercher->setGeometry(QRect(140, 30, 191, 41));
        lineEdit_rechercher->setStyleSheet(QLatin1String("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-background-color: rgb(187, 187, 187);\n"
"	selection-color: rgb(60, 63, 65);"));
        radioButton_2 = new QRadioButton(frame_2);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(590, 120, 91, 31));
        QFont font13;
        font13.setFamily(QStringLiteral("Century Gothic"));
        font13.setPointSize(10);
        font13.setBold(true);
        font13.setItalic(false);
        font13.setUnderline(false);
        font13.setWeight(75);
        radioButton_2->setFont(font13);
        radioButton_2->setStyleSheet(QStringLiteral(""));
        radioButton = new QRadioButton(frame_2);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(590, 180, 91, 31));
        radioButton->setFont(font4);
        radioButton->setStyleSheet(QStringLiteral(""));
        radioButton_3 = new QRadioButton(frame_2);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(590, 240, 91, 31));
        radioButton_3->setFont(font4);
        radioButton_3->setStyleSheet(QStringLiteral(""));
        pushButton_pdf = new QPushButton(frame_2);
        pushButton_pdf->setObjectName(QStringLiteral("pushButton_pdf"));
        pushButton_pdf->setGeometry(QRect(240, 320, 111, 41));
        pushButton_pdf->setFont(font1);
        pushButton_pdf->setStyleSheet(QLatin1String("border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        pushButton_pdf->setIcon(icon4);
        pushButton_pdf->setIconSize(QSize(30, 30));
        label_7 = new QLabel(tab_4);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(230, 20, 461, 41));
        label_7->setFont(font6);
        pushButton_ajoutmag = new QPushButton(tab_4);
        pushButton_ajoutmag->setObjectName(QStringLiteral("pushButton_ajoutmag"));
        pushButton_ajoutmag->setGeometry(QRect(810, 270, 131, 131));
        pushButton_ajoutmag->setStyleSheet(QLatin1String("\n"
"background-image: url(:/images/addmagasin.png);"));
        label_8 = new QLabel(tab_4);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(820, 410, 131, 41));
        label_8->setFont(font6);
        tabWidget_2->addTab(tab_4, QString());
        tabWidget->addTab(tab, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        combo_action = new QComboBox(tab_8);
        combo_action->setObjectName(QStringLiteral("combo_action"));
        combo_action->setGeometry(QRect(30, 30, 101, 22));
        listhistorique = new QListView(tab_8);
        listhistorique->setObjectName(QStringLiteral("listhistorique"));
        listhistorique->setGeometry(QRect(55, 71, 711, 471));
        tabWidget->addTab(tab_8, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        buttonon = new QPushButton(tab_7);
        buttonon->setObjectName(QStringLiteral("buttonon"));
        buttonon->setGeometry(QRect(350, 130, 91, 31));
        buttonon->setStyleSheet(QStringLiteral(""));
        label_etat = new QLabel(tab_7);
        label_etat->setObjectName(QStringLiteral("label_etat"));
        label_etat->setGeometry(QRect(350, 200, 41, 31));
        QFont font14;
        font14.setPointSize(12);
        label_etat->setFont(font14);
        label_etat->setStyleSheet(QStringLiteral(""));
        temp_label_2 = new QLabel(tab_7);
        temp_label_2->setObjectName(QStringLiteral("temp_label_2"));
        temp_label_2->setGeometry(QRect(160, 130, 151, 41));
        layoutWidget = new QWidget(tab_7);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(390, 250, 241, 91));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        temp_lcdNumber = new QLCDNumber(layoutWidget);
        temp_lcdNumber->setObjectName(QStringLiteral("temp_lcdNumber"));
        QPalette palette;
        QBrush brush(QColor(0, 0, 94, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(110, 165, 165, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(0, 0, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush);
        QBrush brush3(QColor(60, 60, 60, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush3);
        QBrush brush4(QColor(76, 76, 76, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush5(QColor(60, 60, 60, 128));
        brush5.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush6(QColor(60, 60, 60, 128));
        brush6.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush6);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush7(QColor(60, 60, 60, 128));
        brush7.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        temp_lcdNumber->setPalette(palette);
        temp_lcdNumber->setDigitCount(7);

        horizontalLayout->addWidget(temp_lcdNumber);

        temp_label_3 = new QLabel(tab_7);
        temp_label_3->setObjectName(QStringLiteral("temp_label_3"));
        temp_label_3->setGeometry(QRect(180, 200, 101, 41));
        label_alert = new QLabel(tab_7);
        label_alert->setObjectName(QStringLiteral("label_alert"));
        label_alert->setGeometry(QRect(210, 410, 571, 91));
        QFont font15;
        font15.setPointSize(26);
        font15.setBold(true);
        font15.setWeight(75);
        label_alert->setFont(font15);
        label_alert->setStyleSheet(QStringLiteral("color:RED;"));
        temp_label = new QLabel(tab_7);
        temp_label->setObjectName(QStringLiteral("temp_label"));
        temp_label->setGeometry(QRect(130, 260, 251, 61));
        buttonoff = new QPushButton(tab_7);
        buttonoff->setObjectName(QStringLiteral("buttonoff"));
        buttonoff->setGeometry(QRect(480, 130, 91, 31));
        buttonoff->setStyleSheet(QStringLiteral(""));
        label_14 = new QLabel(tab_7);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(290, 30, 511, 41));
        label_14->setFont(font6);
        label_14->setTextFormat(Qt::AutoText);
        tabWidget->addTab(tab_7, QString());
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(1180, 160, 251, 311));
        start = new QPushButton(groupBox);
        start->setObjectName(QStringLiteral("start"));
        start->setGeometry(QRect(30, 190, 51, 41));
        start->setStyleSheet(QStringLiteral(""));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/music.png"), QSize(), QIcon::Normal, QIcon::Off);
        start->setIcon(icon6);
        start->setIconSize(QSize(32, 32));
        stop = new QPushButton(groupBox);
        stop->setObjectName(QStringLiteral("stop"));
        stop->setGeometry(QRect(190, 190, 51, 41));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        stop->setIcon(icon7);
        stop->setIconSize(QSize(32, 32));
        sliderprogress = new QSlider(groupBox);
        sliderprogress->setObjectName(QStringLiteral("sliderprogress"));
        sliderprogress->setGeometry(QRect(70, 120, 121, 22));
        sliderprogress->setValue(0);
        sliderprogress->setOrientation(Qt::Horizontal);
        sliderprogress->setTickInterval(0);
        slider_volume = new QSlider(groupBox);
        slider_volume->setObjectName(QStringLiteral("slider_volume"));
        slider_volume->setGeometry(QRect(80, 270, 121, 22));
        slider_volume->setMaximum(100);
        slider_volume->setSingleStep(10);
        slider_volume->setValue(50);
        slider_volume->setOrientation(Qt::Horizontal);
        fichiermp3 = new QPushButton(groupBox);
        fichiermp3->setObjectName(QStringLiteral("fichiermp3"));
        fichiermp3->setGeometry(QRect(110, 190, 51, 41));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/images/plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        fichiermp3->setIcon(icon8);
        fichiermp3->setIconSize(QSize(32, 32));
        label_musique = new QLabel(groupBox);
        label_musique->setObjectName(QStringLiteral("label_musique"));
        label_musique->setGeometry(QRect(50, 20, 141, 20));
        label_musique->setStyleSheet(QLatin1String("font: 75 12pt \"Trebuchet MS\";\n"
"color: rgb(255, 0, 0);"));
        label_musique->setAlignment(Qt::AlignCenter);
        btn_volume = new QPushButton(groupBox);
        btn_volume->setObjectName(QStringLiteral("btn_volume"));
        btn_volume->setGeometry(QRect(10, 260, 51, 41));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/images/audio.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_volume->setIcon(icon9);
        btn_volume->setIconSize(QSize(32, 32));
        valeur_volume = new QLabel(groupBox);
        valeur_volume->setObjectName(QStringLiteral("valeur_volume"));
        valeur_volume->setGeometry(QRect(220, 270, 31, 20));
        valeur_volume->setStyleSheet(QLatin1String("font: 75 12pt \"Trebuchet MS\";\n"
"color: rgb(255, 0, 0);"));
        valeur_volume->setAlignment(Qt::AlignCenter);
        label_20 = new QLabel(groupBox);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(90, 50, 61, 61));
        label_20->setStyleSheet(QLatin1String("\n"
"background-image: url(:/images/music-albom.png);"));
        Dialog->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Dialog);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Dialog->setStatusBar(statusbar);

        retranslateUi(Dialog);

        tabWidget->setCurrentIndex(1);
        tabWidget_3->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QMainWindow *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", Q_NULLPTR));
        lineEdit_id_2->setText(QString());
        lineEdit_id_2->setPlaceholderText(QApplication::translate("Dialog", "ID de 6chiffres", Q_NULLPTR));
        lineEdit_nom_2->setPlaceholderText(QApplication::translate("Dialog", "NOM", Q_NULLPTR));
        lineEdit_nombre->setPlaceholderText(QApplication::translate("Dialog", "NOMBRE", Q_NULLPTR));
        lineEdit_prix->setPlaceholderText(QApplication::translate("Dialog", "PRIX", Q_NULLPTR));
        label_9->setText(QApplication::translate("Dialog", "Nom", Q_NULLPTR));
        label_10->setText(QApplication::translate("Dialog", "Nombre", Q_NULLPTR));
        label_12->setText(QApplication::translate("Dialog", "Prix", Q_NULLPTR));
        label_13->setText(QApplication::translate("Dialog", "Categorie", Q_NULLPTR));
        label_16->setText(QApplication::translate("Dialog", "ID", Q_NULLPTR));
        comboBox_cat->clear();
        comboBox_cat->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "FOOTBALL", Q_NULLPTR)
         << QApplication::translate("Dialog", "HANDBALL", Q_NULLPTR)
         << QApplication::translate("Dialog", "BASKETBALL", Q_NULLPTR)
         << QApplication::translate("Dialog", "VOLLEYBALL", Q_NULLPTR)
        );
        label_15->setText(QApplication::translate("Dialog", "Magasin", Q_NULLPTR));
        pushButton_sauvgarderproduit->setText(QApplication::translate("Dialog", "Ajouter", Q_NULLPTR));
        pushButton_modifierproduit->setText(QApplication::translate("Dialog", "Modifier", Q_NULLPTR));
        pushButton_supprimerpr->setText(QApplication::translate("Dialog", "Supprimer", Q_NULLPTR));
        label_18->setText(QString());
        label_19->setText(QApplication::translate("Dialog", "Smart Club", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_5), QApplication::translate("Dialog", "Ajouter produit", Q_NULLPTR));
        pushButton_recherche_2->setText(QApplication::translate("Dialog", "Rechercher", Q_NULLPTR));
        lineEdit_rechercher_2->setPlaceholderText(QApplication::translate("Dialog", "ID/NOM/CATEGORIE", Q_NULLPTR));
        radioButton_4->setText(QApplication::translate("Dialog", "Tri par nom", Q_NULLPTR));
        radioButton_5->setText(QApplication::translate("Dialog", "Tri par prix", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Dialog", "PDF", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Dialog", "STAT", Q_NULLPTR));
        label_4->setText(QApplication::translate("Dialog", "GESTION  DES PRODUITS", Q_NULLPTR));
        pushButton_produit->setText(QString());
        label_11->setText(QApplication::translate("Dialog", "Ajouter", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_6), QApplication::translate("Dialog", "Afficher produit", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Dialog", "produits", Q_NULLPTR));
        label_3->setText(QApplication::translate("Dialog", "  ID                             ", Q_NULLPTR));
        label->setText(QApplication::translate("Dialog", "Nom magasin                         ", Q_NULLPTR));
        label_5->setText(QApplication::translate("Dialog", "Adresse", Q_NULLPTR));
        Edit_id->setText(QString());
        Edit_id->setPlaceholderText(QApplication::translate("Dialog", "ID de 6 chiffres", Q_NULLPTR));
        Edit_nom->setText(QString());
        Edit_nom->setPlaceholderText(QApplication::translate("Dialog", "NOM", Q_NULLPTR));
        Edit_adresse->setText(QString());
        Edit_adresse->setPlaceholderText(QApplication::translate("Dialog", "Adresse", Q_NULLPTR));
        label_6->setText(QApplication::translate("Dialog", "Nombre bloc", Q_NULLPTR));
        Edit_bloc->setText(QString());
        Edit_bloc->setPlaceholderText(QApplication::translate("Dialog", "nombre bloc", Q_NULLPTR));
        btn_ajout->setText(QApplication::translate("Dialog", "Ajouter", Q_NULLPTR));
        btn_modifier->setText(QApplication::translate("Dialog", "Modifier", Q_NULLPTR));
        btn_supp->setText(QApplication::translate("Dialog", "Supprimer", Q_NULLPTR));
        label_2->setText(QString());
        label_17->setText(QApplication::translate("Dialog", "Smart Club", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("Dialog", "Ajouter magasin", Q_NULLPTR));
        pushButton_recherche->setText(QApplication::translate("Dialog", "Rechercher", Q_NULLPTR));
        lineEdit_rechercher->setPlaceholderText(QApplication::translate("Dialog", "ID/NOM/BLOC", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("Dialog", "Tri par ID", Q_NULLPTR));
        radioButton->setText(QApplication::translate("Dialog", "Tri par nom", Q_NULLPTR));
        radioButton_3->setText(QApplication::translate("Dialog", "Tri par bloc", Q_NULLPTR));
        pushButton_pdf->setText(QApplication::translate("Dialog", "PDF", Q_NULLPTR));
        label_7->setText(QApplication::translate("Dialog", "GESTION  DES MAGASINS", Q_NULLPTR));
        pushButton_ajoutmag->setText(QString());
        label_8->setText(QApplication::translate("Dialog", "Ajouter", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("Dialog", "Afficher magasin", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Dialog", "Organisation par magasin", Q_NULLPTR));
        combo_action->clear();
        combo_action->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "Tous", Q_NULLPTR)
         << QApplication::translate("Dialog", "Ajout", Q_NULLPTR)
         << QApplication::translate("Dialog", "Modification", Q_NULLPTR)
         << QApplication::translate("Dialog", "Suppression", Q_NULLPTR)
        );
        tabWidget->setTabText(tabWidget->indexOf(tab_8), QApplication::translate("Dialog", "Historique", Q_NULLPTR));
        buttonon->setText(QApplication::translate("Dialog", "ON", Q_NULLPTR));
        label_etat->setText(QApplication::translate("Dialog", "OFF", Q_NULLPTR));
        temp_label_2->setText(QApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:22pt; font-weight:600; color:#000000;\">BUZZER :</span></p></body></html>", Q_NULLPTR));
        temp_label_3->setText(QApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:22pt; font-weight:600; color:#000000;\">Etat :</span></p></body></html>", Q_NULLPTR));
        label_alert->setText(QString());
        temp_label->setText(QApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:22pt; font-weight:600; color:#ff0000;\">Temperature \302\260C:</span></p></body></html>", Q_NULLPTR));
        buttonoff->setText(QApplication::translate("Dialog", "OFF", Q_NULLPTR));
        label_14->setText(QApplication::translate("Dialog", "CONTROLE DE TEMPERATURE", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("Dialog", "controle de temp\303\251rature", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Dialog", "Lecteur de musique", Q_NULLPTR));
        start->setText(QString());
        stop->setText(QString());
        fichiermp3->setText(QString());
        label_musique->setText(QApplication::translate("Dialog", "Nom Fichier", Q_NULLPTR));
        btn_volume->setText(QString());
        valeur_volume->setText(QApplication::translate("Dialog", "50", Q_NULLPTR));
        label_20->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
