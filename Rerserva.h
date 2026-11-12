#ifndef RESERVA_H
#define RESERVA_H

#include <string>
using namespace std;

struct Reserva {
    string idReserva;
    string dni;
    string pasajero;
    string codigoVuelo;
    string origen;
    string destino;
    string fecha;
    string hora;
    string clase;
    string categoria;
    double precio;
    string estado;
    int ordenLlegada;

    Reserva() {
        precio = 0;
        ordenLlegada = 0;
    }
};

bool ocupaAsiento(string estado);


int valorCategoria(string categoria);

bool claseValida(string clase);
bool categoriaValida(string categoria);
bool estadoValido(string estado);
bool fechaValida(string fecha);
bool horaValida(string hora);

int compararClave(Reserva* a, Reserva* b);

bool leerReservaCSV(string linea, Reserva* r);

void mostrarReserva(Reserva* r);
void mostrarEncabezadoLista();
void mostrarReservaLinea(Reserva* r);

#endif