#include <iostream>
#include <string>
using namespace std;
class Estudiante {
private:
    string nombre;
    int edad;
    string grado;

public:
    // Constructor para inicializar las propiedades del estudiante
    Estudiante() {
        nombre = "";
        edad = 0;
        grado = "";
    }

    // Función para establecer los datos del estudiante
    void establecer_datos(std::string nombre, int edad, std::string grado) {
        this->nombre = nombre;
        this->edad = edad;
        this->grado = grado;
    }

    // Función para mostrar la información del estudiante
    void mostrar_info() {
        cout << "Nombre: " << nombre << std::endl;
        cout << "Edad: " << edad << " años" << std::endl;
        cout << "Grado: " << grado << std::endl;
    }
};

int main() {
    Estudiante estudiante;

    string nombre;
    int edad;
    string grado;

    // Solicitar al usuario que introduzca los datos del estudiante
    cout << "Introduce el nombre del estudiante: ";
    getline(std::cin, nombre);

    cout << "Introduce la edad del estudiante: ";
    cin >> edad;

    cin.ignore(); // Para consumir el salto de línea pendiente

    cout << "Introduce el grado del estudiante: ";
    getline(std::cin, grado);

    // Establecer los datos del estudiante
    estudiante.establecer_datos(nombre, edad, grado);

    // Mostrar la información del estudiante
    estudiante.mostrar_info();

    return 0;
}
