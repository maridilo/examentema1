#include <iostream>
#include <string>
using namespace std;

// Definicion del alfuncion intercambiar que toma dos punteros a enteros.
void intercambiar(int *a, int *b) {

    // Se declara una variable temp para almacenar temporalmente el valor apuntado por 'a'.
    int temp = *a;

    // Se asigna el valor apuntado por 'b' al espacio de memoria apuntado por 'a'.
    *a = *b;
    // Se asigna el valor almacenado en 'temp' (originalmente apuntado por 'a') al espacio de memoria apuntado por 'b'.
    *b = temp;
}

int main() {
    // Se declaran dos cariables enteras num1 y num2 con valores iniciales.
    int num1 = 5;
    int num2 = 10;

    // Se imprime el valor inicial de num1 y num2.
    std::cout << "Valores originales: num1 = " << num1 << ", num2 = " << num2 << std::endl;

    // Se declaran dos punteros a enteros, ptr1 y ptr2, que apuntan a las direcciones de memoria de num1 y num2, respectivamente.
    int *ptr1 = &num1;
    int *ptr2 = &num2;

    // Se llama a la función intercambiar con los punteros ptr1 y ptr2 como argumentos.
// La función intercambiar modificará los valores a los que apuntan estos punteros.
    intercambiar(ptr1, ptr2);

    // Se imprime el valor final de num1 y num2 despues de la llamada a la funcion interecambiar.
    // Lo que mostará lso calores intercambiados.
    std::cout << "Valores intercambiados: num1 = " << num1 << ", num2 = " << num2 << std::endl;

    return 0;

}