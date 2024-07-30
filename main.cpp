#include <iostream>
#include <fstream>
#include <string>
// Nota de prueba (29/07/2024 por la tarde)
using namespace std;

int main() {
    ofstream archivo("lista_alumnos.txt", ios::app); // Abre el archivo en modo append para agregar al final
    if (!archivo) {
        cerr << "No se pudo abrir el archivo." << endl;
        return 1;
    }

    string nombre;
    char continuar;

    do {
        cout << "Por favor, Introduce el nombre del alumno: ";
        cin >> nombre;
        archivo << nombre << endl;

        cout << "¿Quieres introducir otro nombre? (s/n): ";
        cin >> continuar;
    } while (continuar == 's' || continuar == 'S');

    archivo.close();
    cout << "Lista de alumnos guardada en 'lista_alumnos.txt'." << endl;

    return 0;
}
