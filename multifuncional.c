#include <stdio.h>
#include <math.h>
#include <locale.h>
#include "funcoes.h" /* Arquivo com as funções criadas para o programa */

/*
 * FUNCIONALIDADES DO PROGRAMA
 * ---------------------------
 * 1- SUCESSOR E ANTECESSOR
 * 2- VALOR MÚLTIPLO DE CINCO
 * 3- VALOR AO CUBO
 * 4- CALCULADORA BÁSICA
 * 5- NÚMERO PAR OU ÍMPAR
 */

int main(){
    float num1, num2; /* Calculadora */
    int operacao; /* Calculadora */
    int valor1; /* Operações com inteiros */
    int opcao; /* Opções do menu */

    setlocale(LC_ALL,"");

    printf("\t\t\tBem vindo!\n");

    do{
        menu();
        scanf("%d", &opcao);

        switch(opcao){
        case 0:
            printf("[*] Programa finalizado\n");
            break;

        case 1:
            printf("\nInsira o valor: ");
            scanf("%d", &valor1);
            printf("%s", mult_cinco(valor1));
            break;

        case 2:
            printf("\nValor a ser avaliado: ");
            scanf("%d", &valor1);
            printf("%s", par_impar(valor1));
            break;

        case 3:
            printf("\nInsira o valor: ");
            scanf("%d", &valor1);
            printf("%d ao cubo = %d", valor1, cubo(valor1));
            break;

        case 4:
            printf("\nValor: ");
            scanf("%d", &valor1);
            printf("Sucessor: %d / Antecessor: %d", sucessor_antecessor(valor1) + 1, sucessor_antecessor(valor1) - 1);
            break;

        default:
            printf("[!] Opção inválida");
            break;

        case 5:
            printf("Primeiro valor: ");
            scanf("%f", &num1);

            printf("Segundo valor: ");
            scanf("%f", &num2);

            printf("Operações disponíveis:\nSoma [1] / Subtração [2] / Multiplicação [3] / Divisão [4]\n>> ");
            scanf("%d", &operacao);

            switch(operacao){

            case 1:
                printf("\nResultado: %.2f", soma(num1, num2));
                break;

            case 2:
                printf("\nResultado: %.2f", subtracao(num1, num2));
                break;

            case 3:
                printf("\nResultado: %.2f", multiplicacao(num1, num2));
                break;

            case 4:
                printf("\nResultado: %.2f", divisao(num1, num2));
                break;

            default:
                printf("\n[!] Operação inválida");
                break;
            }
        }

    }while(opcao != 0);
}
