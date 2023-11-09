#include<iostream>
#include<string>

using namespace std;

class Profesor {
private:
    string nombre;
    string apellido;
    int edad;
    string materia;
public:
    //constructor
    Profesor(string n, string a, int e, string m) : nombre(n), apellido(a), edad(e), materia(m) {}

    //funcion miembro para mostrar la informacion del profesor
    void mostrar_info() {
        cout << "Nombre: " << nombre << endl;
        cout << "Apellido: " << apellido << endl;
        cout << "Edad: " << edad << " años" << endl;
        cout << "Materia: " << materia << endl;
    }
};

int main() {
    // Crear un profesor
    Profesor profesor1("Juan", "Perez", 30, "Matematicas");

    // Mostrar la informacion del profesor
    profesor1.mostrar_info();

    return 0;
}