#ifndef MAXHEAP_H
#define MAXHEAP_H

#include "Reserva.h"

const int CAPACIDAD_HEAP = 853;

class MaxHeap {
private:
    Reserva* datos[CAPACIDAD_HEAP];
    int n;

    int padre(int i);
    int izquierdo(int i);
    int derecho(int i);

    bool mayorPrioridad(Reserva* a, Reserva* b);
    void intercambiar(Reserva* heap[], int i, int j);
    void heapifyUp(Reserva* heap[], int i);
    void heapifyDown(Reserva* heap[], int total, int i);

public:
    MaxHeap();

    bool insertar(Reserva* r);
    Reserva* verMax();
    Reserva* extraerMax();

    int buscarPosicion(string idReserva);
    bool eliminarEn(int posicion);

    int listarEnOrden(Reserva* salida[]);

    int tamano();
    bool estaVacio();
    bool estaLleno();
    bool esValido();
};

#endif
