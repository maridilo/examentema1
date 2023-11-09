#include <iostream>
#include <string>

using namespace std;

class RegistroAsistencia {
private:
    string fecha;
    string estado;

public:
    // Constructor
    RegistroAsistencia(string f, string e) : fecha(f), estado(e) {}

    // Función miembro para mostrar la asistencia
    void mostrar_asistencia() {
        cout << "Fecha: " << fecha << endl;
        cout << "Estado: " << estado << endl;
    }
};

int main() {
    // Crear un registro de asistencia
    RegistroAsistencia registro1("2023-11-09", "Asistió");

    // Mostrar la asistencia
    registro1.mostrar_asistencia();

    return 0;
}
