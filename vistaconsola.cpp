#include <vistaconsola.h>
#include <iostream>

using namespace std;

void VistaConsola::mostrarMenu() {
    cout << "\n1. Registrar Vehiculo\n2. Registrar Cliente\n3. Listar Vehiculos\n4. Listar Clientes\n5. Salir\nOpcion: ";
}

Vehiculo VistaConsola::pedirDatosVehiculo() {
    string c, m, mo;
    int a, k;
    float p;
    cout << "Codigo: "; cin >> c;
    cout << "Marca: "; cin >> m;
    cout << "Modelo: "; cin >> mo;
    cout << "Ano: "; cin >> a;
    cout << "Kilometraje: "; cin >> k;
    cout << "Precio: "; cin >> p;
    return Vehiculo(QString::fromStdString(c), QString::fromStdString(m), QString::fromStdString(mo), a, k, p);
}

Cliente VistaConsola::pedirDatosCliente() {
    string d, n, t, dir;
    cout << "DNI: "; cin >> d;
    cout << "Nombre: "; cin >> n;
    cout << "Telefono: "; cin >> t;
    cout << "Direccion: "; cin >> dir;
    return Cliente(QString::fromStdString(d), QString::fromStdString(n), QString::fromStdString(t), QString::fromStdString(dir));
}

void VistaConsola::mostrarVehiculos(const vector<Vehiculo>& vs) {
    for (const auto& v : vs)
        cout << v.codigo.toStdString() << " " << v.marca.toStdString() << " " << v.modelo.toStdString()
             << " " << v.anio << " " << v.kilometraje << " km " << v.precio << "$\n";
}

void VistaConsola::mostrarClientes(const vector<Cliente>& cs) {
    for (const auto& c : cs)
        cout << c.dni.toStdString() << " " << c.nombre.toStdString()
             << " " << c.telefono.toStdString() << " " << c.direccion.toStdString() << "\n";
}
