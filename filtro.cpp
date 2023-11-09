#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Clase Estudiante
class Estudiante {
public:
    string nombre;
    int edad;
    string grado;

    Estudiante(string n, int e, string g) : nombre(n), edad(e), grado(g) {}
};

// Función para filtrar estudiantes por grado
vector<Estudiante> filtrar_por_grado(const vector<Estudiante>& estudiantes, const string& grado) {
    vector<Estudiante> estudiantesFiltrados;

    for (const Estudiante& estudiante : estudiantes) {
        if (estudiante.grado == grado) {
            estudiantesFiltrados.push_back(estudiante);
        }
    }

    return estudiantesFiltrados;
}

int main() {
    // Ejemplo de uso
    vector<Estudiante> listaEstudiantes = {
            {"Juan", 15, "Noveno"},
            {"Maria", 16, "Decimo"},
            {"Pedro", 14, "Noveno"},
            {"Ana", 15, "Decimo"}
    };

    // Filtrar estudiantes por grado "Decimo"
    string gradoFiltrado = "Decimo";
    vector<Estudiante> estudiantesFiltrados = filtrar_por_grado(listaEstudiantes, gradoFiltrado);

    // Mostrar estudiantes filtrados
    cout << "Estudiantes de " << gradoFiltrado << " grado:" << endl;
    for (const Estudiante& estudiante

