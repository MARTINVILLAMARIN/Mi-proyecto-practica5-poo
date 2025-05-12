#ifndef VISTACONSOLA_H
#define VISTACONSOLA_H

#include "vehiculo.h"
#include "cliente.h"
#include <vector>

class VistaConsola {
public:
    void mostrarMenu();
    Vehiculo pedirDatosVehiculo();
    Cliente pedirDatosCliente();
    void mostrarVehiculos(const std::vector<Vehiculo>&);
    void mostrarClientes(const std::vector<Cliente>&);
};

#endif // VISTACONSOLA_H
