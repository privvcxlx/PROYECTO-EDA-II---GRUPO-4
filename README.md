# PROYECTO-EDA-II---GRUPO-4
El sistema registra, busca, actualiza y cancela reservas de pasajeros, y maneja una lista de espera por vuelo cuando el avión está lleno. Carga más de 10,000 reservas desde archivos .csv.

## Estructuras
Cada reserva se guarda a la vez en varias estructuras, y cada una responde de forma eficiente a un tipo de consulta distinto.

| Estructura | Clave | Para qué se usa | Costo |
| Tabla hash con encadenamiento | idReserva | Buscar, actualizar y cancelar por ID. Detecta IDs repetidos. | O(1) promedio |
| Árbol AVL | fecha + hora + idReserva | Listado cronológico y consulta por rango de fechas. | O(log n) |
| Max-heap (uno por vuelo) | categoría del pasajero y orden de llegada | Lista de espera: sale primero el de mayor prioridad. | O(log n) |

## Arquitectura
El proyecto está en una sola carpeta a propósito: se compila con un solo comando y los .csv se leen desde la carpeta en la que se ejecuta el programa.

```
EDA2-Reservas-Aereas/
├── README.md
├── .gitignore
│
├── Reserva.h / Reserva.cpp        
├── Utilidades.h / Utilidades.cpp
├── TablaHash.h / TablaHash.cpp
├── ArbolAVL.h / ArbolAVL.cpp
├── MaxHeap.h / MaxHeap.cpp
├── Vuelo.h
├── Sistema.h / Sistema.cpp
├── Menu.h / Menu.cpp
├── Pruebas.h / Pruebas.cpp
├── main.cpp
│
├── vuelos.csv
├── reservas_pequeno.csv
├── reservas_masivo.csv
│
└── generador/
    └── generador.cpp
```
