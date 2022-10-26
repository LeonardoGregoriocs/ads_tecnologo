#include <iostream>

using namespace std;

int main()
{
    int i;

    do {
        printf("\n Digite um numero do sabor \n");

        printf("\t (1) ... Flocos \n");
        printf("\t (2) ... Morango \n");
        printf("\t (1) ... Chocolate \n");

        scanf("%d", &i);

    } while((i < 1) || (i > 3));

    switch(i) {
        case 1:
            printf("\t\t Você escolheu flocos!");
            break;

        case 2:
            printf("\t\t Você escolheu morango!");
            break;

        case 3:
            printf("\t\t Você escolheu chocolate!");
            break;

    }
    return 0;
}
