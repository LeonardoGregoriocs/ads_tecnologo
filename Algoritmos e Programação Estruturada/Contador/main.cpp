#include <iostream>

using namespace std;

int main()
{
    int contador;

    printf("\n Digite um valor: ");
    scanf("%d", &contador);

    for(contador; contador >=1; contador--)
    {
        printf("%d ", contador);
    }

    return 0;

}
