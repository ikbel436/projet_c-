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
#include <QtWidgets/QDateEdit>
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
    QTabWidget *tabWidget_produit;
    QWidget *tab_5;
    QFrame *frame_3;
    QLineEdit *lineEdit_idpr;
    QLineEdit *lineEdit_nompr;
    QLineEdit *lineEdit_nombrepr;
    QLineEdit *lineEdit_prixpr;
    QLabel *label_nomp;
    QLabel *label_nombrep;
    QLabel *label_prixp;
    QLabel *label_categoriep;
    QLabel *label_idp;
    QComboBox *comboBox_cat;
    QLabel *label_magasinp;
    QComboBox *combobox_mag;
    QLabel *label_produit;
    QPushButton *pushButton_sauvgarderproduit;
    QPushButton *pushButton_modifierproduit;
    QPushButton *pushButton_supprimerpr;
    QLabel *label_19;
    QLabel *label_produit_3;
    QLabel *label_18;
    QWidget *tab_6;
    QFrame *frame_4;
    QTableView *tableView_2;
    QPushButton *pushButton_recherche_produit;
    QLineEdit *lineEdit_rechercher_2;
    QRadioButton *radioButton_nomp;
    QRadioButton *radioButton_prixp;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_produit_2;
    QLabel *label_produit_5;
    QPushButton *pushButton_produit;
    QLabel *label_ajouterpr;
    QLabel *label_produit_4;
    QWidget *tab;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QFrame *frame;
    QLabel *label_idm;
    QLabel *label_nomm;
    QLabel *label_adressem;
    QLineEdit *Edit_idm;
    QLineEdit *Edit_nomm;
    QLineEdit *Edit_adressem;
    QLabel *label_nombreblocm;
    QLineEdit *Edit_blocm;
    QPushButton *btn_ajout_mag;
    QPushButton *btn_modifier_mag;
    QPushButton *btn_supp_mag;
    QLabel *label_magasin;
    QLabel *label_2;
    QLabel *label_17;
    QLabel *label_mag;
    QWidget *tab_4;
    QFrame *frame_2;
    QTableView *tableView_mag;
    QPushButton *pushButton_recherche;
    QLineEdit *lineEdit_rechercher;
    QRadioButton *radioButton_idm;
    QRadioButton *radioButton_nomm;
    QRadioButton *radioButton_blocm;
    QPushButton *pushButton_pdf_2;
    QLabel *label_maga;
    QLabel *label_gestionmag;
    QPushButton *pushButton_ajoutmag;
    QLabel *label_ajouter_mag;
    QLabel *label_mags;
    QWidget *tab_8;
    QComboBox *combo_action;
    QListView *listhistorique;
    QLabel *label_history;
    QLabel *label_historys;
    QDateEdit *dateEdit_history;
    QPushButton *pushButton_supphistory;
    QComboBox *comboBox_mp;
    QWidget *tab_7;
    QPushButton *buttonon;
    QLabel *temp_label_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLCDNumber *temp_lcdNumber;
    QLabel *label_alert;
    QLabel *temp_label;
    QPushButton *buttonoff;
    QLabel *label_controle_temp;
    QLabel *label_temp;
    QLabel *label_historrys;
    QLabel *temp_label_7;
    QLabel *label_connect;
    QComboBox *combotype;
    QLabel *label_alert_2;
    QLabel *label_etat_2;
    QLabel *label;
    QLabel *label_musique_2;
    QGroupBox *groupBox_music;
    QPushButton *start;
    QPushButton *stop;
    QSlider *sliderprogress;
    QSlider *slider_volume;
    QPushButton *fichiermp3;
    QLabel *label_musique;
    QPushButton *btn_volume;
    QLabel *valeur_volume;
    QLabel *label_20;
    QPushButton *pushButton_fr;
    QPushButton *pushButton_ang;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(1350, 566);
        QFont font;
        font.setPointSize(11);
        Dialog->setFont(font);
        Dialog->setLayoutDirection(Qt::LeftToRight);
        Dialog->setStyleSheet(QStringLiteral(""));
        centralwidget = new QWidget(Dialog);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 961, 541));
        tabWidget->setContextMenuPolicy(Qt::DefaultContextMenu);
        tabWidget->setStyleSheet(QLatin1String("QTabWidget::pane { /* The tab widget frame */\n"
"	background-image: url(:/pic/pic.jpeg);\n"
"	background-image: url(:/pic/pic.jpeg);\n"
"	background-image: url(:/pic/pic.jpeg);\n"
"\n"
"border-top: 5px solid #535353;\n"
"}\n"
"QTabWidget::tab-bar {\n"
"left: 0px; /* move to the right by 5px */\n"
"}\n"
"/* Style the tab using the tab sub-control. Note that it reads QTabBar not QTabWidget */\n"
"QTabBar::tab {\n"
"background: #dcdcdc;\n"
"border: 3px solid #535353;\n"
"border-bottom-color: #535353; /* same as the pane color */\n"
"border-top-left-radius: 7px;\n"
"border-top-right-radius: 7px;\n"
"min-width: 180px;\n"
"padding: 8px;\n"
"color: #6a1616;\n"
"font-size:15px;\n"
"font-family:Arial, Helvetica, sans-serif;\n"
"}\n"
"QTabBar::tab:selected, QTabBar::tab:hover {\n"
"background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #c3a1a1, stop: 0.4 #194a99, stop: 0.5 #335fff, stop: 1.0 #5d9eff);\n"
"}\n"
"QTabBar::tab:selected {\n"
"border-color: #9B9B9B;\n"
"border-bottom-color: #535353; /* same as pane"
                        " color */\n"
"color: #dcdcdc;\n"
"font-size:15px;\n"
"font-family:Arial , Helvetica, sans-serif;\n"
"}\n"
"QTabBar::tab:!selected {\n"
"margin-top: 2px; /* make non-selected tabs look smaller */\n"
"}\n"
"QLineEdit {\n"
"  width: 200%;\n"
"  \n"
"  margin: 10px 0;\n"
"  display: inline-block;\n"
"  border: 10px solid #ccc;\n"
"  border-radius: 10px;\n"
" \n"
"}"));
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setIconSize(QSize(24, 24));
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tabWidget->setTabBarAutoHide(false);
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget_produit = new QTabWidget(tab_2);
        tabWidget_produit->setObjectName(QStringLiteral("tabWidget_produit"));
        tabWidget_produit->setGeometry(QRect(0, 0, 1171, 691));
        tabWidget_produit->setTabShape(QTabWidget::Rounded);
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        frame_3 = new QFrame(tab_5);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(190, 20, 491, 401));
        frame_3->setStyleSheet(QStringLiteral(""));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        lineEdit_idpr = new QLineEdit(frame_3);
        lineEdit_idpr->setObjectName(QStringLiteral("lineEdit_idpr"));
        lineEdit_idpr->setGeometry(QRect(170, 20, 181, 20));
        lineEdit_idpr->setStyleSheet(QStringLiteral(""));
        lineEdit_nompr = new QLineEdit(frame_3);
        lineEdit_nompr->setObjectName(QStringLiteral("lineEdit_nompr"));
        lineEdit_nompr->setGeometry(QRect(170, 70, 181, 20));
        lineEdit_nompr->setStyleSheet(QStringLiteral(""));
        lineEdit_nombrepr = new QLineEdit(frame_3);
        lineEdit_nombrepr->setObjectName(QStringLiteral("lineEdit_nombrepr"));
        lineEdit_nombrepr->setGeometry(QRect(170, 130, 171, 20));
        lineEdit_nombrepr->setStyleSheet(QStringLiteral(""));
        lineEdit_prixpr = new QLineEdit(frame_3);
        lineEdit_prixpr->setObjectName(QStringLiteral("lineEdit_prixpr"));
        lineEdit_prixpr->setGeometry(QRect(170, 190, 171, 20));
        lineEdit_prixpr->setStyleSheet(QStringLiteral(""));
        label_nomp = new QLabel(frame_3);
        label_nomp->setObjectName(QStringLiteral("label_nomp"));
        label_nomp->setGeometry(QRect(60, 70, 41, 20));
        QFont font1;
        font1.setFamily(QStringLiteral("Trebuchet MS"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label_nomp->setFont(font1);
        label_nombrep = new QLabel(frame_3);
        label_nombrep->setObjectName(QStringLiteral("label_nombrep"));
        label_nombrep->setGeometry(QRect(50, 130, 61, 20));
        label_nombrep->setFont(font1);
        label_prixp = new QLabel(frame_3);
        label_prixp->setObjectName(QStringLiteral("label_prixp"));
        label_prixp->setGeometry(QRect(60, 190, 41, 20));
        label_prixp->setFont(font1);
        label_prixp->setStyleSheet(QStringLiteral(""));
        label_categoriep = new QLabel(frame_3);
        label_categoriep->setObjectName(QStringLiteral("label_categoriep"));
        label_categoriep->setGeometry(QRect(50, 240, 71, 31));
        label_categoriep->setFont(font1);
        label_idp = new QLabel(frame_3);
        label_idp->setObjectName(QStringLiteral("label_idp"));
        label_idp->setGeometry(QRect(70, 20, 21, 20));
        label_idp->setFont(font1);
        comboBox_cat = new QComboBox(frame_3);
        comboBox_cat->setObjectName(QStringLiteral("comboBox_cat"));
        comboBox_cat->setGeometry(QRect(170, 240, 171, 22));
        label_magasinp = new QLabel(frame_3);
        label_magasinp->setObjectName(QStringLiteral("label_magasinp"));
        label_magasinp->setGeometry(QRect(50, 290, 71, 31));
        label_magasinp->setFont(font1);
        combobox_mag = new QComboBox(frame_3);
        combobox_mag->setObjectName(QStringLiteral("combobox_mag"));
        combobox_mag->setGeometry(QRect(170, 290, 171, 22));
        label_produit = new QLabel(frame_3);
        label_produit->setObjectName(QStringLiteral("label_produit"));
        label_produit->setGeometry(QRect(0, 0, 491, 400));
        label_produit->setPixmap(QPixmap(QString::fromUtf8(":/images/imf.jpg")));
        pushButton_sauvgarderproduit = new QPushButton(frame_3);
        pushButton_sauvgarderproduit->setObjectName(QStringLiteral("pushButton_sauvgarderproduit"));
        pushButton_sauvgarderproduit->setGeometry(QRect(10, 340, 121, 41));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        pushButton_sauvgarderproduit->setFont(font2);
        pushButton_sauvgarderproduit->setStyleSheet(QLatin1String("	border: 1px solid black;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: #318aff;\n"
"font: bold, \"Arial\";;\n"
"text-align:center;"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/add-button.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_sauvgarderproduit->setIcon(icon);
        pushButton_sauvgarderproduit->setIconSize(QSize(30, 30));
        pushButton_modifierproduit = new QPushButton(frame_3);
        pushButton_modifierproduit->setObjectName(QStringLiteral("pushButton_modifierproduit"));
        pushButton_modifierproduit->setGeometry(QRect(170, 340, 131, 41));
        pushButton_modifierproduit->setFont(font2);
        pushButton_modifierproduit->setStyleSheet(QLatin1String("	border: 1px solid black;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: #318aff;\n"
"font: bold, \"Arial\";;\n"
"text-align:center;"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/modifier.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_modifierproduit->setIcon(icon1);
        pushButton_modifierproduit->setIconSize(QSize(30, 30));
        pushButton_supprimerpr = new QPushButton(frame_3);
        pushButton_supprimerpr->setObjectName(QStringLiteral("pushButton_supprimerpr"));
        pushButton_supprimerpr->setGeometry(QRect(340, 340, 141, 41));
        pushButton_supprimerpr->setFont(font2);
        pushButton_supprimerpr->setStyleSheet(QLatin1String("	border: 1px solid black;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: #318aff;\n"
"font: bold, \"Arial\";;\n"
"text-align:center;"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/Erase.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_supprimerpr->setIcon(icon2);
        pushButton_supprimerpr->setIconSize(QSize(25, 25));
        label_produit->raise();
        lineEdit_idpr->raise();
        lineEdit_nompr->raise();
        lineEdit_nombrepr->raise();
        lineEdit_prixpr->raise();
        label_nomp->raise();
        label_nombrep->raise();
        label_prixp->raise();
        label_categoriep->raise();
        label_idp->raise();
        comboBox_cat->raise();
        label_magasinp->raise();
        combobox_mag->raise();
        pushButton_sauvgarderproduit->raise();
        pushButton_modifierproduit->raise();
        pushButton_supprimerpr->raise();
        label_19 = new QLabel(tab_5);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(820, 70, 141, 20));
        QFont font3;
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setWeight(75);
        label_19->setFont(font3);
        label_19->setStyleSheet(QStringLiteral("backgound-color:rgb(255, 0, 0)"));
        label_produit_3 = new QLabel(tab_5);
        label_produit_3->setObjectName(QStringLiteral("label_produit_3"));
        label_produit_3->setGeometry(QRect(0, 0, 971, 571));
        label_produit_3->setPixmap(QPixmap(QString::fromUtf8(":/images/haya.png")));
        label_18 = new QLabel(tab_5);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(830, 0, 121, 61));
        label_18->setStyleSheet(QStringLiteral("background-image: url(:/images/logo.png);"));
        tabWidget_produit->addTab(tab_5, QString());
        label_produit_3->raise();
        frame_3->raise();
        label_19->raise();
        label_18->raise();
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        frame_4 = new QFrame(tab_6);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(20, 60, 771, 411));
        frame_4->setStyleSheet(QStringLiteral(""));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        tableView_2 = new QTableView(frame_4);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(140, 100, 451, 181));
        tableView_2->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 75 9pt \"Arial\";"));
        tableView_2->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_2->setSelectionBehavior(QAbstractItemView::SelectRows);
        pushButton_recherche_produit = new QPushButton(frame_4);
        pushButton_recherche_produit->setObjectName(QStringLiteral("pushButton_recherche_produit"));
        pushButton_recherche_produit->setGeometry(QRect(150, 50, 121, 41));
        QFont font4;
        font4.setFamily(QStringLiteral("Arial"));
        font4.setPointSize(11);
        font4.setBold(true);
        font4.setItalic(false);
        font4.setWeight(75);
        pushButton_recherche_produit->setFont(font4);
        pushButton_recherche_produit->setStyleSheet(QLatin1String("	border: 1px solid black;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: #318aff;\n"
"font: bold, \"Arial\";;\n"
"text-align:center;\n"
""));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/recherhche.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_recherche_produit->setIcon(icon3);
        pushButton_recherche_produit->setIconSize(QSize(30, 30));
        lineEdit_rechercher_2 = new QLineEdit(frame_4);
        lineEdit_rechercher_2->setObjectName(QStringLiteral("lineEdit_rechercher_2"));
        lineEdit_rechercher_2->setGeometry(QRect(290, 40, 131, 61));
        lineEdit_rechercher_2->setStyleSheet(QLatin1String("	border: 1px solid black;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: #318aff;\n"
"font: bold, \"Arial\";;\n"
"text-align:center;"));
        radioButton_nomp = new QRadioButton(frame_4);
        radioButton_nomp->setObjectName(QStringLiteral("radioButton_nomp"));
        radioButton_nomp->setGeometry(QRect(600, 120, 111, 31));
        QFont font5;
        font5.setFamily(QStringLiteral("Century Gothic"));
        font5.setPointSize(10);
        font5.setBold(true);
        font5.setWeight(75);
        radioButton_nomp->setFont(font5);
        radioButton_nomp->setStyleSheet(QStringLiteral(""));
        radioButton_prixp = new QRadioButton(frame_4);
        radioButton_prixp->setObjectName(QStringLiteral("radioButton_prixp"));
        radioButton_prixp->setGeometry(QRect(600, 190, 111, 31));
        radioButton_prixp->setFont(font5);
        radioButton_prixp->setStyleSheet(QStringLiteral(""));
        pushButton_2 = new QPushButton(frame_4);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(200, 290, 91, 41));
        QFont font6;
        font6.setFamily(QStringLiteral("Arial"));
        font6.setPointSize(18);
        font6.setBold(true);
        font6.setItalic(false);
        font6.setWeight(75);
        pushButton_2->setFont(font6);
        pushButton_2->setStyleSheet(QLatin1String("	border: 1px solid black;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: #318aff;\n"
"font: bold, \"Arial\";;\n"
"text-align:center;"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/pdf.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon4);
        pushButton_2->setIconSize(QSize(25, 25));
        pushButton_3 = new QPushButton(frame_4);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(410, 290, 101, 41));
        pushButton_3->setFont(font2);
        pushButton_3->setStyleSheet(QLatin1String("	border: 1px solid black;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: #318aff;\n"
"font: bold, \"Arial\";;\n"
"text-align:center;"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/statistique.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon5);
        label_produit_2 = new QLabel(frame_4);
        label_produit_2->setObjectName(QStringLiteral("label_produit_2"));
        label_produit_2->setGeometry(QRect(120, 40, 601, 311));
        label_produit_2->setPixmap(QPixmap(QString::fromUtf8(":/images/imf.jpg")));
        label_produit_2->raise();
        tableView_2->raise();
        pushButton_recherche_produit->raise();
        lineEdit_rechercher_2->raise();
        radioButton_nomp->raise();
        radioButton_prixp->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        label_produit_5 = new QLabel(tab_6);
        label_produit_5->setObjectName(QStringLiteral("label_produit_5"));
        label_produit_5->setGeometry(QRect(250, 10, 441, 41));
        QFont font7;
        font7.setFamily(QStringLiteral("Trebuchet MS"));
        font7.setPointSize(28);
        font7.setBold(true);
        font7.setWeight(75);
        label_produit_5->setFont(font7);
        pushButton_produit = new QPushButton(tab_6);
        pushButton_produit->setObjectName(QStringLiteral("pushButton_produit"));
        pushButton_produit->setGeometry(QRect(790, 150, 131, 131));
        pushButton_produit->setStyleSheet(QStringLiteral("background-image: url(:/images/addproduct.png);"));
        label_ajouterpr = new QLabel(tab_6);
        label_ajouterpr->setObjectName(QStringLiteral("label_ajouterpr"));
        label_ajouterpr->setGeometry(QRect(790, 300, 141, 41));
        label_ajouterpr->setFont(font7);
        label_produit_4 = new QLabel(tab_6);
        label_produit_4->setObjectName(QStringLiteral("label_produit_4"));
        label_produit_4->setGeometry(QRect(0, 0, 961, 571));
        label_produit_4->setPixmap(QPixmap(QString::fromUtf8(":/images/haya.png")));
        tabWidget_produit->addTab(tab_6, QString());
        label_produit_4->raise();
        frame_4->raise();
        label_produit_5->raise();
        pushButton_produit->raise();
        label_ajouterpr->raise();
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/sport.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_2, icon6, QString());
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
        frame->setGeometry(QRect(150, 30, 631, 361));
        QFont font8;
        font8.setFamily(QStringLiteral("century gothic"));
        font8.setBold(false);
        font8.setWeight(50);
        frame->setFont(font8);
        frame->setStyleSheet(QStringLiteral(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_idm = new QLabel(frame);
        label_idm->setObjectName(QStringLiteral("label_idm"));
        label_idm->setGeometry(QRect(120, 30, 51, 35));
        QFont font9;
        font9.setFamily(QStringLiteral("century gothic"));
        font9.setPointSize(12);
        font9.setBold(true);
        font9.setItalic(false);
        font9.setUnderline(false);
        font9.setWeight(75);
        label_idm->setFont(font9);
        label_idm->setStyleSheet(QLatin1String("*{\n"
"font-family:century gothic ;\n"
"font-size: 20ptx;\n"
"}"));
        label_nomm = new QLabel(frame);
        label_nomm->setObjectName(QStringLiteral("label_nomm"));
        label_nomm->setGeometry(QRect(90, 90, 121, 35));
        QFont font10;
        font10.setFamily(QStringLiteral("Trebuchet MS"));
        font10.setPointSize(12);
        font10.setBold(true);
        font10.setItalic(false);
        font10.setWeight(75);
        label_nomm->setFont(font10);
        label_adressem = new QLabel(frame);
        label_adressem->setObjectName(QStringLiteral("label_adressem"));
        label_adressem->setGeometry(QRect(100, 160, 111, 35));
        label_adressem->setFont(font10);
        Edit_idm = new QLineEdit(frame);
        Edit_idm->setObjectName(QStringLiteral("Edit_idm"));
        Edit_idm->setGeometry(QRect(270, 40, 221, 20));
        QFont font11;
        font11.setFamily(QStringLiteral("century gothic"));
        font11.setBold(false);
        font11.setItalic(false);
        font11.setWeight(50);
        Edit_idm->setFont(font11);
        Edit_idm->setStyleSheet(QStringLiteral(""));
        Edit_nomm = new QLineEdit(frame);
        Edit_nomm->setObjectName(QStringLiteral("Edit_nomm"));
        Edit_nomm->setGeometry(QRect(270, 100, 221, 20));
        Edit_nomm->setFont(font11);
        Edit_nomm->setStyleSheet(QStringLiteral(""));
        Edit_adressem = new QLineEdit(frame);
        Edit_adressem->setObjectName(QStringLiteral("Edit_adressem"));
        Edit_adressem->setGeometry(QRect(270, 170, 221, 20));
        Edit_adressem->setFont(font11);
        Edit_adressem->setStyleSheet(QStringLiteral(""));
        label_nombreblocm = new QLabel(frame);
        label_nombreblocm->setObjectName(QStringLiteral("label_nombreblocm"));
        label_nombreblocm->setGeometry(QRect(90, 230, 131, 35));
        label_nombreblocm->setFont(font10);
        Edit_blocm = new QLineEdit(frame);
        Edit_blocm->setObjectName(QStringLiteral("Edit_blocm"));
        Edit_blocm->setGeometry(QRect(270, 230, 221, 20));
        Edit_blocm->setFont(font11);
        Edit_blocm->setStyleSheet(QStringLiteral(""));
        btn_ajout_mag = new QPushButton(frame);
        btn_ajout_mag->setObjectName(QStringLiteral("btn_ajout_mag"));
        btn_ajout_mag->setGeometry(QRect(90, 300, 131, 41));
        btn_ajout_mag->setFont(font2);
        btn_ajout_mag->setStyleSheet(QLatin1String("	border: 1px solid black;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: #318aff;\n"
"font: bold, \"Arial\";;\n"
"text-align:center;"));
        btn_ajout_mag->setIcon(icon);
        btn_ajout_mag->setIconSize(QSize(30, 30));
        btn_modifier_mag = new QPushButton(frame);
        btn_modifier_mag->setObjectName(QStringLiteral("btn_modifier_mag"));
        btn_modifier_mag->setGeometry(QRect(280, 300, 141, 41));
        btn_modifier_mag->setFont(font2);
        btn_modifier_mag->setStyleSheet(QLatin1String("	border: 1px solid black;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: #318aff;\n"
"font: bold, \"Arial\";;\n"
"text-align:center;"));
        btn_modifier_mag->setIcon(icon1);
        btn_modifier_mag->setIconSize(QSize(30, 30));
        btn_supp_mag = new QPushButton(frame);
        btn_supp_mag->setObjectName(QStringLiteral("btn_supp_mag"));
        btn_supp_mag->setGeometry(QRect(470, 300, 141, 41));
        btn_supp_mag->setFont(font2);
        btn_supp_mag->setStyleSheet(QLatin1String("	border: 1px solid black;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: #318aff;\n"
"font: bold, \"Arial\";;\n"
"text-align:center;"));
        btn_supp_mag->setIcon(icon2);
        btn_supp_mag->setIconSize(QSize(30, 30));
        label_magasin = new QLabel(frame);
        label_magasin->setObjectName(QStringLiteral("label_magasin"));
        label_magasin->setGeometry(QRect(70, 0, 561, 361));
        label_magasin->setPixmap(QPixmap(QString::fromUtf8(":/images/imf.jpg")));
        label_magasin->raise();
        label_idm->raise();
        label_nomm->raise();
        label_adressem->raise();
        Edit_idm->raise();
        Edit_nomm->raise();
        Edit_adressem->raise();
        label_nombreblocm->raise();
        Edit_blocm->raise();
        btn_ajout_mag->raise();
        btn_modifier_mag->raise();
        btn_supp_mag->raise();
        label_2 = new QLabel(tab_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 10, 121, 61));
        label_2->setStyleSheet(QStringLiteral("background-image: url(:/images/logo.png);"));
        label_17 = new QLabel(tab_3);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(0, 80, 141, 20));
        label_17->setFont(font3);
        label_17->setStyleSheet(QStringLiteral("backgound-color:rgb(255, 0, 0)"));
        label_mag = new QLabel(tab_3);
        label_mag->setObjectName(QStringLiteral("label_mag"));
        label_mag->setGeometry(QRect(0, 0, 951, 451));
        label_mag->setPixmap(QPixmap(QString::fromUtf8(":/images/haya.png")));
        tabWidget_2->addTab(tab_3, QString());
        label_mag->raise();
        frame->raise();
        label_2->raise();
        label_17->raise();
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
        tableView_mag->setGeometry(QRect(100, 70, 441, 181));
        tableView_mag->setStyleSheet(QStringLiteral(""));
        tableView_mag->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_mag->setSelectionBehavior(QAbstractItemView::SelectRows);
        pushButton_recherche = new QPushButton(frame_2);
        pushButton_recherche->setObjectName(QStringLiteral("pushButton_recherche"));
        pushButton_recherche->setGeometry(QRect(100, 20, 111, 31));
        QFont font12;
        font12.setFamily(QStringLiteral("Arial"));
        font12.setPointSize(10);
        font12.setBold(true);
        font12.setItalic(false);
        font12.setWeight(75);
        pushButton_recherche->setFont(font12);
        pushButton_recherche->setStyleSheet(QLatin1String("	border: 1px solid black;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: #318aff;\n"
"font: bold, \"Arial\";;\n"
"text-align:center;"));
        pushButton_recherche->setIcon(icon3);
        pushButton_recherche->setIconSize(QSize(30, 30));
        lineEdit_rechercher = new QLineEdit(frame_2);
        lineEdit_rechercher->setObjectName(QStringLiteral("lineEdit_rechercher"));
        lineEdit_rechercher->setGeometry(QRect(230, 10, 191, 51));
        lineEdit_rechercher->setStyleSheet(QLatin1String("	border: 1px solid black;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: #318aff;\n"
"font: bold, \"Arial\";;\n"
"text-align:center;"));
        radioButton_idm = new QRadioButton(frame_2);
        radioButton_idm->setObjectName(QStringLiteral("radioButton_idm"));
        radioButton_idm->setGeometry(QRect(580, 80, 111, 31));
        QFont font13;
        font13.setFamily(QStringLiteral("Century Gothic"));
        font13.setPointSize(10);
        font13.setBold(true);
        font13.setItalic(false);
        font13.setUnderline(false);
        font13.setWeight(75);
        radioButton_idm->setFont(font13);
        radioButton_idm->setStyleSheet(QStringLiteral(""));
        radioButton_nomm = new QRadioButton(frame_2);
        radioButton_nomm->setObjectName(QStringLiteral("radioButton_nomm"));
        radioButton_nomm->setGeometry(QRect(580, 130, 121, 31));
        radioButton_nomm->setFont(font5);
        radioButton_nomm->setStyleSheet(QStringLiteral(""));
        radioButton_blocm = new QRadioButton(frame_2);
        radioButton_blocm->setObjectName(QStringLiteral("radioButton_blocm"));
        radioButton_blocm->setGeometry(QRect(580, 190, 131, 31));
        radioButton_blocm->setFont(font5);
        radioButton_blocm->setStyleSheet(QStringLiteral(""));
        pushButton_pdf_2 = new QPushButton(frame_2);
        pushButton_pdf_2->setObjectName(QStringLiteral("pushButton_pdf_2"));
        pushButton_pdf_2->setGeometry(QRect(280, 260, 91, 41));
        pushButton_pdf_2->setFont(font2);
        pushButton_pdf_2->setStyleSheet(QLatin1String("	border: 1px solid black;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: #318aff;\n"
"font: bold, \"Arial\";;\n"
"text-align:center;"));
        pushButton_pdf_2->setIcon(icon4);
        pushButton_pdf_2->setIconSize(QSize(30, 30));
        label_maga = new QLabel(frame_2);
        label_maga->setObjectName(QStringLiteral("label_maga"));
        label_maga->setGeometry(QRect(80, 0, 671, 311));
        label_maga->setPixmap(QPixmap(QString::fromUtf8(":/images/imf.jpg")));
        label_maga->raise();
        tableView_mag->raise();
        pushButton_recherche->raise();
        lineEdit_rechercher->raise();
        radioButton_idm->raise();
        radioButton_nomm->raise();
        radioButton_blocm->raise();
        pushButton_pdf_2->raise();
        label_gestionmag = new QLabel(tab_4);
        label_gestionmag->setObjectName(QStringLiteral("label_gestionmag"));
        label_gestionmag->setGeometry(QRect(210, 20, 461, 41));
        label_gestionmag->setFont(font7);
        pushButton_ajoutmag = new QPushButton(tab_4);
        pushButton_ajoutmag->setObjectName(QStringLiteral("pushButton_ajoutmag"));
        pushButton_ajoutmag->setGeometry(QRect(820, 140, 131, 131));
        pushButton_ajoutmag->setStyleSheet(QLatin1String("\n"
"background-image: url(:/images/addmagasin.png);"));
        label_ajouter_mag = new QLabel(tab_4);
        label_ajouter_mag->setObjectName(QStringLiteral("label_ajouter_mag"));
        label_ajouter_mag->setGeometry(QRect(830, 280, 131, 41));
        label_ajouter_mag->setFont(font7);
        label_mags = new QLabel(tab_4);
        label_mags->setObjectName(QStringLiteral("label_mags"));
        label_mags->setGeometry(QRect(0, 0, 981, 451));
        label_mags->setPixmap(QPixmap(QString::fromUtf8(":/images/haya.png")));
        tabWidget_2->addTab(tab_4, QString());
        label_mags->raise();
        frame_2->raise();
        label_gestionmag->raise();
        pushButton_ajoutmag->raise();
        label_ajouter_mag->raise();
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/shop.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab, icon7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        combo_action = new QComboBox(tab_8);
        combo_action->setObjectName(QStringLiteral("combo_action"));
        combo_action->setGeometry(QRect(210, 100, 101, 31));
        combo_action->setStyleSheet(QLatin1String("	border: 1px solid black;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: #318aff;\n"
"font: bold, \"Arial\";;\n"
"text-align:center;"));
        listhistorique = new QListView(tab_8);
        listhistorique->setObjectName(QStringLiteral("listhistorique"));
        listhistorique->setGeometry(QRect(200, 140, 561, 251));
        label_history = new QLabel(tab_8);
        label_history->setObjectName(QStringLiteral("label_history"));
        label_history->setGeometry(QRect(180, 90, 621, 351));
        label_history->setPixmap(QPixmap(QString::fromUtf8(":/images/imf.jpg")));
        label_historys = new QLabel(tab_8);
        label_historys->setObjectName(QStringLiteral("label_historys"));
        label_historys->setGeometry(QRect(0, 0, 961, 611));
        label_historys->setPixmap(QPixmap(QString::fromUtf8(":/images/haya.png")));
        dateEdit_history = new QDateEdit(tab_8);
        dateEdit_history->setObjectName(QStringLiteral("dateEdit_history"));
        dateEdit_history->setGeometry(QRect(500, 400, 121, 31));
        dateEdit_history->setStyleSheet(QLatin1String("	border: 1px solid black;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: #318aff;\n"
"font: bold, \"Arial\";;\n"
"text-align:center;"));
        pushButton_supphistory = new QPushButton(tab_8);
        pushButton_supphistory->setObjectName(QStringLiteral("pushButton_supphistory"));
        pushButton_supphistory->setGeometry(QRect(350, 400, 131, 31));
        pushButton_supphistory->setFont(font2);
        pushButton_supphistory->setStyleSheet(QLatin1String("	border: 1px solid black;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: #318aff;\n"
"font: bold, \"Arial\";;\n"
"text-align:center;"));
        pushButton_supphistory->setIcon(icon2);
        comboBox_mp = new QComboBox(tab_8);
        comboBox_mp->setObjectName(QStringLiteral("comboBox_mp"));
        comboBox_mp->setGeometry(QRect(670, 100, 81, 31));
        comboBox_mp->setStyleSheet(QLatin1String("	border: 1px solid black;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: #318aff;\n"
"font: bold, \"Arial\";;\n"
"text-align:center;"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/images/clock.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_8, icon8, QString());
        label_historys->raise();
        label_history->raise();
        combo_action->raise();
        listhistorique->raise();
        dateEdit_history->raise();
        pushButton_supphistory->raise();
        comboBox_mp->raise();
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        buttonon = new QPushButton(tab_7);
        buttonon->setObjectName(QStringLiteral("buttonon"));
        buttonon->setEnabled(false);
        buttonon->setGeometry(QRect(510, 210, 61, 31));
        buttonon->setStyleSheet(QLatin1String("	border: 1px solid black;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: #318aff;\n"
"font: bold, \"Arial\";;\n"
"text-align:center;"));
        temp_label_2 = new QLabel(tab_7);
        temp_label_2->setObjectName(QStringLiteral("temp_label_2"));
        temp_label_2->setGeometry(QRect(210, 210, 111, 41));
        QFont font14;
        font14.setFamily(QStringLiteral("Trebuchet MS"));
        font14.setPointSize(14);
        font14.setBold(true);
        font14.setWeight(75);
        temp_label_2->setFont(font14);
        layoutWidget = new QWidget(tab_7);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(440, 290, 241, 91));
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
        temp_lcdNumber->setStyleSheet(QStringLiteral(""));
        temp_lcdNumber->setDigitCount(7);

        horizontalLayout->addWidget(temp_lcdNumber);

        label_alert = new QLabel(tab_7);
        label_alert->setObjectName(QStringLiteral("label_alert"));
        label_alert->setGeometry(QRect(220, 400, 491, 51));
        QFont font15;
        font15.setPointSize(26);
        font15.setBold(true);
        font15.setWeight(75);
        label_alert->setFont(font15);
        label_alert->setStyleSheet(QStringLiteral("color:RED;"));
        temp_label = new QLabel(tab_7);
        temp_label->setObjectName(QStringLiteral("temp_label"));
        temp_label->setGeometry(QRect(160, 310, 261, 61));
        QFont font16;
        font16.setFamily(QStringLiteral("Trebuchet MS"));
        font16.setPointSize(24);
        font16.setBold(true);
        font16.setUnderline(false);
        font16.setWeight(75);
        temp_label->setFont(font16);
        temp_label->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        temp_label->setTextFormat(Qt::AutoText);
        buttonoff = new QPushButton(tab_7);
        buttonoff->setObjectName(QStringLiteral("buttonoff"));
        buttonoff->setEnabled(false);
        buttonoff->setGeometry(QRect(620, 210, 61, 31));
        buttonoff->setStyleSheet(QLatin1String("	border: 1px solid black;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: #318aff;\n"
"font: bold, \"Arial\";;\n"
"text-align:center;"));
        label_controle_temp = new QLabel(tab_7);
        label_controle_temp->setObjectName(QStringLiteral("label_controle_temp"));
        label_controle_temp->setGeometry(QRect(290, 30, 511, 41));
        label_controle_temp->setFont(font7);
        label_controle_temp->setTextFormat(Qt::AutoText);
        label_temp = new QLabel(tab_7);
        label_temp->setObjectName(QStringLiteral("label_temp"));
        label_temp->setGeometry(QRect(150, 80, 711, 391));
        label_temp->setPixmap(QPixmap(QString::fromUtf8(":/images/imf.jpg")));
        label_historrys = new QLabel(tab_7);
        label_historrys->setObjectName(QStringLiteral("label_historrys"));
        label_historrys->setGeometry(QRect(0, 0, 961, 541));
        label_historrys->setPixmap(QPixmap(QString::fromUtf8(":/images/haya.png")));
        temp_label_7 = new QLabel(tab_7);
        temp_label_7->setObjectName(QStringLiteral("temp_label_7"));
        temp_label_7->setGeometry(QRect(290, 120, 141, 51));
        temp_label_7->setFont(font14);
        label_connect = new QLabel(tab_7);
        label_connect->setObjectName(QStringLiteral("label_connect"));
        label_connect->setGeometry(QRect(470, 120, 71, 41));
        label_connect->setPixmap(QPixmap(QString::fromUtf8(":/images/usb.png")));
        label_connect->setScaledContents(true);
        combotype = new QComboBox(tab_7);
        combotype->setObjectName(QStringLiteral("combotype"));
        combotype->setGeometry(QRect(361, 220, 101, 22));
        combotype->setStyleSheet(QLatin1String("	border: 1px solid black;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: #318aff;\n"
"font: bold, \"Arial\";;\n"
"text-align:center;"));
        label_alert_2 = new QLabel(tab_7);
        label_alert_2->setObjectName(QStringLiteral("label_alert_2"));
        label_alert_2->setGeometry(QRect(730, 400, 61, 51));
        label_alert_2->setPixmap(QPixmap(QString::fromUtf8(":/images/thermometerr.png")));
        label_alert_2->setScaledContents(true);
        label_etat_2 = new QLabel(tab_7);
        label_etat_2->setObjectName(QStringLiteral("label_etat_2"));
        label_etat_2->setGeometry(QRect(760, 200, 51, 51));
        label_etat_2->setPixmap(QPixmap(QString::fromUtf8(":/images/mute.png")));
        label_etat_2->setScaledContents(true);
        label = new QLabel(tab_7);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 120, 101, 51));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/arduino.png")));
        label->setScaledContents(true);
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/images/temperature.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_7, icon9, QString());
        label_historrys->raise();
        label_temp->raise();
        buttonon->raise();
        temp_label_2->raise();
        layoutWidget->raise();
        label_alert->raise();
        temp_label->raise();
        buttonoff->raise();
        label_controle_temp->raise();
        temp_label_7->raise();
        label_connect->raise();
        combotype->raise();
        label_alert_2->raise();
        label_etat_2->raise();
        label->raise();
        label_musique_2 = new QLabel(centralwidget);
        label_musique_2->setObjectName(QStringLiteral("label_musique_2"));
        label_musique_2->setGeometry(QRect(990, 140, 261, 281));
        label_musique_2->setPixmap(QPixmap(QString::fromUtf8(":/images/imf.jpg")));
        groupBox_music = new QGroupBox(centralwidget);
        groupBox_music->setObjectName(QStringLiteral("groupBox_music"));
        groupBox_music->setGeometry(QRect(1000, 160, 241, 241));
        start = new QPushButton(groupBox_music);
        start->setObjectName(QStringLiteral("start"));
        start->setGeometry(QRect(40, 150, 41, 31));
        start->setStyleSheet(QStringLiteral(""));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/images/music.png"), QSize(), QIcon::Normal, QIcon::Off);
        start->setIcon(icon10);
        start->setIconSize(QSize(24, 24));
        stop = new QPushButton(groupBox_music);
        stop->setObjectName(QStringLiteral("stop"));
        stop->setGeometry(QRect(180, 150, 41, 31));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/images/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        stop->setIcon(icon11);
        stop->setIconSize(QSize(24, 24));
        sliderprogress = new QSlider(groupBox_music);
        sliderprogress->setObjectName(QStringLiteral("sliderprogress"));
        sliderprogress->setGeometry(QRect(70, 120, 121, 22));
        sliderprogress->setValue(0);
        sliderprogress->setOrientation(Qt::Horizontal);
        sliderprogress->setTickInterval(0);
        slider_volume = new QSlider(groupBox_music);
        slider_volume->setObjectName(QStringLiteral("slider_volume"));
        slider_volume->setGeometry(QRect(80, 210, 121, 22));
        slider_volume->setMaximum(100);
        slider_volume->setSingleStep(10);
        slider_volume->setValue(50);
        slider_volume->setOrientation(Qt::Horizontal);
        fichiermp3 = new QPushButton(groupBox_music);
        fichiermp3->setObjectName(QStringLiteral("fichiermp3"));
        fichiermp3->setGeometry(QRect(110, 150, 41, 31));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/images/plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        fichiermp3->setIcon(icon12);
        fichiermp3->setIconSize(QSize(24, 24));
        label_musique = new QLabel(groupBox_music);
        label_musique->setObjectName(QStringLiteral("label_musique"));
        label_musique->setGeometry(QRect(50, 20, 141, 20));
        label_musique->setStyleSheet(QLatin1String("font: 75 12pt \"Trebuchet MS\";\n"
"color: rgb(255, 0, 0);"));
        label_musique->setAlignment(Qt::AlignCenter);
        btn_volume = new QPushButton(groupBox_music);
        btn_volume->setObjectName(QStringLiteral("btn_volume"));
        btn_volume->setGeometry(QRect(20, 200, 51, 31));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/images/audio.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_volume->setIcon(icon13);
        btn_volume->setIconSize(QSize(32, 32));
        valeur_volume = new QLabel(groupBox_music);
        valeur_volume->setObjectName(QStringLiteral("valeur_volume"));
        valeur_volume->setGeometry(QRect(210, 210, 31, 20));
        valeur_volume->setStyleSheet(QLatin1String("font: 75 12pt \"Trebuchet MS\";\n"
"color: rgb(255, 0, 0);"));
        valeur_volume->setAlignment(Qt::AlignCenter);
        label_20 = new QLabel(groupBox_music);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(90, 50, 61, 61));
        label_20->setStyleSheet(QStringLiteral(""));
        label_20->setPixmap(QPixmap(QString::fromUtf8(":/images/music-albom.png")));
        pushButton_fr = new QPushButton(centralwidget);
        pushButton_fr->setObjectName(QStringLiteral("pushButton_fr"));
        pushButton_fr->setGeometry(QRect(1160, 440, 75, 51));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/images/france.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_fr->setIcon(icon14);
        pushButton_fr->setIconSize(QSize(70, 70));
        pushButton_ang = new QPushButton(centralwidget);
        pushButton_ang->setObjectName(QStringLiteral("pushButton_ang"));
        pushButton_ang->setGeometry(QRect(1020, 440, 71, 51));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/images/united-kingdom.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_ang->setIcon(icon15);
        pushButton_ang->setIconSize(QSize(70, 70));
        Dialog->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Dialog);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Dialog->setStatusBar(statusbar);

        retranslateUi(Dialog);

        tabWidget->setCurrentIndex(0);
        tabWidget_produit->setCurrentIndex(1);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QMainWindow *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", Q_NULLPTR));
        lineEdit_idpr->setText(QString());
        lineEdit_idpr->setPlaceholderText(QApplication::translate("Dialog", "ID de 6chiffres", Q_NULLPTR));
        lineEdit_nompr->setPlaceholderText(QApplication::translate("Dialog", "NOM", Q_NULLPTR));
        lineEdit_nombrepr->setPlaceholderText(QApplication::translate("Dialog", "NOMBRE", Q_NULLPTR));
        lineEdit_prixpr->setPlaceholderText(QApplication::translate("Dialog", "PRIX", Q_NULLPTR));
        label_nomp->setText(QApplication::translate("Dialog", "Nom", Q_NULLPTR));
        label_nombrep->setText(QApplication::translate("Dialog", "Nombre", Q_NULLPTR));
        label_prixp->setText(QApplication::translate("Dialog", "Prix", Q_NULLPTR));
        label_categoriep->setText(QApplication::translate("Dialog", "Categorie", Q_NULLPTR));
        label_idp->setText(QApplication::translate("Dialog", "ID", Q_NULLPTR));
        comboBox_cat->clear();
        comboBox_cat->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "FOOTBALL", Q_NULLPTR)
         << QApplication::translate("Dialog", "HANDBALL", Q_NULLPTR)
         << QApplication::translate("Dialog", "BASKETBALL", Q_NULLPTR)
         << QApplication::translate("Dialog", "VOLLEYBALL", Q_NULLPTR)
        );
        label_magasinp->setText(QApplication::translate("Dialog", "Magasin", Q_NULLPTR));
        label_produit->setText(QString());
        pushButton_sauvgarderproduit->setText(QApplication::translate("Dialog", "Ajouter", Q_NULLPTR));
        pushButton_modifierproduit->setText(QApplication::translate("Dialog", "Modifier", Q_NULLPTR));
        pushButton_supprimerpr->setText(QApplication::translate("Dialog", "Supprimer", Q_NULLPTR));
        label_19->setText(QApplication::translate("Dialog", "Smart Fitness", Q_NULLPTR));
        label_produit_3->setText(QString());
        label_18->setText(QString());
        tabWidget_produit->setTabText(tabWidget_produit->indexOf(tab_5), QApplication::translate("Dialog", "Ajouter produit", Q_NULLPTR));
        pushButton_recherche_produit->setText(QApplication::translate("Dialog", "Rechercher", Q_NULLPTR));
        lineEdit_rechercher_2->setPlaceholderText(QApplication::translate("Dialog", "ID/NOM/CATEGORIE", Q_NULLPTR));
        radioButton_nomp->setText(QApplication::translate("Dialog", "Tri par nom", Q_NULLPTR));
        radioButton_prixp->setText(QApplication::translate("Dialog", "Tri par prix", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Dialog", "PDF", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Dialog", "STAT", Q_NULLPTR));
        label_produit_2->setText(QString());
        label_produit_5->setText(QApplication::translate("Dialog", "GESTION  DES PRODUITS", Q_NULLPTR));
        pushButton_produit->setText(QString());
        label_ajouterpr->setText(QApplication::translate("Dialog", "Ajouter", Q_NULLPTR));
        label_produit_4->setText(QString());
        tabWidget_produit->setTabText(tabWidget_produit->indexOf(tab_6), QApplication::translate("Dialog", "Afficher produit", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Dialog", "produits", Q_NULLPTR));
        label_idm->setText(QApplication::translate("Dialog", "  ID                             ", Q_NULLPTR));
        label_nomm->setText(QApplication::translate("Dialog", "Nom magasin                         ", Q_NULLPTR));
        label_adressem->setText(QApplication::translate("Dialog", "Adresse", Q_NULLPTR));
        Edit_idm->setText(QString());
        Edit_idm->setPlaceholderText(QApplication::translate("Dialog", "ID de 6 chiffres", Q_NULLPTR));
        Edit_nomm->setText(QString());
        Edit_nomm->setPlaceholderText(QApplication::translate("Dialog", "NOM", Q_NULLPTR));
        Edit_adressem->setText(QString());
        Edit_adressem->setPlaceholderText(QApplication::translate("Dialog", "Adresse", Q_NULLPTR));
        label_nombreblocm->setText(QApplication::translate("Dialog", "Nombre bloc", Q_NULLPTR));
        Edit_blocm->setText(QString());
        Edit_blocm->setPlaceholderText(QApplication::translate("Dialog", "nombre bloc", Q_NULLPTR));
        btn_ajout_mag->setText(QApplication::translate("Dialog", "Ajouter", Q_NULLPTR));
        btn_modifier_mag->setText(QApplication::translate("Dialog", "Modifier", Q_NULLPTR));
        btn_supp_mag->setText(QApplication::translate("Dialog", "Supprimer", Q_NULLPTR));
        label_magasin->setText(QString());
        label_2->setText(QString());
        label_17->setText(QApplication::translate("Dialog", "Smart Fitness", Q_NULLPTR));
        label_mag->setText(QString());
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("Dialog", "Ajouter magasin", Q_NULLPTR));
        pushButton_recherche->setText(QApplication::translate("Dialog", "Rechercher", Q_NULLPTR));
        lineEdit_rechercher->setPlaceholderText(QApplication::translate("Dialog", "ID/NOM/BLOC", Q_NULLPTR));
        radioButton_idm->setText(QApplication::translate("Dialog", "Tri par ID", Q_NULLPTR));
        radioButton_nomm->setText(QApplication::translate("Dialog", "Tri par nom", Q_NULLPTR));
        radioButton_blocm->setText(QApplication::translate("Dialog", "Tri par bloc", Q_NULLPTR));
        pushButton_pdf_2->setText(QApplication::translate("Dialog", "PDF", Q_NULLPTR));
        label_maga->setText(QString());
        label_gestionmag->setText(QApplication::translate("Dialog", "GESTION  DES MAGASINS", Q_NULLPTR));
        pushButton_ajoutmag->setText(QString());
        label_ajouter_mag->setText(QApplication::translate("Dialog", "Ajouter", Q_NULLPTR));
        label_mags->setText(QString());
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("Dialog", "Afficher magasin", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Dialog", "Magasins", Q_NULLPTR));
        combo_action->clear();
        combo_action->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "Tous", Q_NULLPTR)
         << QApplication::translate("Dialog", "Ajout", Q_NULLPTR)
         << QApplication::translate("Dialog", "Modification", Q_NULLPTR)
         << QApplication::translate("Dialog", "Suppression", Q_NULLPTR)
        );
        label_history->setText(QString());
        label_historys->setText(QString());
        dateEdit_history->setDisplayFormat(QApplication::translate("Dialog", "dd/MM/yy", Q_NULLPTR));
        pushButton_supphistory->setText(QApplication::translate("Dialog", "supprimer", Q_NULLPTR));
        comboBox_mp->clear();
        comboBox_mp->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "Tous", Q_NULLPTR)
         << QApplication::translate("Dialog", "Produit", Q_NULLPTR)
         << QApplication::translate("Dialog", "Magasin", Q_NULLPTR)
        );
        tabWidget->setTabText(tabWidget->indexOf(tab_8), QApplication::translate("Dialog", "Historique", Q_NULLPTR));
        buttonon->setText(QApplication::translate("Dialog", "ON", Q_NULLPTR));
        temp_label_2->setText(QApplication::translate("Dialog", "Sonnerie  :", Q_NULLPTR));
        label_alert->setText(QString());
        temp_label->setText(QApplication::translate("Dialog", " Temperature\302\260C:", Q_NULLPTR));
        buttonoff->setText(QApplication::translate("Dialog", "OFF", Q_NULLPTR));
        label_controle_temp->setText(QApplication::translate("Dialog", "contr\303\264le de temp\303\251rature", Q_NULLPTR));
        label_temp->setText(QString());
        label_historrys->setText(QString());
        temp_label_7->setText(QApplication::translate("Dialog", "Carte Arduino :", Q_NULLPTR));
        label_connect->setText(QString());
        combotype->clear();
        combotype->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "Automatique", Q_NULLPTR)
         << QApplication::translate("Dialog", "Manuelle", Q_NULLPTR)
        );
        label_alert_2->setText(QString());
        label_etat_2->setText(QString());
        label->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("Dialog", "Contr\303\264le de temp\303\251rature", Q_NULLPTR));
        label_musique_2->setText(QString());
        groupBox_music->setTitle(QApplication::translate("Dialog", "Lecteur de musique", Q_NULLPTR));
        start->setText(QString());
        stop->setText(QString());
        fichiermp3->setText(QString());
        label_musique->setText(QApplication::translate("Dialog", "Nom Fichier", Q_NULLPTR));
        btn_volume->setText(QString());
        valeur_volume->setText(QApplication::translate("Dialog", "50", Q_NULLPTR));
        label_20->setText(QString());
        pushButton_fr->setText(QString());
        pushButton_ang->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
