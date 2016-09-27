#include <stdio.h>
#include <math.h>
#include <locale.h>
#include "funcoes.h" /* Arquivo com as funções criadas para o programa */
#include <string.h>
#include <stdlib.h>

/*
 * FUNCIONALIDADES DO PROGRAMA
 * ---------------------------
 * 1- SUCESSOR E ANTECESSOR
 * 2- VALOR MÚLTIPLO DE CINCO
 * 3- VALOR AO CUBO
 * 4- CALCULADORA BÁSICA
 * 5- NÚMERO PAR OU ÍMPAR
 * 6- CONTADOR DE STRING (EM BREVE)
 */

int main(){

    int area; /* Aluno ou professor*/
    char login[30], password[30]; /* Vetores para autenticação */

    setlocale(LC_ALL,"");

    printf("\t\t\tBem vindo!\n");

    tipo();
    scanf("%d", &area);
    limpar_buffer();

    if(area == 1){
        area_aluno(login, password);
        funcionalidades_aluno();
    }
    else if(area == 2){
        area_professor(login, password);
        funcionalidades_professor();
    }
}
