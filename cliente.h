#ifndef CLIENTE_H
#define CLIENTE_H
#include <QString>

class Cliente {
public:
    QString dni, nombre, telefono, direccion;

    Cliente(QString d="", QString n="", QString t="", QString dir="");
};

#endif // CLIENTE_H
