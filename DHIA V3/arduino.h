#ifndef ARDUINO_H
#define ARDUINO_H

#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>


class Arduino
{
public:
    Arduino();
    int connect_arduino(); // permet de connecter le pc à arduino
    int close_arduino(); // fermer la connexion
    int write_to_arduino( QByteArray ); // envoyer des données vers arduino
    QString read_from_arduino(); // recevoir des données de la carte arduino
    QSerialPort* getserial(); // accesseur
    QString getarduino_port_name();




private:
QSerialPort * serial;
static const quint16 arduino_uno_vendor_id=9025;
static const quint16 arduino_uno_producy_id=67;
QString arduino_port_name;
bool arduino_is_available;
QByteArray data; // contenant les données lues à partir d'arduino

QByteArray serialData;
QString serialBuffer;
QString parsed_data;
double temperature_value;
};

#endif // ARDUINO_H
