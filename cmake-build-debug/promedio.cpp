#include <iostream>
#include <vector>

// Función para calcular el promedio de calificaciones
double calcular_promedio(const std::vector<int>& calificaciones) {
    // Verificar si el vector de calificaciones está vacío
    if (calificaciones.empty()) {
        std::cerr << "Error: El vector de calificaciones está vacío." << std::endl;
        return 0.0;
    }

    // Calcular la suma de las calificaciones
    int suma = 0;
    for (int calificacion : calificaciones) {
        suma += calificacion;
    }

    // Calcular el promedio
    double promedio = static_cast<double>(suma) / calificaciones.size();
    return promedio;
}

int main() {
    // Ejemplo de uso
    std::vector<int> calificaciones = {85, 90, 75, 88, 92};

    // Calcular el promedio e imprimirlo
    double promedio = calcular_promedio(calificaciones);
    std::cout << "El promedio de calificaciones es: " << promedio << std::endl;

    return 0;
}
