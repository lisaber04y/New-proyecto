// main.cpp
#include "Reproductor.cpp"
#include <iostream>

using namespace std;

int main() {
    Reproductor reproductor;
    int opcion;

    do {
        cout << "\n1. Reproducir Cancion\n";
        cout << "2. Detener Reproduccion\n";
        cout << "3. Información de la canción\n";
        cout << "4. Salir\n";
        cout << "\nIngrese su opcion: ";
        cin >> opcion;
        cout << "\n ";

        switch (opcion) {
            case 1: {
                string titulo, artista;
                int duracion;

                cin.ignore();  // Para manejar el salto de línea en el buffer
                cout << "\nIngrese el titulo de la cancion: ";
                getline(std::cin, titulo);

                cout << "\nIngrese el artista de la cancion: ";
                getline(std::cin, artista);

                cout << "\nIngrese la duracion de la cancion en segundos: ";
                cin >> duracion;

                Cancion nuevaCancion(titulo, artista, duracion);
                reproductor.reproducirCancion(nuevaCancion);
                break;
            }
            case 2:
                reproductor.detenerReproduccion();
                break;
            case 3:
                std::cout << "\n\nInformacion de la Cancion:\n";
                std::cout << reproductor.getCancionReproduciendo().obtenerInformacion() << std::endl;
                break;
            case 4:
                std::cout << "\nSaliendo del programa.\n";
                break;
            default:
                std::cout << "\nOpcion invalida. Intente de nuevo.\n";
        }
    } while (opcion != 4);

    return 0;
}
