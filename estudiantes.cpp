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

// Funcion para establecer los datos del estudiante
    void establecer_datos(std::string nombre, int edad, std::string grado) {
        this->nombre = std::move(nombre);
        this->edad = edad;
        this->grado = std::move(grado);
    }

    // Funcion para mostrar la informacion del estudiante
    void mostrar_info() {
        cout << "Nombre: " << nombre << std::endl;
        cout << "Edad: " << edad << " años" << std::endl;
        cout << "Grado: " << grado << std::endl;
    }
};

int main() {
    Estudiante estudiante1;

    string nombre;
    int edad;
    string grado;

    cout << "Introduzca el nombre del estudiante: ";
    cin >> nombre;
    cout << "Introduzca la edad del estudiante: ";
    cin >> edad;
    cout << "Introduzca el grado del estudiante: ";
    cin >> grado;

    estudiante1.establecer_datos("Juan", 20, "Ingenieria en Sistemas");
    estudiante1.mostrar_info();

    return 0;
}
