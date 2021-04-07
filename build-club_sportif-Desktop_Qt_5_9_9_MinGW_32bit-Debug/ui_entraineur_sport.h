/********************************************************************************
** Form generated from reading UI file 'entraineur_sport.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTRAINEUR_SPORT_H
#define UI_ENTRAINEUR_SPORT_H

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

class Ui_event_sponsor
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QStackedWidget *stackedWidget_ajout;
    QWidget *page;
    QLabel *label_16;
    QLabel *label_12;
    QLabel *label_17;
    QLineEdit *lieu;
    QLineEdit *prix;
    QLabel *label_15;
    QLineEdit *nom;
    QLineEdit *date;
    QLabel *label_14;
    QPushButton *Valider;
    QLabel *label_7;
    QLineEdit *id;
    QLabel *label_13;
    QLineEdit *nb;
    QPushButton *event;
    QLabel *label_4;
    QWidget *page_2;
    QStackedWidget *stackedWidget;
    QWidget *page_4;
    QComboBox *comboBox;
    QLabel *label_3;
    QPushButton *excel;
    QPushButton *pdf;
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
    QWidget *tab_2;
    QStackedWidget *stackedWidget_2;
    QWidget *page_3;
    QLineEdit *email;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLineEdit *nom_sponsor;
    QPushButton *ajouter;
    QLineEdit *type;
    QLineEdit *tel;
    QLabel *label_9;
    QLabel *label_22;
    QLineEdit *adresse;
    QLabel *label_23;
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
    QPushButton *mailing;
    QLineEdit *recherche_2;
    QTableView *tableView_2;
    QPushButton *sponsor_ajout;
    QLabel *label_31;
    QWidget *page_7;
    QLabel *label_25;
    QLabel *label_26;
    QLineEdit *nom_modif_2;
    QLineEdit *adresse_modif;
    QLineEdit *tel_modif;
    QLabel *label_27;
    QLabel *label_28;
    QPushButton *modifier_2;
    QPushButton *Annuler_2;
    QLineEdit *id_3;

    void setupUi(QDialog *event_sponsor)
    {
        if (event_sponsor->objectName().isEmpty())
            event_sponsor->setObjectName(QStringLiteral("event_sponsor"));
        event_sponsor->resize(1303, 589);
        event_sponsor->setSizeGripEnabled(false);
        tabWidget = new QTabWidget(event_sponsor);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1311, 591));
        QFont font;
        font.setPointSize(12);
        tabWidget->setFont(font);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        stackedWidget_ajout = new QStackedWidget(tab);
        stackedWidget_ajout->setObjectName(QStringLiteral("stackedWidget_ajout"));
        stackedWidget_ajout->setGeometry(QRect(50, 0, 1221, 621));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        label_16 = new QLabel(page);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(336, 370, 81, 21));
        QFont font1;
        font1.setPointSize(10);
        label_16->setFont(font1);
        label_12 = new QLabel(page);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(366, 330, 41, 21));
        label_12->setFont(font1);
        label_17 = new QLabel(page);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(366, 120, 41, 21));
        label_17->setFont(font1);
        lieu = new QLineEdit(page);
        lieu->setObjectName(QStringLiteral("lieu"));
        lieu->setGeometry(QRect(416, 270, 151, 31));
        lieu->setStyleSheet(QLatin1String("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        prix = new QLineEdit(page);
        prix->setObjectName(QStringLiteral("prix"));
        prix->setGeometry(QRect(416, 320, 151, 31));
        prix->setStyleSheet(QLatin1String("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        label_15 = new QLabel(page);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(366, 270, 41, 21));
        label_15->setFont(font1);
        nom = new QLineEdit(page);
        nom->setObjectName(QStringLiteral("nom"));
        nom->setGeometry(QRect(416, 170, 151, 31));
        nom->setStyleSheet(QLatin1String("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        date = new QLineEdit(page);
        date->setObjectName(QStringLiteral("date"));
        date->setGeometry(QRect(416, 220, 151, 31));
        date->setStyleSheet(QLatin1String("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        label_14 = new QLabel(page);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(366, 220, 41, 21));
        label_14->setFont(font1);
        Valider = new QPushButton(page);
        Valider->setObjectName(QStringLiteral("Valider"));
        Valider->setGeometry(QRect(420, 460, 111, 23));
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
        label_7->setGeometry(QRect(206, 20, 641, 61));
        QFont font2;
        font2.setFamily(QStringLiteral("Nueva Std"));
        font2.setPointSize(28);
        font2.setBold(true);
        font2.setWeight(75);
        label_7->setFont(font2);
        label_7->setTextFormat(Qt::RichText);
        id = new QLineEdit(page);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(416, 120, 151, 31));
        id->setStyleSheet(QLatin1String("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        label_13 = new QLabel(page);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(366, 170, 41, 21));
        label_13->setFont(font1);
        nb = new QLineEdit(page);
        nb->setObjectName(QStringLiteral("nb"));
        nb->setGeometry(QRect(416, 370, 151, 31));
        nb->setStyleSheet(QLatin1String("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        event = new QPushButton(page);
        event->setObjectName(QStringLiteral("event"));
        event->setGeometry(QRect(900, 170, 151, 141));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/1458512 (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        event->setIcon(icon1);
        event->setIconSize(QSize(150, 150));
        event->setAutoDefault(false);
        label_4 = new QLabel(page);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(900, 320, 151, 51));
        QFont font3;
        font3.setFamily(QStringLiteral("Nueva Std Cond"));
        font3.setPointSize(28);
        label_4->setFont(font3);
        stackedWidget_ajout->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget = new QStackedWidget(page_2);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(30, 0, 1121, 731));
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        comboBox = new QComboBox(page_4);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(310, 80, 111, 22));
        QFont font4;
        font4.setPointSize(11);
        comboBox->setFont(font4);
        comboBox->setStyleSheet(QStringLiteral(""));
        label_3 = new QLabel(page_4);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(210, 80, 81, 16));
        label_3->setFont(font1);
        excel = new QPushButton(page_4);
        excel->setObjectName(QStringLiteral("excel"));
        excel->setGeometry(QRect(460, 500, 111, 31));
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
        pdf = new QPushButton(page_4);
        pdf->setObjectName(QStringLiteral("pdf"));
        pdf->setGeometry(QRect(300, 500, 111, 31));
        pdf->setStyleSheet(QLatin1String("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        pdf->setIcon(icon2);
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
"	selection-color: rgb(60, 63, 65);"));
        search = new QPushButton(page_4);
        search->setObjectName(QStringLiteral("search"));
        search->setGeometry(QRect(730, 80, 91, 21));
        QFont font5;
        font5.setPointSize(9);
        search->setFont(font5);
        search->setIconSize(QSize(20, 20));
        label = new QLabel(page_4);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(230, 10, 641, 41));
        label->setFont(font3);
        tableView = new QTableView(page_4);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(210, 120, 611, 361));
        tableView->setStyleSheet(QStringLiteral(""));
        annuler = new QPushButton(page_4);
        annuler->setObjectName(QStringLiteral("annuler"));
        annuler->setEnabled(true);
        annuler->setGeometry(QRect(920, 170, 151, 141));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/523146.png"), QSize(), QIcon::Normal, QIcon::Off);
        annuler->setIcon(icon3);
        annuler->setIconSize(QSize(150, 150));
        annuler->setAutoDefault(false);
        label_5 = new QLabel(page_4);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(920, 310, 151, 61));
        label_5->setFont(font3);
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
        label_11->setGeometry(QRect(200, 240, 91, 16));
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
        modifier->setGeometry(QRect(200, 350, 111, 23));
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
        label_6->setGeometry(QRect(200, 160, 51, 16));
        Annuler = new QPushButton(page_5);
        Annuler->setObjectName(QStringLiteral("Annuler"));
        Annuler->setGeometry(QRect(340, 350, 111, 23));
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
        label_8->setGeometry(QRect(0, 70, 511, 61));
        QFont font6;
        font6.setFamily(QStringLiteral("Nueva Std"));
        font6.setPointSize(16);
        font6.setBold(true);
        font6.setWeight(75);
        label_8->setFont(font6);
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
        label_18->setGeometry(QRect(200, 280, 91, 16));
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
        email->setGeometry(QRect(440, 330, 151, 31));
        email->setStyleSheet(QLatin1String("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        label_19 = new QLabel(page_3);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(380, 390, 51, 21));
        label_19->setFont(font1);
        label_20 = new QLabel(page_3);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(390, 330, 41, 21));
        label_20->setFont(font1);
        label_21 = new QLabel(page_3);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(390, 280, 41, 21));
        label_21->setFont(font1);
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
        type->setGeometry(QRect(440, 280, 151, 31));
        type->setStyleSheet(QLatin1String("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        tel = new QLineEdit(page_3);
        tel->setObjectName(QStringLiteral("tel"));
        tel->setGeometry(QRect(440, 380, 151, 31));
        tel->setStyleSheet(QLatin1String("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        label_9 = new QLabel(page_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(270, 30, 711, 61));
        label_9->setFont(font2);
        label_9->setTextFormat(Qt::RichText);
        label_22 = new QLabel(page_3);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(370, 230, 61, 21));
        label_22->setFont(font1);
        adresse = new QLineEdit(page_3);
        adresse->setObjectName(QStringLiteral("adresse"));
        adresse->setGeometry(QRect(440, 230, 151, 31));
        adresse->setStyleSheet(QLatin1String("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        label_23 = new QLabel(page_3);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(380, 180, 41, 21));
        label_23->setFont(font1);
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
        label_29->setGeometry(QRect(380, 130, 41, 21));
        label_29->setFont(font1);
        sponsor2 = new QPushButton(page_3);
        sponsor2->setObjectName(QStringLiteral("sponsor2"));
        sponsor2->setGeometry(QRect(1050, 180, 141, 141));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/icons/icons8_update_user_160px_1.png"), QSize(), QIcon::Normal, QIcon::Off);
        sponsor2->setIcon(icon6);
        sponsor2->setIconSize(QSize(150, 150));
        sponsor2->setAutoDefault(false);
        label_30 = new QLabel(page_3);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(1050, 330, 141, 41));
        QFont font7;
        font7.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font7.setPointSize(26);
        label_30->setFont(font7);
        stackedWidget_2->addWidget(page_3);
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        label_2 = new QLabel(page_6);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(350, 10, 641, 41));
        label_2->setFont(font3);
        label_24 = new QLabel(page_6);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(360, 80, 81, 16));
        label_24->setFont(font1);
        comboBox_2 = new QComboBox(page_6);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(440, 80, 111, 22));
        comboBox_2->setFont(font4);
        comboBox_2->setStyleSheet(QStringLiteral(""));
        search_2 = new QPushButton(page_6);
        search_2->setObjectName(QStringLiteral("search_2"));
        search_2->setGeometry(QRect(870, 80, 91, 21));
        search_2->setFont(font5);
        search_2->setIconSize(QSize(20, 20));
        supprimer_2 = new QPushButton(page_6);
        supprimer_2->setObjectName(QStringLiteral("supprimer_2"));
        supprimer_2->setGeometry(QRect(730, 500, 111, 31));
        supprimer_2->setStyleSheet(QLatin1String("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        supprimer_2->setIcon(icon2);
        mailing = new QPushButton(page_6);
        mailing->setObjectName(QStringLiteral("mailing"));
        mailing->setGeometry(QRect(570, 500, 111, 31));
        mailing->setStyleSheet(QLatin1String("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        mailing->setIcon(icon2);
        recherche_2 = new QLineEdit(page_6);
        recherche_2->setObjectName(QStringLiteral("recherche_2"));
        recherche_2->setGeometry(QRect(710, 80, 151, 21));
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
        tableView_2->setGeometry(QRect(330, 120, 631, 371));
        tableView_2->setStyleSheet(QStringLiteral(""));
        sponsor_ajout = new QPushButton(page_6);
        sponsor_ajout->setObjectName(QStringLiteral("sponsor_ajout"));
        sponsor_ajout->setGeometry(QRect(1090, 160, 141, 141));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/icons/icons8_add_user_male_200px.png"), QSize(), QIcon::Normal, QIcon::Off);
        sponsor_ajout->setIcon(icon7);
        sponsor_ajout->setIconSize(QSize(150, 150));
        sponsor_ajout->setAutoDefault(false);
        label_31 = new QLabel(page_6);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(1090, 300, 151, 51));
        label_31->setFont(font7);
        stackedWidget_2->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName(QStringLiteral("page_7"));
        label_25 = new QLabel(page_7);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(160, 50, 511, 61));
        label_25->setFont(font6);
        label_25->setTextFormat(Qt::RichText);
        label_26 = new QLabel(page_7);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(290, 140, 51, 16));
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
        adresse_modif = new QLineEdit(page_7);
        adresse_modif->setObjectName(QStringLiteral("adresse_modif"));
        adresse_modif->setGeometry(QRect(350, 200, 151, 20));
        adresse_modif->setStyleSheet(QLatin1String("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        tel_modif = new QLineEdit(page_7);
        tel_modif->setObjectName(QStringLiteral("tel_modif"));
        tel_modif->setGeometry(QRect(350, 250, 151, 20));
        tel_modif->setStyleSheet(QLatin1String("	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"\n"
"\n"
"	selection-color: rgb(60, 63, 65);"));
        label_27 = new QLabel(page_7);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(260, 200, 81, 20));
        label_28 = new QLabel(page_7);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(290, 250, 51, 16));
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
        stackedWidget_2->addWidget(page_7);
        tabWidget->addTab(tab_2, QString());

        retranslateUi(event_sponsor);

        tabWidget->setCurrentIndex(1);
        stackedWidget_ajout->setCurrentIndex(1);
        stackedWidget->setCurrentIndex(0);
        stackedWidget_2->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(event_sponsor);
    } // setupUi

    void retranslateUi(QDialog *event_sponsor)
    {
        event_sponsor->setWindowTitle(QApplication::translate("event_sponsor", "Dialog", Q_NULLPTR));
        label_16->setText(QApplication::translate("event_sponsor", "Nb partic", Q_NULLPTR));
        label_12->setText(QApplication::translate("event_sponsor", "Prix", Q_NULLPTR));
        label_17->setText(QApplication::translate("event_sponsor", "ID", Q_NULLPTR));
        label_15->setText(QApplication::translate("event_sponsor", "Lieu", Q_NULLPTR));
        label_14->setText(QApplication::translate("event_sponsor", "Date", Q_NULLPTR));
        Valider->setText(QApplication::translate("event_sponsor", "Valider", Q_NULLPTR));
        label_7->setText(QApplication::translate("event_sponsor", "Ajouter un nouveau EVENT", Q_NULLPTR));
        label_13->setText(QApplication::translate("event_sponsor", "Nom", Q_NULLPTR));
        event->setText(QString());
        label_4->setText(QApplication::translate("event_sponsor", "Traiter", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("event_sponsor", "NOM", Q_NULLPTR)
         << QApplication::translate("event_sponsor", "PRIX", Q_NULLPTR)
         << QApplication::translate("event_sponsor", "DATE", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("event_sponsor", "TRI PAR :", Q_NULLPTR));
        excel->setText(QApplication::translate("event_sponsor", "Generer EXCEL", Q_NULLPTR));
        pdf->setText(QApplication::translate("event_sponsor", "Generer PDF", Q_NULLPTR));
        supprimer->setText(QApplication::translate("event_sponsor", "Supprimer", Q_NULLPTR));
        recherche->setPlaceholderText(QApplication::translate("event_sponsor", "rechercher", Q_NULLPTR));
        search->setText(QApplication::translate("event_sponsor", "Rechercher", Q_NULLPTR));
        label->setText(QApplication::translate("event_sponsor", "GESTION  DES EVENEMENTS", Q_NULLPTR));
        annuler->setText(QString());
        label_5->setText(QApplication::translate("event_sponsor", "Ajouter", Q_NULLPTR));
        label_10->setText(QApplication::translate("event_sponsor", "Lieu", Q_NULLPTR));
        label_11->setText(QApplication::translate("event_sponsor", "Date", Q_NULLPTR));
        modifier->setText(QApplication::translate("event_sponsor", "modifier", Q_NULLPTR));
        label_6->setText(QApplication::translate("event_sponsor", "Nom", Q_NULLPTR));
        Annuler->setText(QApplication::translate("event_sponsor", "Retour", Q_NULLPTR));
        label_8->setText(QApplication::translate("event_sponsor", "modification de l' EVENT dont   ID est : ", Q_NULLPTR));
        label_18->setText(QApplication::translate("event_sponsor", "Prix", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("event_sponsor", "Evenements", Q_NULLPTR));
        label_19->setText(QApplication::translate("event_sponsor", "<html><head/><body><p>Tel</p><p><br/></p></body></html>", Q_NULLPTR));
        label_20->setText(QApplication::translate("event_sponsor", "Email", Q_NULLPTR));
        label_21->setText(QApplication::translate("event_sponsor", "Type", Q_NULLPTR));
        ajouter->setText(QApplication::translate("event_sponsor", "Valider", Q_NULLPTR));
        label_9->setText(QApplication::translate("event_sponsor", "Ajouter un nouveau SPONSOR", Q_NULLPTR));
        label_22->setText(QApplication::translate("event_sponsor", "Adresse", Q_NULLPTR));
        label_23->setText(QApplication::translate("event_sponsor", "Nom", Q_NULLPTR));
        label_29->setText(QApplication::translate("event_sponsor", "ID", Q_NULLPTR));
        sponsor2->setText(QString());
        label_30->setText(QApplication::translate("event_sponsor", "Traiter", Q_NULLPTR));
        label_2->setText(QApplication::translate("event_sponsor", "GESTION  DES SPONSORS", Q_NULLPTR));
        label_24->setText(QApplication::translate("event_sponsor", "TRI PAR :", Q_NULLPTR));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("event_sponsor", "NOM", Q_NULLPTR)
         << QApplication::translate("event_sponsor", "ADRESSE", Q_NULLPTR)
         << QApplication::translate("event_sponsor", "TEL", Q_NULLPTR)
        );
        search_2->setText(QApplication::translate("event_sponsor", "Rechercher", Q_NULLPTR));
        supprimer_2->setText(QApplication::translate("event_sponsor", "Supprimer", Q_NULLPTR));
        mailing->setText(QApplication::translate("event_sponsor", "Mailing", Q_NULLPTR));
        recherche_2->setPlaceholderText(QApplication::translate("event_sponsor", "rechercher", Q_NULLPTR));
        sponsor_ajout->setText(QString());
        label_31->setText(QApplication::translate("event_sponsor", "Ajouter ", Q_NULLPTR));
        label_25->setText(QApplication::translate("event_sponsor", "modification de SPONSOR dont   ID est : ", Q_NULLPTR));
        label_26->setText(QApplication::translate("event_sponsor", "Nom", Q_NULLPTR));
        label_27->setText(QApplication::translate("event_sponsor", "Adresse", Q_NULLPTR));
        label_28->setText(QApplication::translate("event_sponsor", "Tel", Q_NULLPTR));
        modifier_2->setText(QApplication::translate("event_sponsor", "modifier", Q_NULLPTR));
        Annuler_2->setText(QApplication::translate("event_sponsor", "Retour", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("event_sponsor", "Sponsors", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class event_sponsor: public Ui_event_sponsor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTRAINEUR_SPORT_H
