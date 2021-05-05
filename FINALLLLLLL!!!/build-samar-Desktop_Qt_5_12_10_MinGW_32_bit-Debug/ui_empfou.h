/********************************************************************************
** Form generated from reading UI file 'empfou.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPFOU_H
#define UI_EMPFOU_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_empfou
{
public:
    QTabWidget *arduino;
    QWidget *tab;
    QStackedWidget *stackedWidget_ajout;
    QWidget *page;
    QLabel *text_nb;
    QLabel *text_prix;
    QLabel *label_17;
    QLineEdit *prenom_emp;
    QLineEdit *tel_emp;
    QLabel *text_lieu;
    QLineEdit *nom_emp;
    QLineEdit *email_emp;
    QLabel *text_date;
    QPushButton *Valider_emp;
    QLineEdit *id_emp;
    QLabel *text_nom;
    QLineEdit *salaire_emp;
    QPushButton *emp;
    QLineEdit *role_emp;
    QLabel *text_nb_2;
    QLabel *image;
    QPushButton *push_photo_emp;
    QLabel *label_30;
    QLabel *label_31;
    QWidget *page_2;
    QStackedWidget *stackedWidget;
    QWidget *page_4;
    QComboBox *comboBox_emp;
    QPushButton *excel_emp;
    QPushButton *supprimer_emp;
    QLineEdit *recherche_emp;
    QPushButton *search_emp;
    QTableView *tableView_emp;
    QPushButton *ajouter_emp;
    QLabel *label_36;
    QLabel *label_54;
    QPushButton *pushButton_3;
    QWidget *page_5;
    QLineEdit *email_emp_modif;
    QLabel *label_10;
    QLabel *label_11;
    QLineEdit *nom_emp_modif;
    QLineEdit *prenom_emp_modif;
    QLabel *label_6;
    QLabel *label_8;
    QLineEdit *tel_emp_modif;
    QLabel *label_18;
    QLineEdit *id_emp_modif;
    QLineEdit *salaire_emp_modif;
    QLabel *label_19;
    QLineEdit *role_emp_modif;
    QLabel *label_20;
    QLabel *label_34;
    QLabel *label_35;
    QPushButton *modifier_emp;
    QPushButton *Annuler_emp;
    QWidget *tab_2;
    QStackedWidget *stackedWidget_2;
    QWidget *page_3;
    QLineEdit *email_four;
    QLabel *text_tel_four;
    QLabel *text_email_four;
    QLabel *text_prenom_four;
    QLineEdit *nom_four;
    QPushButton *ajouter_four;
    QLineEdit *prenom_four;
    QLineEdit *tel_four;
    QLabel *text_nom_four;
    QLineEdit *id_four;
    QLabel *label_29;
    QPushButton *four2;
    QComboBox *produit_four;
    QLabel *text_produit_four;
    QLabel *label_22;
    QLabel *label_23;
    QWidget *page_6;
    QComboBox *comboBox_four;
    QPushButton *search_four;
    QPushButton *supprimer_four;
    QLineEdit *recherche_four;
    QTableView *tableView_four;
    QPushButton *four_ajout;
    QPushButton *actualiser;
    QLabel *label_52;
    QLabel *label_24;
    QPushButton *pushButton;
    QWidget *page_7;
    QLabel *label_25;
    QLabel *label_26;
    QLineEdit *nom_four_modif;
    QLineEdit *tel_four_modif;
    QLabel *label_28;
    QPushButton *modifier_four;
    QPushButton *Annuler_four_modif;
    QLineEdit *id_four_modif;
    QLineEdit *prenom_four_modif;
    QLineEdit *email_four_modif;
    QLabel *label_32;
    QLabel *label_33;
    QLabel *label_27;
    QLabel *label_2;
    QWidget *tab_4;
    QPlainTextEdit *TextEdit_text;
    QLabel *label_13;
    QLabel *label_15;
    QLabel *label_16;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_lire;
    QPushButton *pushButton_modifier;
    QPushButton *pushButton_4;
    QWidget *tab_3;
    QLabel *temp_label_2;
    QLabel *temp_label_3;
    QLCDNumber *temp_lcdNumber;
    QLabel *temp_label;
    QPushButton *buttonoff;
    QPushButton *buttonon;
    QLabel *label_etat;
    QLabel *label_alert_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_12;
    QLabel *lbl_time;
    QLabel *label_53;
    QLabel *label_21;
    QPushButton *pushButton_2;
    QLabel *label_alert;

    void setupUi(QDialog *empfou)
    {
        if (empfou->objectName().isEmpty())
            empfou->setObjectName(QString::fromUtf8("empfou"));
        empfou->resize(950, 535);
        empfou->setContextMenuPolicy(Qt::PreventContextMenu);
        empfou->setStyleSheet(QString::fromUtf8(""));
        empfou->setSizeGripEnabled(false);
        empfou->setModal(false);
        arduino = new QTabWidget(empfou);
        arduino->setObjectName(QString::fromUtf8("arduino"));
        arduino->setEnabled(true);
        arduino->setGeometry(QRect(0, 0, 1311, 591));
        QFont font;
        font.setPointSize(12);
        arduino->setFont(font);
        arduino->setStyleSheet(QString::fromUtf8("QTabWidget::pane { /* The tab widget frame */\n"
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
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tab->setStyleSheet(QString::fromUtf8(""));
        stackedWidget_ajout = new QStackedWidget(tab);
        stackedWidget_ajout->setObjectName(QString::fromUtf8("stackedWidget_ajout"));
        stackedWidget_ajout->setGeometry(QRect(-10, 0, 961, 621));
        stackedWidget_ajout->setStyleSheet(QString::fromUtf8(""));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        text_nb = new QLabel(page);
        text_nb->setObjectName(QString::fromUtf8("text_nb"));
        text_nb->setGeometry(QRect(280, 320, 91, 21));
        QFont font1;
        font1.setPointSize(10);
        text_nb->setFont(font1);
        text_prix = new QLabel(page);
        text_prix->setObjectName(QString::fromUtf8("text_prix"));
        text_prix->setGeometry(QRect(280, 240, 61, 21));
        text_prix->setFont(font1);
        label_17 = new QLabel(page);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(290, 80, 51, 21));
        label_17->setFont(font1);
        prenom_emp = new QLineEdit(page);
        prenom_emp->setObjectName(QString::fromUtf8("prenom_emp"));
        prenom_emp->setGeometry(QRect(380, 150, 151, 41));
        prenom_emp->setStyleSheet(QString::fromUtf8("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        tel_emp = new QLineEdit(page);
        tel_emp->setObjectName(QString::fromUtf8("tel_emp"));
        tel_emp->setGeometry(QRect(380, 230, 151, 41));
        tel_emp->setStyleSheet(QString::fromUtf8("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        text_lieu = new QLabel(page);
        text_lieu->setObjectName(QString::fromUtf8("text_lieu"));
        text_lieu->setGeometry(QRect(280, 160, 91, 21));
        text_lieu->setFont(font1);
        nom_emp = new QLineEdit(page);
        nom_emp->setObjectName(QString::fromUtf8("nom_emp"));
        nom_emp->setGeometry(QRect(380, 110, 151, 41));
        nom_emp->setStyleSheet(QString::fromUtf8("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        email_emp = new QLineEdit(page);
        email_emp->setObjectName(QString::fromUtf8("email_emp"));
        email_emp->setGeometry(QRect(380, 190, 151, 41));
        email_emp->setStyleSheet(QString::fromUtf8("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        text_date = new QLabel(page);
        text_date->setObjectName(QString::fromUtf8("text_date"));
        text_date->setGeometry(QRect(280, 200, 71, 21));
        text_date->setFont(font1);
        Valider_emp = new QPushButton(page);
        Valider_emp->setObjectName(QString::fromUtf8("Valider_emp"));
        Valider_emp->setGeometry(QRect(580, 380, 161, 41));
        Valider_emp->setStyleSheet(QString::fromUtf8("		border: 1px solid black;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: #318aff;\n"
"font: bold, \"Arial\";;\n"
"text-align:center;\n"
"\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/label.png"), QSize(), QIcon::Normal, QIcon::Off);
        Valider_emp->setIcon(icon);
        Valider_emp->setIconSize(QSize(30, 30));
        id_emp = new QLineEdit(page);
        id_emp->setObjectName(QString::fromUtf8("id_emp"));
        id_emp->setGeometry(QRect(380, 70, 151, 41));
        id_emp->setStyleSheet(QString::fromUtf8("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);\n"
"color: rgb(255, 255, 127);"));
        id_emp->setEchoMode(QLineEdit::Password);
        text_nom = new QLabel(page);
        text_nom->setObjectName(QString::fromUtf8("text_nom"));
        text_nom->setGeometry(QRect(280, 120, 61, 21));
        text_nom->setFont(font1);
        salaire_emp = new QLineEdit(page);
        salaire_emp->setObjectName(QString::fromUtf8("salaire_emp"));
        salaire_emp->setGeometry(QRect(380, 310, 151, 41));
        salaire_emp->setStyleSheet(QString::fromUtf8("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        emp = new QPushButton(page);
        emp->setObjectName(QString::fromUtf8("emp"));
        emp->setGeometry(QRect(600, 140, 121, 141));
        emp->setStyleSheet(QString::fromUtf8("gridline-color: rgb(0, 0, 0);"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/skills.png"), QSize(), QIcon::Normal, QIcon::Off);
        emp->setIcon(icon1);
        emp->setIconSize(QSize(101, 81));
        emp->setAutoDefault(false);
        role_emp = new QLineEdit(page);
        role_emp->setObjectName(QString::fromUtf8("role_emp"));
        role_emp->setGeometry(QRect(380, 270, 151, 41));
        role_emp->setStyleSheet(QString::fromUtf8("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        text_nb_2 = new QLabel(page);
        text_nb_2->setObjectName(QString::fromUtf8("text_nb_2"));
        text_nb_2->setGeometry(QRect(280, 280, 61, 21));
        text_nb_2->setFont(font1);
        image = new QLabel(page);
        image->setObjectName(QString::fromUtf8("image"));
        image->setGeometry(QRect(360, 360, 191, 91));
        image->setStyleSheet(QString::fromUtf8("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        push_photo_emp = new QPushButton(page);
        push_photo_emp->setObjectName(QString::fromUtf8("push_photo_emp"));
        push_photo_emp->setGeometry(QRect(290, 360, 151, 91));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        push_photo_emp->setFont(font2);
        push_photo_emp->setStyleSheet(QString::fromUtf8("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/gallery.png"), QSize(), QIcon::Normal, QIcon::Off);
        push_photo_emp->setIcon(icon2);
        push_photo_emp->setIconSize(QSize(50, 50));
        label_30 = new QLabel(page);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(220, 30, 551, 431));
        label_30->setPixmap(QPixmap(QString::fromUtf8(":/icons/imf.jpg")));
        label_31 = new QLabel(page);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(10, 0, 951, 491));
        label_31->setPixmap(QPixmap(QString::fromUtf8(":/icons/haya.png")));
        stackedWidget_ajout->addWidget(page);
        label_31->raise();
        label_30->raise();
        text_nb->raise();
        text_prix->raise();
        label_17->raise();
        prenom_emp->raise();
        tel_emp->raise();
        text_lieu->raise();
        nom_emp->raise();
        email_emp->raise();
        text_date->raise();
        Valider_emp->raise();
        id_emp->raise();
        text_nom->raise();
        salaire_emp->raise();
        emp->raise();
        role_emp->raise();
        text_nb_2->raise();
        image->raise();
        push_photo_emp->raise();
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setStyleSheet(QString::fromUtf8(""));
        stackedWidget = new QStackedWidget(page_2);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 10, 951, 721));
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        page_4->setStyleSheet(QString::fromUtf8(""));
        comboBox_emp = new QComboBox(page_4);
        comboBox_emp->addItem(QString());
        comboBox_emp->addItem(QString());
        comboBox_emp->addItem(QString());
        comboBox_emp->setObjectName(QString::fromUtf8("comboBox_emp"));
        comboBox_emp->setGeometry(QRect(340, 380, 111, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Arial"));
        font3.setPointSize(11);
        font3.setBold(true);
        font3.setItalic(false);
        font3.setWeight(75);
        comboBox_emp->setFont(font3);
        comboBox_emp->setStyleSheet(QString::fromUtf8("		border: 1px solid black;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: #318aff;\n"
"font: bold, \"Arial\";;\n"
"text-align:center;\n"
""));
        excel_emp = new QPushButton(page_4);
        excel_emp->setObjectName(QString::fromUtf8("excel_emp"));
        excel_emp->setGeometry(QRect(80, 290, 141, 41));
        excel_emp->setStyleSheet(QString::fromUtf8("		border: 1px solid black;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: #318aff;\n"
"font: bold, \"Arial\";;\n"
"text-align:center;\n"
""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/excel.png"), QSize(), QIcon::Normal, QIcon::Off);
        excel_emp->setIcon(icon3);
        excel_emp->setIconSize(QSize(30, 30));
        supprimer_emp = new QPushButton(page_4);
        supprimer_emp->setObjectName(QString::fromUtf8("supprimer_emp"));
        supprimer_emp->setGeometry(QRect(80, 220, 141, 41));
        supprimer_emp->setStyleSheet(QString::fromUtf8("		border: 1px solid black;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: #318aff;\n"
"font: bold, \"Arial\";;\n"
"text-align:center;\n"
""));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        supprimer_emp->setIcon(icon4);
        supprimer_emp->setIconSize(QSize(30, 30));
        supprimer_emp->setAutoDefault(true);
        recherche_emp = new QLineEdit(page_4);
        recherche_emp->setObjectName(QString::fromUtf8("recherche_emp"));
        recherche_emp->setGeometry(QRect(660, 370, 151, 51));
        recherche_emp->setStyleSheet(QString::fromUtf8("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-background-color: rgb(187, 187, 187);\n"
"	\n"
"gridline-color: rgb(0, 0, 255);"));
        search_emp = new QPushButton(page_4);
        search_emp->setObjectName(QString::fromUtf8("search_emp"));
        search_emp->setGeometry(QRect(510, 380, 131, 31));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Arial"));
        font4.setPointSize(9);
        font4.setBold(true);
        font4.setItalic(false);
        font4.setWeight(75);
        search_emp->setFont(font4);
        search_emp->setLayoutDirection(Qt::LeftToRight);
        search_emp->setStyleSheet(QString::fromUtf8("		border: 1px solid black;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: #318aff;\n"
"font: bold, \"Arial\";;\n"
"text-align:center;\n"
""));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/magnifying-glass.png"), QSize(), QIcon::Normal, QIcon::Off);
        search_emp->setIcon(icon5);
        search_emp->setIconSize(QSize(30, 30));
        tableView_emp = new QTableView(page_4);
        tableView_emp->setObjectName(QString::fromUtf8("tableView_emp"));
        tableView_emp->setGeometry(QRect(240, 70, 601, 261));
        tableView_emp->setStyleSheet(QString::fromUtf8("gridline-color: rgb(0, 0, 255);\n"
"\n"
"selection-color: rgb(0, 0, 255);"));
        ajouter_emp = new QPushButton(page_4);
        ajouter_emp->setObjectName(QString::fromUtf8("ajouter_emp"));
        ajouter_emp->setEnabled(true);
        ajouter_emp->setGeometry(QRect(110, 110, 91, 81));
        ajouter_emp->setStyleSheet(QString::fromUtf8("gridline-color: rgb(0, 0, 255);"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/add-user.png"), QSize(), QIcon::Normal, QIcon::Off);
        ajouter_emp->setIcon(icon6);
        ajouter_emp->setIconSize(QSize(91, 81));
        ajouter_emp->setAutoDefault(false);
        label_36 = new QLabel(page_4);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setGeometry(QRect(70, 10, 801, 441));
        label_36->setPixmap(QPixmap(QString::fromUtf8(":/icons/imf.jpg")));
        label_54 = new QLabel(page_4);
        label_54->setObjectName(QString::fromUtf8("label_54"));
        label_54->setGeometry(QRect(0, -10, 951, 481));
        label_54->setPixmap(QPixmap(QString::fromUtf8(":/icons/haya.png")));
        pushButton_3 = new QPushButton(page_4);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(282, 380, 51, 31));
        pushButton_3->setStyleSheet(QString::fromUtf8("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/sort-descending.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon7);
        pushButton_3->setIconSize(QSize(81, 31));
        stackedWidget->addWidget(page_4);
        label_54->raise();
        label_36->raise();
        comboBox_emp->raise();
        excel_emp->raise();
        supprimer_emp->raise();
        recherche_emp->raise();
        search_emp->raise();
        tableView_emp->raise();
        ajouter_emp->raise();
        pushButton_3->raise();
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        email_emp_modif = new QLineEdit(page_5);
        email_emp_modif->setObjectName(QString::fromUtf8("email_emp_modif"));
        email_emp_modif->setGeometry(QRect(340, 209, 151, 41));
        email_emp_modif->setStyleSheet(QString::fromUtf8("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        label_10 = new QLabel(page_5);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(240, 180, 91, 20));
        label_11 = new QLabel(page_5);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(240, 220, 81, 21));
        nom_emp_modif = new QLineEdit(page_5);
        nom_emp_modif->setObjectName(QString::fromUtf8("nom_emp_modif"));
        nom_emp_modif->setGeometry(QRect(340, 129, 151, 41));
        nom_emp_modif->setStyleSheet(QString::fromUtf8("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        prenom_emp_modif = new QLineEdit(page_5);
        prenom_emp_modif->setObjectName(QString::fromUtf8("prenom_emp_modif"));
        prenom_emp_modif->setGeometry(QRect(340, 169, 151, 41));
        prenom_emp_modif->setStyleSheet(QString::fromUtf8("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        label_6 = new QLabel(page_5);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(240, 140, 61, 21));
        label_8 = new QLabel(page_5);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(260, 50, 351, 51));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Nueva Std"));
        font5.setPointSize(16);
        font5.setBold(true);
        font5.setWeight(75);
        label_8->setFont(font5);
        label_8->setTextFormat(Qt::RichText);
        tel_emp_modif = new QLineEdit(page_5);
        tel_emp_modif->setObjectName(QString::fromUtf8("tel_emp_modif"));
        tel_emp_modif->setGeometry(QRect(340, 249, 151, 41));
        tel_emp_modif->setStyleSheet(QString::fromUtf8("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        label_18 = new QLabel(page_5);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(240, 260, 51, 21));
        id_emp_modif = new QLineEdit(page_5);
        id_emp_modif->setObjectName(QString::fromUtf8("id_emp_modif"));
        id_emp_modif->setGeometry(QRect(640, 50, 51, 51));
        id_emp_modif->setStyleSheet(QString::fromUtf8("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        salaire_emp_modif = new QLineEdit(page_5);
        salaire_emp_modif->setObjectName(QString::fromUtf8("salaire_emp_modif"));
        salaire_emp_modif->setGeometry(QRect(340, 330, 151, 41));
        salaire_emp_modif->setStyleSheet(QString::fromUtf8("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        label_19 = new QLabel(page_5);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(240, 340, 91, 21));
        role_emp_modif = new QLineEdit(page_5);
        role_emp_modif->setObjectName(QString::fromUtf8("role_emp_modif"));
        role_emp_modif->setGeometry(QRect(340, 289, 151, 41));
        role_emp_modif->setStyleSheet(QString::fromUtf8("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        label_20 = new QLabel(page_5);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(240, 300, 61, 21));
        label_34 = new QLabel(page_5);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(190, 10, 521, 451));
        label_34->setPixmap(QPixmap(QString::fromUtf8(":/icons/imf.jpg")));
        label_35 = new QLabel(page_5);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setGeometry(QRect(0, -10, 951, 491));
        label_35->setPixmap(QPixmap(QString::fromUtf8(":/icons/haya.png")));
        modifier_emp = new QPushButton(page_5);
        modifier_emp->setObjectName(QString::fromUtf8("modifier_emp"));
        modifier_emp->setGeometry(QRect(530, 192, 111, 31));
        modifier_emp->setStyleSheet(QString::fromUtf8("		border: 1px solid black;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: #318aff;\n"
"font: bold, \"Arial\";;\n"
"text-align:center;\n"
"\n"
""));
        modifier_emp->setIcon(icon);
        modifier_emp->setIconSize(QSize(30, 30));
        Annuler_emp = new QPushButton(page_5);
        Annuler_emp->setObjectName(QString::fromUtf8("Annuler_emp"));
        Annuler_emp->setGeometry(QRect(530, 272, 111, 31));
        Annuler_emp->setStyleSheet(QString::fromUtf8("		border: 1px solid black;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: #318aff;\n"
"font: bold, \"Arial\";;\n"
"text-align:center;\n"
""));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/back-arrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        Annuler_emp->setIcon(icon8);
        Annuler_emp->setIconSize(QSize(30, 30));
        stackedWidget->addWidget(page_5);
        label_35->raise();
        label_34->raise();
        email_emp_modif->raise();
        label_10->raise();
        label_11->raise();
        nom_emp_modif->raise();
        prenom_emp_modif->raise();
        label_6->raise();
        label_8->raise();
        tel_emp_modif->raise();
        label_18->raise();
        id_emp_modif->raise();
        salaire_emp_modif->raise();
        label_19->raise();
        role_emp_modif->raise();
        label_20->raise();
        modifier_emp->raise();
        Annuler_emp->raise();
        stackedWidget_ajout->addWidget(page_2);
        arduino->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        stackedWidget_2 = new QStackedWidget(tab_2);
        stackedWidget_2->setObjectName(QString::fromUtf8("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(0, 0, 951, 541));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        email_four = new QLineEdit(page_3);
        email_four->setObjectName(QString::fromUtf8("email_four"));
        email_four->setGeometry(QRect(520, 220, 151, 41));
        email_four->setStyleSheet(QString::fromUtf8("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        text_tel_four = new QLabel(page_3);
        text_tel_four->setObjectName(QString::fromUtf8("text_tel_four"));
        text_tel_four->setGeometry(QRect(450, 280, 61, 21));
        text_tel_four->setFont(font1);
        text_email_four = new QLabel(page_3);
        text_email_four->setObjectName(QString::fromUtf8("text_email_four"));
        text_email_four->setGeometry(QRect(440, 230, 71, 21));
        text_email_four->setFont(font1);
        text_prenom_four = new QLabel(page_3);
        text_prenom_four->setObjectName(QString::fromUtf8("text_prenom_four"));
        text_prenom_four->setGeometry(QRect(420, 180, 91, 21));
        text_prenom_four->setFont(font1);
        nom_four = new QLineEdit(page_3);
        nom_four->setObjectName(QString::fromUtf8("nom_four"));
        nom_four->setGeometry(QRect(520, 120, 151, 41));
        nom_four->setStyleSheet(QString::fromUtf8("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        ajouter_four = new QPushButton(page_3);
        ajouter_four->setObjectName(QString::fromUtf8("ajouter_four"));
        ajouter_four->setGeometry(QRect(540, 382, 121, 31));
        ajouter_four->setStyleSheet(QString::fromUtf8("		border: 1px solid black;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: #318aff;\n"
"font: bold, \"Arial\";;\n"
"text-align:center;\n"
""));
        ajouter_four->setIcon(icon);
        ajouter_four->setIconSize(QSize(30, 30));
        prenom_four = new QLineEdit(page_3);
        prenom_four->setObjectName(QString::fromUtf8("prenom_four"));
        prenom_four->setGeometry(QRect(520, 170, 151, 41));
        prenom_four->setStyleSheet(QString::fromUtf8("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        tel_four = new QLineEdit(page_3);
        tel_four->setObjectName(QString::fromUtf8("tel_four"));
        tel_four->setGeometry(QRect(520, 270, 151, 41));
        tel_four->setStyleSheet(QString::fromUtf8("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        text_nom_four = new QLabel(page_3);
        text_nom_four->setObjectName(QString::fromUtf8("text_nom_four"));
        text_nom_four->setGeometry(QRect(450, 130, 61, 21));
        text_nom_four->setFont(font1);
        id_four = new QLineEdit(page_3);
        id_four->setObjectName(QString::fromUtf8("id_four"));
        id_four->setGeometry(QRect(520, 70, 151, 41));
        id_four->setStyleSheet(QString::fromUtf8("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        id_four->setEchoMode(QLineEdit::Password);
        label_29 = new QLabel(page_3);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(450, 80, 51, 21));
        label_29->setFont(font1);
        four2 = new QPushButton(page_3);
        four2->setObjectName(QString::fromUtf8("four2"));
        four2->setGeometry(QRect(270, 160, 131, 151));
        four2->setIcon(icon1);
        four2->setIconSize(QSize(160, 131));
        four2->setAutoDefault(false);
        produit_four = new QComboBox(page_3);
        produit_four->setObjectName(QString::fromUtf8("produit_four"));
        produit_four->setGeometry(QRect(520, 330, 151, 22));
        produit_four->setStyleSheet(QString::fromUtf8("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        text_produit_four = new QLabel(page_3);
        text_produit_four->setObjectName(QString::fromUtf8("text_produit_four"));
        text_produit_four->setGeometry(QRect(420, 330, 91, 21));
        text_produit_four->setFont(font1);
        label_22 = new QLabel(page_3);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(0, 0, 951, 491));
        label_22->setPixmap(QPixmap(QString::fromUtf8(":/icons/haya.png")));
        label_23 = new QLabel(page_3);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(240, 10, 471, 451));
        label_23->setPixmap(QPixmap(QString::fromUtf8(":/icons/imf.jpg")));
        stackedWidget_2->addWidget(page_3);
        label_22->raise();
        label_23->raise();
        email_four->raise();
        text_tel_four->raise();
        text_email_four->raise();
        text_prenom_four->raise();
        nom_four->raise();
        ajouter_four->raise();
        prenom_four->raise();
        tel_four->raise();
        text_nom_four->raise();
        id_four->raise();
        label_29->raise();
        four2->raise();
        produit_four->raise();
        text_produit_four->raise();
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        comboBox_four = new QComboBox(page_6);
        comboBox_four->addItem(QString());
        comboBox_four->addItem(QString());
        comboBox_four->addItem(QString());
        comboBox_four->setObjectName(QString::fromUtf8("comboBox_four"));
        comboBox_four->setGeometry(QRect(350, 390, 111, 31));
        comboBox_four->setFont(font3);
        comboBox_four->setStyleSheet(QString::fromUtf8("		border: 1px solid black;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: #318aff;\n"
"font: bold, \"Arial\";;\n"
"text-align:center;\n"
"\n"
""));
        search_four = new QPushButton(page_6);
        search_four->setObjectName(QString::fromUtf8("search_four"));
        search_four->setGeometry(QRect(530, 390, 131, 31));
        search_four->setFont(font4);
        search_four->setStyleSheet(QString::fromUtf8("		border: 1px solid black;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: #318aff;\n"
"font: bold, \"Arial\";;\n"
"text-align:center;\n"
""));
        search_four->setIcon(icon5);
        search_four->setIconSize(QSize(30, 30));
        supprimer_four = new QPushButton(page_6);
        supprimer_four->setObjectName(QString::fromUtf8("supprimer_four"));
        supprimer_four->setGeometry(QRect(80, 220, 141, 41));
        supprimer_four->setStyleSheet(QString::fromUtf8("		border: 1px solid black;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: #318aff;\n"
"font: bold, \"Arial\";;\n"
"text-align:center;\n"
"\n"
""));
        supprimer_four->setIcon(icon4);
        supprimer_four->setIconSize(QSize(30, 30));
        recherche_four = new QLineEdit(page_6);
        recherche_four->setObjectName(QString::fromUtf8("recherche_four"));
        recherche_four->setGeometry(QRect(670, 380, 151, 51));
        recherche_four->setStyleSheet(QString::fromUtf8("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-background-color: rgb(187, 187, 187);\n"
"	selection-color: rgb(60, 63, 65);"));
        tableView_four = new QTableView(page_6);
        tableView_four->setObjectName(QString::fromUtf8("tableView_four"));
        tableView_four->setGeometry(QRect(240, 80, 601, 261));
        tableView_four->setStyleSheet(QString::fromUtf8(""));
        four_ajout = new QPushButton(page_6);
        four_ajout->setObjectName(QString::fromUtf8("four_ajout"));
        four_ajout->setGeometry(QRect(110, 120, 91, 81));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons/supplier.png"), QSize(), QIcon::Normal, QIcon::Off);
        four_ajout->setIcon(icon9);
        four_ajout->setIconSize(QSize(91, 81));
        four_ajout->setAutoDefault(false);
        actualiser = new QPushButton(page_6);
        actualiser->setObjectName(QString::fromUtf8("actualiser"));
        actualiser->setGeometry(QRect(80, 290, 141, 41));
        actualiser->setStyleSheet(QString::fromUtf8("		border: 1px solid black;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: #318aff;\n"
"font: bold, \"Arial\";;\n"
"text-align:center;\n"
"\n"
""));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8("icons/refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        actualiser->setIcon(icon10);
        actualiser->setIconSize(QSize(30, 30));
        label_52 = new QLabel(page_6);
        label_52->setObjectName(QString::fromUtf8("label_52"));
        label_52->setGeometry(QRect(0, 0, 951, 481));
        label_52->setPixmap(QPixmap(QString::fromUtf8(":/icons/haya.png")));
        label_24 = new QLabel(page_6);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(70, 20, 801, 451));
        label_24->setPixmap(QPixmap(QString::fromUtf8(":/icons/imf.jpg")));
        pushButton = new QPushButton(page_6);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(290, 390, 51, 31));
        pushButton->setStyleSheet(QString::fromUtf8("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        pushButton->setIcon(icon7);
        pushButton->setIconSize(QSize(81, 31));
        stackedWidget_2->addWidget(page_6);
        label_52->raise();
        label_24->raise();
        comboBox_four->raise();
        search_four->raise();
        supprimer_four->raise();
        recherche_four->raise();
        tableView_four->raise();
        four_ajout->raise();
        actualiser->raise();
        pushButton->raise();
        page_7 = new QWidget();
        page_7->setObjectName(QString::fromUtf8("page_7"));
        label_25 = new QLabel(page_7);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(290, 50, 361, 61));
        label_25->setFont(font5);
        label_25->setTextFormat(Qt::RichText);
        label_26 = new QLabel(page_7);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(300, 150, 71, 21));
        nom_four_modif = new QLineEdit(page_7);
        nom_four_modif->setObjectName(QString::fromUtf8("nom_four_modif"));
        nom_four_modif->setGeometry(QRect(400, 140, 151, 41));
        nom_four_modif->setStyleSheet(QString::fromUtf8("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        tel_four_modif = new QLineEdit(page_7);
        tel_four_modif->setObjectName(QString::fromUtf8("tel_four_modif"));
        tel_four_modif->setGeometry(QRect(400, 350, 151, 41));
        tel_four_modif->setStyleSheet(QString::fromUtf8("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        label_28 = new QLabel(page_7);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(290, 360, 51, 21));
        modifier_four = new QPushButton(page_7);
        modifier_four->setObjectName(QString::fromUtf8("modifier_four"));
        modifier_four->setGeometry(QRect(610, 180, 111, 23));
        modifier_four->setStyleSheet(QString::fromUtf8("		border: 1px solid black;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: #318aff;\n"
"font: bold, \"Arial\";;\n"
"text-align:center;\n"
""));
        modifier_four->setIcon(icon);
        modifier_four->setIconSize(QSize(30, 30));
        Annuler_four_modif = new QPushButton(page_7);
        Annuler_four_modif->setObjectName(QString::fromUtf8("Annuler_four_modif"));
        Annuler_four_modif->setGeometry(QRect(610, 340, 111, 23));
        Annuler_four_modif->setStyleSheet(QString::fromUtf8("		border: 1px solid black;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: #318aff;\n"
"font: bold, \"Arial\";;\n"
"text-align:center;\n"
"\n"
""));
        Annuler_four_modif->setIcon(icon8);
        Annuler_four_modif->setIconSize(QSize(30, 30));
        id_four_modif = new QLineEdit(page_7);
        id_four_modif->setObjectName(QString::fromUtf8("id_four_modif"));
        id_four_modif->setGeometry(QRect(650, 60, 41, 41));
        id_four_modif->setStyleSheet(QString::fromUtf8("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        prenom_four_modif = new QLineEdit(page_7);
        prenom_four_modif->setObjectName(QString::fromUtf8("prenom_four_modif"));
        prenom_four_modif->setGeometry(QRect(400, 210, 151, 41));
        prenom_four_modif->setStyleSheet(QString::fromUtf8("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        email_four_modif = new QLineEdit(page_7);
        email_four_modif->setObjectName(QString::fromUtf8("email_four_modif"));
        email_four_modif->setGeometry(QRect(400, 280, 151, 41));
        email_four_modif->setStyleSheet(QString::fromUtf8("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        label_32 = new QLabel(page_7);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(290, 280, 71, 31));
        label_33 = new QLabel(page_7);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(290, 220, 91, 21));
        label_27 = new QLabel(page_7);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(250, 10, 501, 451));
        label_27->setPixmap(QPixmap(QString::fromUtf8(":/icons/imf.jpg")));
        label_2 = new QLabel(page_7);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 5, 951, 471));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/icons/haya.png")));
        stackedWidget_2->addWidget(page_7);
        label_2->raise();
        label_27->raise();
        label_25->raise();
        label_26->raise();
        nom_four_modif->raise();
        tel_four_modif->raise();
        label_28->raise();
        modifier_four->raise();
        Annuler_four_modif->raise();
        id_four_modif->raise();
        prenom_four_modif->raise();
        email_four_modif->raise();
        label_32->raise();
        label_33->raise();
        arduino->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        TextEdit_text = new QPlainTextEdit(tab_4);
        TextEdit_text->setObjectName(QString::fromUtf8("TextEdit_text"));
        TextEdit_text->setGeometry(QRect(80, 30, 581, 421));
        label_13 = new QLabel(tab_4);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(60, 10, 801, 461));
        label_13->setPixmap(QPixmap(QString::fromUtf8(":/icons/imf.jpg")));
        label_15 = new QLabel(tab_4);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(60, 5, 821, 431));
        label_16 = new QLabel(tab_4);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(0, -5, 951, 491));
        label_16->setPixmap(QPixmap(QString::fromUtf8(":/icons/haya.png")));
        layoutWidget_2 = new QWidget(tab_4);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(680, 180, 171, 161));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_lire = new QPushButton(layoutWidget_2);
        pushButton_lire->setObjectName(QString::fromUtf8("pushButton_lire"));
        pushButton_lire->setLayoutDirection(Qt::LeftToRight);
        pushButton_lire->setAutoFillBackground(false);
        pushButton_lire->setStyleSheet(QString::fromUtf8("		border: 1px solid black;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: #318aff;\n"
"font: bold, \"Arial\";;\n"
"text-align:center;\n"
""));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icons/binoculars.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_lire->setIcon(icon11);
        pushButton_lire->setIconSize(QSize(50, 50));

        verticalLayout_2->addWidget(pushButton_lire);

        pushButton_modifier = new QPushButton(layoutWidget_2);
        pushButton_modifier->setObjectName(QString::fromUtf8("pushButton_modifier"));
        pushButton_modifier->setStyleSheet(QString::fromUtf8("		border: 1px solid black;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: #318aff;\n"
"font: bold, \"Arial\";;\n"
"text-align:center;\n"
"		border: 1px solid black;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: #318aff;\n"
"font: bold, \"Arial\";;\n"
"text-align:center;\n"
""));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/icons/letter.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_modifier->setIcon(icon12);
        pushButton_modifier->setIconSize(QSize(50, 50));

        verticalLayout_2->addWidget(pushButton_modifier);

        pushButton_4 = new QPushButton(tab_4);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(682, 117, 171, 51));
        pushButton_4->setStyleSheet(QString::fromUtf8("		border: 1px solid black;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: #318aff;\n"
"font: bold, \"Arial\";;\n"
"text-align:center;\n"
""));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/icons/camera.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon13);
        pushButton_4->setIconSize(QSize(50, 50));
        arduino->addTab(tab_4, QString());
        label_16->raise();
        label_15->raise();
        label_13->raise();
        TextEdit_text->raise();
        layoutWidget_2->raise();
        pushButton_4->raise();
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        temp_label_2 = new QLabel(tab_3);
        temp_label_2->setObjectName(QString::fromUtf8("temp_label_2"));
        temp_label_2->setGeometry(QRect(170, 90, 201, 89));
        temp_label_3 = new QLabel(tab_3);
        temp_label_3->setObjectName(QString::fromUtf8("temp_label_3"));
        temp_label_3->setGeometry(QRect(170, 200, 201, 89));
        temp_lcdNumber = new QLCDNumber(tab_3);
        temp_lcdNumber->setObjectName(QString::fromUtf8("temp_lcdNumber"));
        temp_lcdNumber->setGeometry(QRect(520, 310, 239, 89));
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
        temp_label = new QLabel(tab_3);
        temp_label->setObjectName(QString::fromUtf8("temp_label"));
        temp_label->setGeometry(QRect(170, 310, 321, 89));
        buttonoff = new QPushButton(tab_3);
        buttonoff->setObjectName(QString::fromUtf8("buttonoff"));
        buttonoff->setGeometry(QRect(620, 120, 75, 23));
        buttonoff->setStyleSheet(QString::fromUtf8("		border: 1px solid black;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: #318aff;\n"
"font: bold, \"Arial\";;\n"
"text-align:center;\n"
""));
        buttonon = new QPushButton(tab_3);
        buttonon->setObjectName(QString::fromUtf8("buttonon"));
        buttonon->setGeometry(QRect(460, 120, 75, 23));
        buttonon->setStyleSheet(QString::fromUtf8("		border: 1px solid black;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: #318aff;\n"
"font: bold, \"Arial\";;\n"
"text-align:center;\n"
""));
        label_etat = new QLabel(tab_3);
        label_etat->setObjectName(QString::fromUtf8("label_etat"));
        label_etat->setGeometry(QRect(560, 220, 81, 31));
        label_etat->setFont(font);
        label_etat->setStyleSheet(QString::fromUtf8("border: 1px solid black;\\nbackground-color: rgb(32, 121, 255);\\ncolor: rgb(146, 174, 250);\\nborder-radius: 10px;\\npadding: 0 8px;\\n\\nfont: bold, \"Arial\";;\\ntext-align:center;"));
        label_alert_2 = new QLabel(tab_3);
        label_alert_2->setObjectName(QString::fromUtf8("label_alert_2"));
        label_alert_2->setGeometry(QRect(80, 410, 571, 91));
        QFont font6;
        font6.setPointSize(26);
        font6.setBold(true);
        font6.setWeight(75);
        label_alert_2->setFont(font6);
        label_alert_2->setStyleSheet(QString::fromUtf8("color:RED;"));
        layoutWidget = new QWidget(tab_3);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(348, 30, 297, 35));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(tab_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(348, 30, 160, 33));
        QFont font7;
        font7.setPointSize(14);
        font7.setBold(true);
        font7.setWeight(75);
        label_12->setFont(font7);
        lbl_time = new QLabel(tab_3);
        lbl_time->setObjectName(QString::fromUtf8("lbl_time"));
        lbl_time->setGeometry(QRect(520, 30, 123, 33));
        QFont font8;
        font8.setPointSize(16);
        font8.setBold(true);
        font8.setWeight(75);
        lbl_time->setFont(font8);
        label_53 = new QLabel(tab_3);
        label_53->setObjectName(QString::fromUtf8("label_53"));
        label_53->setGeometry(QRect(0, 0, 951, 481));
        label_53->setPixmap(QPixmap(QString::fromUtf8(":/icons/haya.png")));
        label_21 = new QLabel(tab_3);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(160, 10, 631, 451));
        label_21->setPixmap(QPixmap(QString::fromUtf8(":/icons/imf.jpg")));
        pushButton_2 = new QPushButton(tab_3);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(280, 20, 61, 61));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/icons/clock.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon14);
        pushButton_2->setIconSize(QSize(50, 50));
        arduino->addTab(tab_3, QString());
        label_53->raise();
        label_21->raise();
        temp_label_2->raise();
        temp_label_3->raise();
        temp_lcdNumber->raise();
        temp_label->raise();
        buttonoff->raise();
        buttonon->raise();
        label_etat->raise();
        label_alert_2->raise();
        layoutWidget->raise();
        label_12->raise();
        lbl_time->raise();
        pushButton_2->raise();
        label_alert = new QLabel(empfou);
        label_alert->setObjectName(QString::fromUtf8("label_alert"));
        label_alert->setGeometry(QRect(659, 579, 571, 91));
        label_alert->setFont(font6);
        label_alert->setStyleSheet(QString::fromUtf8("color:RED;"));
        QWidget::setTabOrder(id_emp, nom_emp);
        QWidget::setTabOrder(nom_emp, prenom_emp);
        QWidget::setTabOrder(prenom_emp, email_emp);
        QWidget::setTabOrder(email_emp, tel_emp);
        QWidget::setTabOrder(tel_emp, role_emp);
        QWidget::setTabOrder(role_emp, salaire_emp);
        QWidget::setTabOrder(salaire_emp, push_photo_emp);
        QWidget::setTabOrder(push_photo_emp, emp);
        QWidget::setTabOrder(emp, Valider_emp);
        QWidget::setTabOrder(Valider_emp, supprimer_four);
        QWidget::setTabOrder(supprimer_four, recherche_four);
        QWidget::setTabOrder(recherche_four, four_ajout);
        QWidget::setTabOrder(four_ajout, comboBox_four);
        QWidget::setTabOrder(comboBox_four, nom_four_modif);
        QWidget::setTabOrder(nom_four_modif, tableView_four);
        QWidget::setTabOrder(tableView_four, tel_four_modif);
        QWidget::setTabOrder(tel_four_modif, modifier_four);
        QWidget::setTabOrder(modifier_four, Annuler_four_modif);
        QWidget::setTabOrder(Annuler_four_modif, id_four_modif);
        QWidget::setTabOrder(id_four_modif, prenom_four_modif);
        QWidget::setTabOrder(prenom_four_modif, email_four_modif);
        QWidget::setTabOrder(email_four_modif, email_emp_modif);
        QWidget::setTabOrder(email_emp_modif, role_emp_modif);
        QWidget::setTabOrder(role_emp_modif, prenom_emp_modif);
        QWidget::setTabOrder(prenom_emp_modif, tel_emp_modif);
        QWidget::setTabOrder(tel_emp_modif, search_four);
        QWidget::setTabOrder(search_four, nom_emp_modif);
        QWidget::setTabOrder(nom_emp_modif, modifier_emp);
        QWidget::setTabOrder(modifier_emp, Annuler_emp);
        QWidget::setTabOrder(Annuler_emp, salaire_emp_modif);
        QWidget::setTabOrder(salaire_emp_modif, id_emp_modif);
        QWidget::setTabOrder(id_emp_modif, comboBox_emp);
        QWidget::setTabOrder(comboBox_emp, excel_emp);
        QWidget::setTabOrder(excel_emp, supprimer_emp);
        QWidget::setTabOrder(supprimer_emp, recherche_emp);
        QWidget::setTabOrder(recherche_emp, search_emp);
        QWidget::setTabOrder(search_emp, tableView_emp);
        QWidget::setTabOrder(tableView_emp, ajouter_emp);
        QWidget::setTabOrder(ajouter_emp, pushButton_3);
        QWidget::setTabOrder(pushButton_3, email_four);
        QWidget::setTabOrder(email_four, nom_four);
        QWidget::setTabOrder(nom_four, prenom_four);
        QWidget::setTabOrder(prenom_four, tel_four);
        QWidget::setTabOrder(tel_four, id_four);
        QWidget::setTabOrder(id_four, ajouter_four);
        QWidget::setTabOrder(ajouter_four, produit_four);
        QWidget::setTabOrder(produit_four, actualiser);
        QWidget::setTabOrder(actualiser, pushButton);
        QWidget::setTabOrder(pushButton, TextEdit_text);
        QWidget::setTabOrder(TextEdit_text, pushButton_lire);
        QWidget::setTabOrder(pushButton_lire, pushButton_modifier);
        QWidget::setTabOrder(pushButton_modifier, buttonoff);
        QWidget::setTabOrder(buttonoff, buttonon);
        QWidget::setTabOrder(buttonon, pushButton_2);
        QWidget::setTabOrder(pushButton_2, four2);
        QWidget::setTabOrder(four2, arduino);

        retranslateUi(empfou);

        arduino->setCurrentIndex(2);
        stackedWidget_ajout->setCurrentIndex(0);
        stackedWidget->setCurrentIndex(0);
        stackedWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(empfou);
    } // setupUi

    void retranslateUi(QDialog *empfou)
    {
        empfou->setWindowTitle(QApplication::translate("empfou", "Dialog", nullptr));
        text_nb->setText(QApplication::translate("empfou", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; font-style:italic;\">Salaire:</span></p></body></html>", nullptr));
        text_prix->setText(QApplication::translate("empfou", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; font-style:italic;\">Tel:</span></p></body></html>", nullptr));
        label_17->setText(QApplication::translate("empfou", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; font-style:italic;\">ID:</span></p></body></html>", nullptr));
        text_lieu->setText(QApplication::translate("empfou", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; font-style:italic;\">Prenom:</span></p></body></html>", nullptr));
        text_date->setText(QApplication::translate("empfou", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; font-style:italic;\">Email:</span></p></body></html>", nullptr));
        Valider_emp->setText(QApplication::translate("empfou", "Valider", nullptr));
        text_nom->setText(QApplication::translate("empfou", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; font-style:italic;\">Nom:</span></p></body></html>", nullptr));
        emp->setText(QString());
        text_nb_2->setText(QApplication::translate("empfou", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; font-style:italic;\">Role:</span></p></body></html>", nullptr));
        image->setText(QString());
        push_photo_emp->setText(QApplication::translate("empfou", "Photo", nullptr));
        label_30->setText(QString());
        label_31->setText(QString());
        comboBox_emp->setItemText(0, QApplication::translate("empfou", "NOM", nullptr));
        comboBox_emp->setItemText(1, QApplication::translate("empfou", "PRENOM", nullptr));
        comboBox_emp->setItemText(2, QApplication::translate("empfou", "SALAIRE", nullptr));

        excel_emp->setText(QApplication::translate("empfou", "Generer EXCEL", nullptr));
        supprimer_emp->setText(QApplication::translate("empfou", "Supprimer", nullptr));
        recherche_emp->setPlaceholderText(QApplication::translate("empfou", "rechercher", nullptr));
        search_emp->setText(QApplication::translate("empfou", "Rechercher", nullptr));
        ajouter_emp->setText(QString());
        label_36->setText(QString());
        label_54->setText(QString());
        pushButton_3->setText(QString());
        label_10->setText(QApplication::translate("empfou", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; font-style:italic;\">Prenom:</span></p></body></html>", nullptr));
        label_11->setText(QApplication::translate("empfou", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; font-style:italic;\">Email:</span></p></body></html>", nullptr));
        label_6->setText(QApplication::translate("empfou", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; font-style:italic;\">Nom:</span></p></body></html>", nullptr));
        label_8->setText(QApplication::translate("empfou", "<html><head/><body><p><span style=\" font-size:10pt; font-style:italic;\">modification de l' EMPLOYE dont ID est : </span></p></body></html>", nullptr));
        label_18->setText(QApplication::translate("empfou", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; font-style:italic;\">Tel:</span></p></body></html>", nullptr));
        label_19->setText(QApplication::translate("empfou", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; font-style:italic;\">Salaire:</span></p></body></html>", nullptr));
        label_20->setText(QApplication::translate("empfou", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; font-style:italic;\">Role:</span></p></body></html>", nullptr));
        label_34->setText(QString());
        label_35->setText(QString());
        modifier_emp->setText(QApplication::translate("empfou", "modifier", nullptr));
        Annuler_emp->setText(QApplication::translate("empfou", "Retour", nullptr));
        arduino->setTabText(arduino->indexOf(tab), QApplication::translate("empfou", "Employes", nullptr));
        text_tel_four->setText(QApplication::translate("empfou", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; font-style:italic;\">Tel:</span></p><p><span style=\" font-size:12pt; font-weight:600; font-style:italic;\"><br/></span></p></body></html>", nullptr));
        text_email_four->setText(QApplication::translate("empfou", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; font-style:italic;\">Email:</span></p></body></html>", nullptr));
        text_prenom_four->setText(QApplication::translate("empfou", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; font-style:italic;\">Prenom:</span></p></body></html>", nullptr));
        ajouter_four->setText(QApplication::translate("empfou", "Valider", nullptr));
        text_nom_four->setText(QApplication::translate("empfou", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; font-style:italic;\">Nom:</span></p></body></html>", nullptr));
        label_29->setText(QApplication::translate("empfou", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; font-style:italic;\">ID:</span></p></body></html>", nullptr));
        four2->setText(QString());
        text_produit_four->setText(QApplication::translate("empfou", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; font-style:italic;\">Produit:</span></p></body></html>", nullptr));
        label_22->setText(QString());
        label_23->setText(QString());
        comboBox_four->setItemText(0, QApplication::translate("empfou", "NOM", nullptr));
        comboBox_four->setItemText(1, QApplication::translate("empfou", "PRENOM", nullptr));
        comboBox_four->setItemText(2, QApplication::translate("empfou", "TEL", nullptr));

        search_four->setText(QApplication::translate("empfou", "Rechercher", nullptr));
        supprimer_four->setText(QApplication::translate("empfou", "Supprimer", nullptr));
        recherche_four->setPlaceholderText(QApplication::translate("empfou", "rechercher", nullptr));
        four_ajout->setText(QString());
        actualiser->setText(QApplication::translate("empfou", "actualiser", nullptr));
        label_52->setText(QString());
        label_24->setText(QString());
        pushButton->setText(QString());
        label_25->setText(QApplication::translate("empfou", "<html><head/><body><p><span style=\" font-size:10pt; font-style:italic;\">modification de FOURNISSEUR dont ID est : </span></p></body></html>", nullptr));
        label_26->setText(QApplication::translate("empfou", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; font-style:italic;\">Nom:</span></p><p><br/></p></body></html>", nullptr));
        label_28->setText(QApplication::translate("empfou", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; font-style:italic;\">Tel:</span></p></body></html>", nullptr));
        modifier_four->setText(QApplication::translate("empfou", "modifier", nullptr));
        Annuler_four_modif->setText(QApplication::translate("empfou", "Retour", nullptr));
        label_32->setText(QApplication::translate("empfou", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; font-style:italic;\">Email:</span></p></body></html>", nullptr));
        label_33->setText(QApplication::translate("empfou", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; font-style:italic;\">Prenom:</span></p><p><span style=\" font-size:12pt;\"><br/></span></p></body></html>", nullptr));
        label_27->setText(QString());
        label_2->setText(QString());
        arduino->setTabText(arduino->indexOf(tab_2), QApplication::translate("empfou", "Fournisseurs", nullptr));
        label_13->setText(QString());
        label_15->setText(QString());
        label_16->setText(QString());
        pushButton_lire->setText(QApplication::translate("empfou", "Lire", nullptr));
        pushButton_modifier->setText(QApplication::translate("empfou", "Ecrire", nullptr));
        pushButton_4->setText(QApplication::translate("empfou", "Ouvrir Camera", nullptr));
        arduino->setTabText(arduino->indexOf(tab_4), QApplication::translate("empfou", "File", nullptr));
        temp_label_2->setText(QApplication::translate("empfou", "<html><head/><body><p align=\"center\"><span style=\" font-size:22pt; font-weight:600; font-style:italic; color:#000000;\">Son :</span></p></body></html>", nullptr));
        temp_label_3->setText(QApplication::translate("empfou", "<html><head/><body><p align=\"center\"><span style=\" font-size:22pt; font-weight:600; font-style:italic; color:#000000;\">Etat :</span></p></body></html>", nullptr));
        temp_label->setText(QApplication::translate("empfou", "<html><head/><body><p><span style=\" font-size:22pt; font-weight:600; font-style:italic; color:#ff0000;\">Temperature \302\260C:</span></p></body></html>", nullptr));
        buttonoff->setText(QApplication::translate("empfou", "OFF", nullptr));
        buttonon->setText(QApplication::translate("empfou", "ON", nullptr));
        label_etat->setText(QApplication::translate("empfou", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600; font-style:italic;\">OFF</span></p></body></html>", nullptr));
        label_alert_2->setText(QApplication::translate("empfou", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        label_12->setText(QApplication::translate("empfou", "Current Time:", nullptr));
        lbl_time->setText(QApplication::translate("empfou", "00:00:00", nullptr));
        label_53->setText(QString());
        label_21->setText(QString());
        pushButton_2->setText(QString());
        arduino->setTabText(arduino->indexOf(tab_3), QApplication::translate("empfou", "Temperature", nullptr));
        label_alert->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class empfou: public Ui_empfou {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPFOU_H
