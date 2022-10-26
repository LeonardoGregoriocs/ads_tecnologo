#include <iostream>

using namespace std;

int main() {

    float nota1, nota2, media;

    printf("Insira nota 1: ");
    scanf("%f", &nota1);

    printf("Insira nota 2: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("Media = %f", media);

    return 0;
}
