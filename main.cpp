#include <iostream>

int main()
{
    int max = 6000; // El número máximo al que puede llegar la sequencia de Fibonacci

    int output = 0; // Inicializamos la variable con valor 0 ya que es la semilla de Fibonacci
    int latest1 = 1; // Inicializamos la variable con valor 1 ya que es la semilla de Fibonacci

    do // Ejecutar el bloque de código mientras la condicion sea positiva
    {
        std::cout << output << " "; // Mostramos el valor de output

        output = latest1 + output; // Output es el resultado de sumar latest1 y el mismo. Nos dara el siguiente número de la sequencia de Fibonacci
        latest1 = output - latest1; // La diferencia entre output y latest1 es el valor anterior de output, necesario para seguir con la sequencia
    } while (output < max); // Condición para parar el loop

    return 0;
}