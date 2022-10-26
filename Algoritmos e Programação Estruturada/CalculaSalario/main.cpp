#include <iostream>

using namespace std;

int main()
{
    float salario, INSS, IR, salario_liquido;

    printf("Digite seu salário bruto: ");
    scanf("%f", &salario);

    if (salario <= 1693.72) {
        INSS = salario * 0.08;
    } else if (salario >= 1693.73 && salario <= 2822.90) {
        INSS = salario * 0.09;
    } else if (salario >= 2822.91 && salario <= 5646.80) {
        INSS = salario * 0.11;
    } else {
        INSS = 621.04;
    }

    if (salario <= 1903.98){
        IR = 0.0;
    } else if (salario >= 1903.99 && salario <= 2826.65) {
        IR = salario * 0.075;
    } else if (salario >= 2826.66 && salario <= 3751.05) {
        IR = salario * 0.15;
    } else if (salario >= 3751.06 && salario <= 4664.68) {
        IR = salario * 0.225;
    } else {
        IR = salario * 0.275;
    }

    salario_liquido = (salario - INSS) - IR;

    printf("\n Desconto INSS: %2.f", INSS);
    printf("\n Desconto IR: %2.f", IR);
    printf("\n Salario Líquido: %2.f", salario_liquido);

    return 0;
}
