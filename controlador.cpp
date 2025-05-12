#include <controlador.h>
#include <iostream>
void Controlador::registrarVehiculo() {
    vehiculos.push_back(vista.pedirDatosVehiculo());
}

void Controlador::registrarCliente() {
    clientes.push_back(vista.pedirDatosCliente());
}

void Controlador::listarVehiculos() {
    vista.mostrarVehiculos(vehiculos);
}

void Controlador::listarClientes() {
    vista.mostrarClientes(clientes);
}

void Controlador::ejecutar() {
    int opcion;
    do {
        vista.mostrarMenu();
        std::cin>>opcion;
        switch (opcion) {
        case 1: registrarVehiculo(); break;
        case 2: registrarCliente(); break;
        case 3: listarVehiculos(); break;
        case 4: listarClientes(); break;
        }
    } while (opcion != 5);
}
