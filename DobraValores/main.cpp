#include <iostream>

using namespace std;

void inserir(int a[])
{
    int i;

    for(i=0;i<3;i++)
    {
        printf("\n Digite o valor %d: ", i);
        scanf("%d", &a[i]);
    }
}

void imprimir(int b[])
{
    int i;

    for(i=0;i<3;i++)
    {
        printf("\n numeros[%d] = %d", i, (2*b[i]));
    }
}

int main()
{
    int numero[3];

    printf("\nPreenchendo o vetor: \n");
    inserir(numero);

    printf("\nValor final: ");
    imprimir(numero);

    return 0;
}
