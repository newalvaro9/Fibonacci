#include <iostream>

int main()
{
    int max = 31; // La posición que queremos obtener

    double output = 0; // Inicializamos la variable con valor 0 ya que es la semilla de Fibonacci
    double latest = 1; // Inicializamos la variable con valor 1 ya que es la semilla de Fibonacci

	for(int i = 0; i < max; i++) // Condicion para el loop
	{
		std::cout << output << " ";
		
		output = latest + output; // Output es el resultado de sumar latest1 y el mismo. Nos dara el siguiente número de la sequencia de Fibonacci
		
		latest = output - latest; // La diferencia entre output y latest1 es el valor anterior de output, necesario para seguir con la sequencia
	}
    return 0;
}