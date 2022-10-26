#include <iostream>

using namespace std;

int main()
{
    char nome[30];
    char endereco[30];
    int idade;

    printf("Nome: \n");
    scanf("%s", &nome);

    printf("Endereço: \n");
    scanf("%s", &endereco);

    printf("Idade: \n");
    scanf("%d", &idade);

    printf("\n Nome: %s", nome);
    printf("\n Endereco: %s", endereco);
    printf("\n Idade: %d", idade);

    return 0;
}
