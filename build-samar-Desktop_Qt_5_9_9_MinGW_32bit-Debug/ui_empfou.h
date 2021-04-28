/********************************************************************************
** Form generated from reading UI file 'empfou.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPFOU_H
#define UI_EMPFOU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_empfou
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QStackedWidget *stackedWidget_ajout;
    QWidget *page;
    QLabel *text_nb;
    QLabel *text_prix;
    QLabel *label_17;
    QLineEdit *lieu;
    QLineEdit *prix;
    QLabel *text_lieu;
    QLineEdit *nom;
    QLineEdit *date;
    QLabel *text_date;
    QPushButton *Valider;
    QLabel *label_7;
    QLineEdit *id;
    QLabel *text_nom;
    QLineEdit *nb;
    QPushButton *event;
    QLabel *label_4;
    QLineEdit *role;
    QLabel *text_nb_2;
    QWidget *page_2;
    QStackedWidget *stackedWidget;
    QWidget *page_4;
    QComboBox *comboBox;
    QLabel *label_3;
    QPushButton *excel;
    QPushButton *supprimer;
    QLineEdit *recherche;
    QPushButton *search;
    QLabel *label;
    QTableView *tableView;
    QPushButton *annuler;
    QLabel *label_5;
    QWidget *page_5;
    QLineEdit *date_modif;
    QLabel *label_10;
    QLabel *label_11;
    QLineEdit *nom_modif;
    QPushButton *modifier;
    QLineEdit *lieu_modif;
    QLabel *label_6;
    QPushButton *Annuler;
    QLabel *label_8;
    QLineEdit *prix_modif;
    QLabel *label_18;
    QLineEdit *id_2;
    QLineEdit *nb_modif;
    QLabel *label_19;
    QLineEdit *email_modif_2;
    QLabel *label_20;
    QWidget *tab_2;
    QStackedWidget *stackedWidget_2;
    QWidget *page_3;
    QLineEdit *email;
    QLabel *text_tel;
    QLabel *text_email;
    QLabel *text_type;
    QLineEdit *nom_sponsor;
    QPushButton *ajouter;
    QLineEdit *type;
    QLineEdit *tel;
    QLabel *label_9;
    QLabel *text_noms;
    QLineEdit *id_sponsor;
    QLabel *label_29;
    QPushButton *sponsor2;
    QLabel *label_30;
    QWidget *page_6;
    QLabel *label_2;
    QLabel *label_24;
    QComboBox *comboBox_2;
    QPushButton *search_2;
    QPushButton *supprimer_2;
    QLineEdit *recherche_2;
    QTableView *tableView_2;
    QPushButton *sponsor_ajout;
    QLabel *label_31;
    QWidget *page_7;
    QLabel *label_25;
    QLabel *label_26;
    QLineEdit *nom_modif_2;
    QLineEdit *tel_modif;
    QLabel *label_28;
    QPushButton *modifier_2;
    QPushButton *Annuler_2;
    QLineEdit *id_3;
    QLineEdit *type_modif;
    QLineEdit *email_modif;
    QLabel *label_32;
    QLabel *label_33;

    void setupUi(QDialog *empfou)
    {
        if (empfou->objectName().isEmpty())
            empfou->setObjectName(QStringLiteral("empfou"));
        empfou->resize(1303, 589);
        empfou->setStyleSheet(QStringLiteral(""));
        empfou->setSizeGripEnabled(false);
        tabWidget = new QTabWidget(empfou);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1311, 591));
        QFont font;
        font.setPointSize(12);
        tabWidget->setFont(font);
        tabWidget->setStyleSheet(QLatin1String("background-color: rgb(110, 165, 165);\n"
"\n"
"background-image: url(:/icons/35.jpg);"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tab->setStyleSheet(QStringLiteral("background-color: rgb(53, 159, 159);"));
        stackedWidget_ajout = new QStackedWidget(tab);
        stackedWidget_ajout->setObjectName(QStringLiteral("stackedWidget_ajout"));
        stackedWidget_ajout->setGeometry(QRect(50, 0, 1221, 621));
        stackedWidget_ajout->setStyleSheet(QStringLiteral("gridline-color: rgb(0, 0, 0);"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        text_nb = new QLabel(page);
        text_nb->setObjectName(QStringLiteral("text_nb"));
        text_nb->setGeometry(QRect(330, 430, 61, 21));
        QFont font1;
        font1.setPointSize(10);
        text_nb->setFont(font1);
        text_prix = new QLabel(page);
        text_prix->setObjectName(QStringLiteral("text_prix"));
        text_prix->setGeometry(QRect(330, 330, 61, 21));
        text_prix->setFont(font1);
        label_17 = new QLabel(page);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(330, 120, 21, 21));
        label_17->setFont(font1);
        lieu = new QLineEdit(page);
        lieu->setObjectName(QStringLiteral("lieu"));
        lieu->setGeometry(QRect(420, 220, 151, 31));
        lieu->setStyleSheet(QLatin1String("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        prix = new QLineEdit(page);
        prix->setObjectName(QStringLiteral("prix"));
        prix->setGeometry(QRect(420, 320, 151, 31));
        prix->setStyleSheet(QLatin1String("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        text_lieu = new QLabel(page);
        text_lieu->setObjectName(QStringLiteral("text_lieu"));
        text_lieu->setGeometry(QRect(330, 230, 61, 21));
        text_lieu->setFont(font1);
        nom = new QLineEdit(page);
        nom->setObjectName(QStringLiteral("nom"));
        nom->setGeometry(QRect(420, 170, 151, 31));
        nom->setStyleSheet(QLatin1String("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        date = new QLineEdit(page);
        date->setObjectName(QStringLiteral("date"));
        date->setGeometry(QRect(420, 270, 151, 31));
        date->setStyleSheet(QLatin1String("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        text_date = new QLabel(page);
        text_date->setObjectName(QStringLiteral("text_date"));
        text_date->setGeometry(QRect(330, 280, 61, 21));
        text_date->setFont(font1);
        Valider = new QPushButton(page);
        Valider->setObjectName(QStringLiteral("Valider"));
        Valider->setGeometry(QRect(440, 480, 111, 23));
        Valider->setStyleSheet(QLatin1String("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/icons8_checkmark_96px.png"), QSize(), QIcon::Normal, QIcon::Off);
        Valider->setIcon(icon);
        label_7 = new QLabel(page);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(136, 20, 711, 61));
        QFont font2;
        font2.setFamily(QStringLiteral("Nueva Std"));
        font2.setPointSize(28);
        font2.setBold(true);
        font2.setWeight(75);
        label_7->setFont(font2);
        label_7->setTextFormat(Qt::RichText);
        id = new QLineEdit(page);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(420, 120, 151, 31));
        id->setStyleSheet(QLatin1String("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);\n"
"color: rgb(255, 255, 127);"));
        text_nom = new QLabel(page);
        text_nom->setObjectName(QStringLiteral("text_nom"));
        text_nom->setGeometry(QRect(330, 170, 61, 21));
        text_nom->setFont(font1);
        nb = new QLineEdit(page);
        nb->setObjectName(QStringLiteral("nb"));
        nb->setGeometry(QRect(420, 420, 151, 31));
        nb->setStyleSheet(QLatin1String("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        event = new QPushButton(page);
        event->setObjectName(QStringLiteral("event"));
        event->setGeometry(QRect(20, 170, 151, 141));
        event->setStyleSheet(QStringLiteral("gridline-color: rgb(0, 0, 0);"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/1458512 (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        event->setIcon(icon1);
        event->setIconSize(QSize(150, 150));
        event->setAutoDefault(false);
        label_4 = new QLabel(page);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 330, 161, 51));
        QFont font3;
        font3.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font3.setPointSize(28);
        font3.setBold(true);
        font3.setWeight(75);
        label_4->setFont(font3);
        role = new QLineEdit(page);
        role->setObjectName(QStringLiteral("role"));
        role->setGeometry(QRect(420, 370, 151, 31));
        role->setStyleSheet(QLatin1String("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        text_nb_2 = new QLabel(page);
        text_nb_2->setObjectName(QStringLiteral("text_nb_2"));
        text_nb_2->setGeometry(QRect(330, 380, 61, 21));
        text_nb_2->setFont(font1);
        stackedWidget_ajout->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 238, 225);"));
        stackedWidget = new QStackedWidget(page_2);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(30, 0, 1121, 731));
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        page_4->setStyleSheet(QStringLiteral("background-color: rgb(110, 165, 165)"));
        comboBox = new QComboBox(page_4);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(310, 80, 111, 22));
        QFont font4;
        font4.setPointSize(11);
        comboBox->setFont(font4);
        comboBox->setStyleSheet(QStringLiteral("gridline-color: rgb(0, 0, 255);"));
        label_3 = new QLabel(page_4);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(210, 80, 81, 16));
        QFont font5;
        font5.setPointSize(10);
        font5.setBold(true);
        font5.setWeight(75);
        label_3->setFont(font5);
        excel = new QPushButton(page_4);
        excel->setObjectName(QStringLiteral("excel"));
        excel->setGeometry(QRect(290, 500, 111, 31));
        excel->setStyleSheet(QLatin1String("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/logo/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        excel->setIcon(icon2);
        supprimer = new QPushButton(page_4);
        supprimer->setObjectName(QStringLiteral("supprimer"));
        supprimer->setGeometry(QRect(620, 500, 111, 31));
        supprimer->setStyleSheet(QLatin1String("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        supprimer->setIcon(icon2);
        recherche = new QLineEdit(page_4);
        recherche->setObjectName(QStringLiteral("recherche"));
        recherche->setGeometry(QRect(570, 80, 151, 21));
        recherche->setStyleSheet(QLatin1String("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-background-color: rgb(187, 187, 187);\n"
"	\n"
"gridline-color: rgb(0, 0, 255);"));
        search = new QPushButton(page_4);
        search->setObjectName(QStringLiteral("search"));
        search->setGeometry(QRect(730, 80, 91, 21));
        QFont font6;
        font6.setPointSize(9);
        search->setFont(font6);
        search->setIconSize(QSize(20, 20));
        label = new QLabel(page_4);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(230, 10, 641, 41));
        label->setFont(font3);
        tableView = new QTableView(page_4);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(210, 120, 611, 361));
        tableView->setStyleSheet(QLatin1String("gridline-color: rgb(0, 0, 255);\n"
"\n"
"selection-color: rgb(0, 0, 255);"));
        annuler = new QPushButton(page_4);
        annuler->setObjectName(QStringLiteral("annuler"));
        annuler->setEnabled(true);
        annuler->setGeometry(QRect(20, 140, 151, 131));
        annuler->setStyleSheet(QStringLiteral("gridline-color: rgb(0, 0, 255);"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/523146.png"), QSize(), QIcon::Normal, QIcon::Off);
        annuler->setIcon(icon3);
        annuler->setIconSize(QSize(150, 150));
        annuler->setAutoDefault(false);
        label_5 = new QLabel(page_4);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 280, 161, 61));
        QFont font7;
        font7.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font7.setPointSize(24);
        font7.setBold(true);
        font7.setWeight(75);
        label_5->setFont(font7);
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        date_modif = new QLineEdit(page_5);
        date_modif->setObjectName(QStringLiteral("date_modif"));
        date_modif->setGeometry(QRect(290, 240, 151, 20));
        date_modif->setStyleSheet(QLatin1String("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        label_10 = new QLabel(page_5);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(200, 200, 51, 16));
        label_11 = new QLabel(page_5);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(200, 240, 41, 16));
        nom_modif = new QLineEdit(page_5);
        nom_modif->setObjectName(QStringLiteral("nom_modif"));
        nom_modif->setGeometry(QRect(290, 160, 151, 20));
        nom_modif->setStyleSheet(QLatin1String("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        modifier = new QPushButton(page_5);
        modifier->setObjectName(QStringLiteral("modifier"));
        modifier->setGeometry(QRect(190, 400, 111, 23));
        modifier->setStyleSheet(QLatin1String("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        modifier->setIcon(icon);
        lieu_modif = new QLineEdit(page_5);
        lieu_modif->setObjectName(QStringLiteral("lieu_modif"));
        lieu_modif->setGeometry(QRect(290, 200, 151, 20));
        lieu_modif->setStyleSheet(QLatin1String("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        label_6 = new QLabel(page_5);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(200, 160, 31, 16));
        Annuler = new QPushButton(page_5);
        Annuler->setObjectName(QStringLiteral("Annuler"));
        Annuler->setGeometry(QRect(350, 400, 111, 23));
        Annuler->setStyleSheet(QLatin1String("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icons/icons8_back_to_200px.png"), QSize(), QIcon::Normal, QIcon::Off);
        Annuler->setIcon(icon4);
        label_8 = new QLabel(page_5);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(-40, 70, 551, 61));
        QFont font8;
        font8.setFamily(QStringLiteral("Nueva Std"));
        font8.setPointSize(16);
        font8.setBold(true);
        font8.setWeight(75);
        label_8->setFont(font8);
        label_8->setTextFormat(Qt::RichText);
        prix_modif = new QLineEdit(page_5);
        prix_modif->setObjectName(QStringLiteral("prix_modif"));
        prix_modif->setGeometry(QRect(290, 280, 151, 20));
        prix_modif->setStyleSheet(QLatin1String("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        label_18 = new QLabel(page_5);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(200, 280, 31, 16));
        id_2 = new QLineEdit(page_5);
        id_2->setObjectName(QStringLiteral("id_2"));
        id_2->setGeometry(QRect(520, 90, 41, 31));
        id_2->setStyleSheet(QLatin1String("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        nb_modif = new QLineEdit(page_5);
        nb_modif->setObjectName(QStringLiteral("nb_modif"));
        nb_modif->setGeometry(QRect(290, 350, 151, 20));
        nb_modif->setStyleSheet(QLatin1String("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        label_19 = new QLabel(page_5);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(200, 350, 51, 16));
        email_modif_2 = new QLineEdit(page_5);
        email_modif_2->setObjectName(QStringLiteral("email_modif_2"));
        email_modif_2->setGeometry(QRect(290, 320, 151, 20));
        email_modif_2->setStyleSheet(QLatin1String("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        label_20 = new QLabel(page_5);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(200, 320, 51, 16));
        stackedWidget->addWidget(page_5);
        stackedWidget_ajout->addWidget(page_2);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        stackedWidget_2 = new QStackedWidget(tab_2);
        stackedWidget_2->setObjectName(QStringLiteral("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(10, 0, 1291, 541));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        email = new QLineEdit(page_3);
        email->setObjectName(QStringLiteral("email"));
        email->setGeometry(QRect(440, 280, 151, 31));
        email->setStyleSheet(QLatin1String("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        text_tel = new QLabel(page_3);
        text_tel->setObjectName(QStringLiteral("text_tel"));
        text_tel->setGeometry(QRect(370, 340, 61, 21));
        text_tel->setFont(font1);
        text_email = new QLabel(page_3);
        text_email->setObjectName(QStringLiteral("text_email"));
        text_email->setGeometry(QRect(370, 280, 61, 21));
        text_email->setFont(font1);
        text_type = new QLabel(page_3);
        text_type->setObjectName(QStringLiteral("text_type"));
        text_type->setGeometry(QRect(370, 230, 61, 21));
        text_type->setFont(font1);
        nom_sponsor = new QLineEdit(page_3);
        nom_sponsor->setObjectName(QStringLiteral("nom_sponsor"));
        nom_sponsor->setGeometry(QRect(440, 180, 151, 31));
        nom_sponsor->setStyleSheet(QLatin1String("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        ajouter = new QPushButton(page_3);
        ajouter->setObjectName(QStringLiteral("ajouter"));
        ajouter->setGeometry(QRect(450, 460, 111, 23));
        ajouter->setStyleSheet(QLatin1String("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        QIcon icon5;
        icon5.addFile(QStringLiteral("../club_fitness/icons/icons8_checkmark_96px.png"), QSize(), QIcon::Normal, QIcon::Off);
        ajouter->setIcon(icon5);
        type = new QLineEdit(page_3);
        type->setObjectName(QStringLiteral("type"));
        type->setGeometry(QRect(440, 230, 151, 31));
        type->setStyleSheet(QLatin1String("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        tel = new QLineEdit(page_3);
        tel->setObjectName(QStringLiteral("tel"));
        tel->setGeometry(QRect(440, 330, 151, 31));
        tel->setStyleSheet(QLatin1String("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        label_9 = new QLabel(page_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(200, 30, 781, 61));
        label_9->setFont(font2);
        label_9->setTextFormat(Qt::RichText);
        text_noms = new QLabel(page_3);
        text_noms->setObjectName(QStringLiteral("text_noms"));
        text_noms->setGeometry(QRect(370, 180, 51, 21));
        text_noms->setFont(font1);
        id_sponsor = new QLineEdit(page_3);
        id_sponsor->setObjectName(QStringLiteral("id_sponsor"));
        id_sponsor->setGeometry(QRect(440, 130, 151, 31));
        id_sponsor->setStyleSheet(QLatin1String("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        label_29 = new QLabel(page_3);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(370, 130, 51, 21));
        label_29->setFont(font1);
        sponsor2 = new QPushButton(page_3);
        sponsor2->setObjectName(QStringLiteral("sponsor2"));
        sponsor2->setGeometry(QRect(40, 170, 161, 141));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/icons/icons8_update_user_160px_1.png"), QSize(), QIcon::Normal, QIcon::Off);
        sponsor2->setIcon(icon6);
        sponsor2->setIconSize(QSize(150, 150));
        sponsor2->setAutoDefault(false);
        label_30 = new QLabel(page_3);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(40, 320, 161, 41));
        QFont font9;
        font9.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font9.setPointSize(26);
        font9.setBold(true);
        font9.setWeight(75);
        label_30->setFont(font9);
        stackedWidget_2->addWidget(page_3);
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        label_2 = new QLabel(page_6);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(350, 10, 741, 41));
        label_2->setFont(font3);
        label_24 = new QLabel(page_6);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(320, 80, 81, 21));
        label_24->setFont(font5);
        comboBox_2 = new QComboBox(page_6);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(410, 80, 111, 22));
        comboBox_2->setFont(font4);
        comboBox_2->setStyleSheet(QStringLiteral(""));
        search_2 = new QPushButton(page_6);
        search_2->setObjectName(QStringLiteral("search_2"));
        search_2->setGeometry(QRect(790, 80, 91, 21));
        search_2->setFont(font6);
        search_2->setIconSize(QSize(20, 20));
        supprimer_2 = new QPushButton(page_6);
        supprimer_2->setObjectName(QStringLiteral("supprimer_2"));
        supprimer_2->setGeometry(QRect(550, 510, 111, 31));
        supprimer_2->setStyleSheet(QLatin1String("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        supprimer_2->setIcon(icon2);
        recherche_2 = new QLineEdit(page_6);
        recherche_2->setObjectName(QStringLiteral("recherche_2"));
        recherche_2->setGeometry(QRect(630, 80, 151, 21));
        recherche_2->setStyleSheet(QLatin1String("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-background-color: rgb(187, 187, 187);\n"
"	selection-color: rgb(60, 63, 65);"));
        tableView_2 = new QTableView(page_6);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(270, 120, 631, 371));
        tableView_2->setStyleSheet(QStringLiteral(""));
        sponsor_ajout = new QPushButton(page_6);
        sponsor_ajout->setObjectName(QStringLiteral("sponsor_ajout"));
        sponsor_ajout->setGeometry(QRect(50, 170, 151, 131));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/icons/icons8_add_user_male_200px.png"), QSize(), QIcon::Normal, QIcon::Off);
        sponsor_ajout->setIcon(icon7);
        sponsor_ajout->setIconSize(QSize(150, 150));
        sponsor_ajout->setAutoDefault(false);
        label_31 = new QLabel(page_6);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(50, 310, 161, 51));
        label_31->setFont(font9);
        stackedWidget_2->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName(QStringLiteral("page_7"));
        label_25 = new QLabel(page_7);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(90, 50, 581, 61));
        label_25->setFont(font8);
        label_25->setTextFormat(Qt::RichText);
        label_26 = new QLabel(page_7);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(280, 140, 51, 16));
        nom_modif_2 = new QLineEdit(page_7);
        nom_modif_2->setObjectName(QStringLiteral("nom_modif_2"));
        nom_modif_2->setGeometry(QRect(350, 140, 151, 20));
        nom_modif_2->setStyleSheet(QLatin1String("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        tel_modif = new QLineEdit(page_7);
        tel_modif->setObjectName(QStringLiteral("tel_modif"));
        tel_modif->setGeometry(QRect(350, 240, 151, 20));
        tel_modif->setStyleSheet(QLatin1String("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        label_28 = new QLabel(page_7);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(280, 240, 51, 16));
        modifier_2 = new QPushButton(page_7);
        modifier_2->setObjectName(QStringLiteral("modifier_2"));
        modifier_2->setGeometry(QRect(250, 320, 111, 23));
        modifier_2->setStyleSheet(QLatin1String("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        modifier_2->setIcon(icon);
        Annuler_2 = new QPushButton(page_7);
        Annuler_2->setObjectName(QStringLiteral("Annuler_2"));
        Annuler_2->setGeometry(QRect(410, 320, 111, 23));
        Annuler_2->setStyleSheet(QLatin1String("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        Annuler_2->setIcon(icon4);
        id_3 = new QLineEdit(page_7);
        id_3->setObjectName(QStringLiteral("id_3"));
        id_3->setGeometry(QRect(680, 70, 41, 31));
        id_3->setStyleSheet(QLatin1String("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        type_modif = new QLineEdit(page_7);
        type_modif->setObjectName(QStringLiteral("type_modif"));
        type_modif->setGeometry(QRect(350, 170, 151, 20));
        type_modif->setStyleSheet(QLatin1String("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        email_modif = new QLineEdit(page_7);
        email_modif->setObjectName(QStringLiteral("email_modif"));
        email_modif->setGeometry(QRect(350, 210, 151, 20));
        email_modif->setStyleSheet(QLatin1String("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        label_32 = new QLabel(page_7);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(280, 210, 51, 16));
        label_33 = new QLabel(page_7);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(280, 170, 51, 16));
        stackedWidget_2->addWidget(page_7);
        tabWidget->addTab(tab_2, QString());

        retranslateUi(empfou);

        tabWidget->setCurrentIndex(0);
        stackedWidget_ajout->setCurrentIndex(1);
        stackedWidget->setCurrentIndex(0);
        stackedWidget_2->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(empfou);
    } // setupUi

    void retranslateUi(QDialog *empfou)
    {
        empfou->setWindowTitle(QApplication::translate("empfou", "Dialog", Q_NULLPTR));
        text_nb->setText(QApplication::translate("empfou", "salaire", Q_NULLPTR));
        text_prix->setText(QApplication::translate("empfou", "tel", Q_NULLPTR));
        label_17->setText(QApplication::translate("empfou", "ID", Q_NULLPTR));
        text_lieu->setText(QApplication::translate("empfou", "prenom", Q_NULLPTR));
        text_date->setText(QApplication::translate("empfou", "email", Q_NULLPTR));
        Valider->setText(QApplication::translate("empfou", "Valider", Q_NULLPTR));
        label_7->setText(QApplication::translate("empfou", "Ajouter un nouveau EMPLOYE", Q_NULLPTR));
        text_nom->setText(QApplication::translate("empfou", "Nom", Q_NULLPTR));
        event->setText(QString());
        label_4->setText(QApplication::translate("empfou", "Traiter", Q_NULLPTR));
        text_nb_2->setText(QApplication::translate("empfou", "role", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("empfou", "NOM", Q_NULLPTR)
         << QApplication::translate("empfou", "PRENOM", Q_NULLPTR)
         << QApplication::translate("empfou", "SALAIRE", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("empfou", "TRI PAR :", Q_NULLPTR));
        excel->setText(QApplication::translate("empfou", "Generer EXCEL", Q_NULLPTR));
        supprimer->setText(QApplication::translate("empfou", "Supprimer", Q_NULLPTR));
        recherche->setPlaceholderText(QApplication::translate("empfou", "rechercher", Q_NULLPTR));
        search->setText(QApplication::translate("empfou", "Rechercher", Q_NULLPTR));
        label->setText(QApplication::translate("empfou", "GESTION  DES EMPLOYES", Q_NULLPTR));
        annuler->setText(QString());
        label_5->setText(QApplication::translate("empfou", "Ajouter", Q_NULLPTR));
        label_10->setText(QApplication::translate("empfou", "prenom", Q_NULLPTR));
        label_11->setText(QApplication::translate("empfou", "email", Q_NULLPTR));
        modifier->setText(QApplication::translate("empfou", "modifier", Q_NULLPTR));
        label_6->setText(QApplication::translate("empfou", "Nom", Q_NULLPTR));
        Annuler->setText(QApplication::translate("empfou", "Retour", Q_NULLPTR));
        label_8->setText(QApplication::translate("empfou", "modification de l' EMPLOYES dont   ID est : ", Q_NULLPTR));
        label_18->setText(QApplication::translate("empfou", "tel", Q_NULLPTR));
        label_19->setText(QApplication::translate("empfou", "salaire", Q_NULLPTR));
        label_20->setText(QApplication::translate("empfou", "role", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("empfou", "Employes", Q_NULLPTR));
        text_tel->setText(QApplication::translate("empfou", "<html><head/><body><p>Tel</p><p><br/></p></body></html>", Q_NULLPTR));
        text_email->setText(QApplication::translate("empfou", "Email", Q_NULLPTR));
        text_type->setText(QApplication::translate("empfou", "Prenom", Q_NULLPTR));
        ajouter->setText(QApplication::translate("empfou", "Valider", Q_NULLPTR));
        label_9->setText(QApplication::translate("empfou", "Ajouter un nouveau FOUNISSEUR", Q_NULLPTR));
        text_noms->setText(QApplication::translate("empfou", "Nom", Q_NULLPTR));
        label_29->setText(QApplication::translate("empfou", "ID", Q_NULLPTR));
        sponsor2->setText(QString());
        label_30->setText(QApplication::translate("empfou", "Traiter", Q_NULLPTR));
        label_2->setText(QApplication::translate("empfou", "GESTION  DES FOURNISSEURS", Q_NULLPTR));
        label_24->setText(QApplication::translate("empfou", "TRI PAR :", Q_NULLPTR));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("empfou", "NOM", Q_NULLPTR)
         << QApplication::translate("empfou", "PRENOM", Q_NULLPTR)
         << QApplication::translate("empfou", "TEL", Q_NULLPTR)
        );
        search_2->setText(QApplication::translate("empfou", "Rechercher", Q_NULLPTR));
        supprimer_2->setText(QApplication::translate("empfou", "Supprimer", Q_NULLPTR));
        recherche_2->setPlaceholderText(QApplication::translate("empfou", "rechercher", Q_NULLPTR));
        sponsor_ajout->setText(QString());
        label_31->setText(QApplication::translate("empfou", "Ajouter ", Q_NULLPTR));
        label_25->setText(QApplication::translate("empfou", "modification de FOURNISSEUR dont   ID est : ", Q_NULLPTR));
        label_26->setText(QApplication::translate("empfou", "Nom", Q_NULLPTR));
        label_28->setText(QApplication::translate("empfou", "Tel", Q_NULLPTR));
        modifier_2->setText(QApplication::translate("empfou", "modifier", Q_NULLPTR));
        Annuler_2->setText(QApplication::translate("empfou", "Retour", Q_NULLPTR));
        label_32->setText(QApplication::translate("empfou", "Email", Q_NULLPTR));
        label_33->setText(QApplication::translate("empfou", "Prenom", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("empfou", "Fournisseurs", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class empfou: public Ui_empfou {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPFOU_H
