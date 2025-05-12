#ifndef CONTROLADOR_H
#define CONTROLADOR_H

#include "vehiculo.h"
#include "cliente.h"
#include "vistaconsola.h"
#include <vector>

class Controlador {
private:
    std::vector<Vehiculo> vehiculos;
    std::vector<Cliente> clientes;
    VistaConsola vista;
public:
    void registrarVehiculo();
    void registrarCliente();
    void listarVehiculos();
    void listarClientes();
    void ejecutar();
};

#endif // CONTROLADOR_H
