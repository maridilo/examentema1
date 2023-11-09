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
        this->nombre = nombre;
        this->edad = edad;
        this->grado = grado;
    }

    // Funcion para mostrar la informacion del estudiante
    void mostrar_info() {
        cout << "Nombre: " << nombre << std::endl;
        cout << "Edad: " << edad << " años" << std::endl;
        cout << "Grado: " << grado << std::endl;
    }
};