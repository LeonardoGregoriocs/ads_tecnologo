#include <iostream>

using namespace std;

int fibonacci (int numero) {
    if (numero == 0) {
        return 0;
    }

    else if (numero == 1) {
        return 1;
    }
    else {
        return fibonacci(numero - 1) + fibonacci(numero -2);
    }
}

int main()
{
    int numero, resultado;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    resultado = fibonacci(numero);
    printf("O último número é: %d", resultado);

    return 0;
}
