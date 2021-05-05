#include "statistiq.h"
#include "ui_statistiq.h"
#include"QSqlRecord"
#include "qcustomplot.h"
#include"QSqlQuery"
#include <QSqlQueryModel>
#include <QDebug>
#include <QSqlError>
statistiq::statistiq(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::statistiq)
{
    ui->setupUi(this);
    this->setWindowTitle("statistiques");
    makePolt();
}

statistiq::~statistiq()
{
    delete ui;
}

void statistiq::makePolt()
{
    QLinearGradient gradient(0, 0, 0, 400);
    gradient.setColorAt(0, QColor(255, 255, 255));
    gradient.setColorAt(0.38, QColor(255, 255, 255));
    gradient.setColorAt(1, QColor(255, 255, 255));
    ui->customPlot->setBackground(QBrush(gradient));
    QCPBars *regen = new QCPBars(ui->customPlot->xAxis, ui->customPlot->yAxis);
    regen->setAntialiased(false);
    regen->setStackingGap(1);
    regen->setName("Nombre de produits par categorie statistique");
    regen->setPen(QPen(QColor(111, 9, 176).lighter(170)));
    regen->setBrush(QColor(111, 9, 176));


    // prepare x axis with country labels:
    QVector<double> ticks;
    QVector<QString> labels;
    ticks << 1 << 2 << 3 << 4 << 5 << 6 << 7 << 8 << 9 << 10 << 11 << 12;
    labels << "FOOTBALL" << "HANDBALL" << "BASKETBALL" << "VOLLEYBALL";
    QSharedPointer<QCPAxisTickerText> textTicker(new QCPAxisTickerText);
    textTicker->addTicks(ticks, labels);
    ui->customPlot->xAxis->setTicker(textTicker);
    ui->customPlot->xAxis->setTickLabelRotation(60);
    ui->customPlot->xAxis->setSubTicks(false);
    ui->customPlot->xAxis->setTickLength(0, 4);
    ui->customPlot->xAxis->setRange(0, 8);
    ui->customPlot->xAxis->setBasePen(QPen(Qt::black));
    ui->customPlot->xAxis->setTickPen(QPen(Qt::black));
    ui->customPlot->xAxis->grid()->setVisible(true);
    ui->customPlot->xAxis->grid()->setPen(QPen(QColor(130, 130, 130), 0, Qt::DotLine));
    ui->customPlot->xAxis->setTickLabelColor(Qt::black);
    ui->customPlot->xAxis->setLabelColor(Qt::black);

    // prepare y axis:
    ui->customPlot->yAxis->setRange(0,20);
    ui->customPlot->yAxis->setPadding(5); // a bit more space to the left border
     ui->customPlot->yAxis->setLabel("Nombre des produits \n par categorie");
    ui->customPlot->yAxis->setBasePen(QPen(Qt::black));
    ui->customPlot->yAxis->setTickPen(QPen(Qt::black));
    ui->customPlot->yAxis->setSubTickPen(QPen(Qt::black));
    ui->customPlot->yAxis->grid()->setSubGridVisible(true);
    ui->customPlot->yAxis->setTickLabelColor(Qt::black);
    ui->customPlot->yAxis->setLabelColor(Qt::black);
    ui->customPlot->yAxis->grid()->setPen(QPen(QColor(130, 130, 130), 0, Qt::SolidLine));
    ui->customPlot->yAxis->grid()->setSubGridPen(QPen(QColor(130, 130,  130), 0, Qt::DotLine));

    // Add data:
    QVector<double> regenData;
int nbr;
int yos;
int he;
/*QSqlQuery query1("SELECT COUNT(*) as nbrstag FROM stagiaire");
int h=query1.value(5).toInt()    ;*/
QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM PRODUIT where CATEGORIE ='FOOTBALL' ");
    query.exec();

    if (!query.isActive())
        QMessageBox::warning(this, tr("Database Error"),query.lastError().text());
    query.next();
    int numberOfPages = query.value(0).toInt();
    qDebug()<<numberOfPages;
    QSqlQuery query1;
        query1.prepare("SELECT COUNT(*) FROM PRODUIT where CATEGORIE ='HANDBALL' ");
        query1.exec();

        if (!query1.isActive())
            QMessageBox::warning(this, tr("Database Error"),query1.lastError().text());
        query1.next();
        int numberOfPages1 = query1.value(0).toInt();
        QSqlQuery query2;
            query2.prepare("SELECT COUNT(*) FROM PRODUIT where  CATEGORIE ='BASKETBALL' ");
            query2.exec();

            if (!query2.isActive())
                QMessageBox::warning(this, tr("Database Error"),query2.lastError().text());
            query2.next();
            int numberOfPages2 = query2.value(0).toInt();
            QSqlQuery query3;
                query3.prepare("SELECT COUNT(*) FROM PRODUIT where  CATEGORIE ='VOLLEYBALL' ");
                query3.exec();

                if (!query3.isActive())
                    QMessageBox::warning(this, tr("Database Error"),query3.lastError().text());
                query3.next();
                int numberOfPages3 = query3.value(0).toInt();
QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select count(*) from PRODUIT");

/*while (query1.next()) {
                        he = query1.value(0).toInt();
                                                    }*/

   /* QSqlQuery query2("select count(*) from stagaire");
    while (query2.next()) {
                           nbr = query2.value(0).toInt();
                             }*/

    QSqlQuery queri("select count(*) from stagaire where SELECT YEAR('datedeb'); = 3 ");
    while (queri.next()) {
                           yos = queri.value(0).toInt();

                             }
    regenData << numberOfPages << numberOfPages1 << numberOfPages2 << numberOfPages3 ;
    regen->setData(ticks, regenData);

    // setup legend:
    ui->customPlot->legend->setVisible(true);
    ui->customPlot->axisRect()->insetLayout()->setInsetAlignment(0, Qt::AlignTop|Qt::AlignHCenter);
    ui->customPlot->legend->setBrush(QColor(255, 255, 255, 100));
    ui->customPlot->legend->setBorderPen(Qt::NoPen);
    QFont legendFont = font();
    legendFont.setPointSize(10);
    ui->customPlot->legend->setFont(legendFont);
    ui->customPlot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);
}
