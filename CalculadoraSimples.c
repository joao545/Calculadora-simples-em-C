#include <stdio.h>
#include <stdlib.h>


int main(){
    //Operadores que vão ser usados na operação matemática, resultado vai ser a soma de tal operação, opcao a ser escolhida da lista de operações matemáticas.
    float operador1, operador2, resultado;
    int opcao;

    //Lista de operações matemáticas
    printf("    Selecione uma operacao matematica! \n");
    printf("    1 - Adicao    \n");
    printf("    2 - Subtracao    \n");
    printf("    3 - Multiplicacao   \n");
    printf("    4 - Divisao    \n\n");

    //Digite o número de uma operação matemática.
    printf("Escolha uma operacao matematica: ");
    scanf("%d", &opcao);

    //Dependendo de uma opção escolhida, vai retornar uma soma de tal operação.
    switch (opcao)
    {
    case 1:
        printf("Digite os operadoes: ");
        scanf("%f %f", &operador1, &operador2);
        resultado = operador1 + operador2;
        printf("Soma da adicao: %.2f", resultado);
        break;

    case 2:
        printf("Digite os operadoes: ");
        scanf("%f %f", &operador1, &operador2);
        resultado = operador1 - operador2;
        printf("Soma da subtracao: %.2f", resultado);
        break;

    case 3:
        printf("Digite os operadoes: ");
        scanf("%f %f", &operador1, &operador2);
        resultado = operador1 * operador2;
        printf("Soma da multiplicacao: %.2f", resultado);
        break;

    case 4:
        printf("Digite os operadoes: ");
        scanf("%f %f", &operador1, &operador2);
        resultado = operador1 / operador2;
        printf("Soma da divisao: %.2f", resultado);
        break;

    default:
        break;
    }


    return 0;
}