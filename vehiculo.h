#ifndef VEHICULO_H
#define VEHICULO_H
#include <QString>

class Vehiculo {
public:
    QString codigo, marca, modelo;
    int anio, kilometraje;
    float precio;

    Vehiculo(QString c="", QString m="", QString mo="", int a=0, int k=0, float p=0.0f);
};

#endif // VEHICULO_H
