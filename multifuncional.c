#include <stdio.h>
#include <math.h>
#include <locale.h>
#include "funcoes.h" /* Arquivo com as fun��es criadas para o programa */
#include <string.h>
#include <stdlib.h>

/*
 * FUNCIONALIDADES DO PROGRAMA
 * ---------------------------
 * 1- SUCESSOR E ANTECESSOR
 * 2- VALOR M�LTIPLO DE CINCO
 * 3- VALOR AO CUBO
 * 4- CALCULADORA B�SICA
 * 5- N�MERO PAR OU �MPAR
 * 6- CONTADOR DE STRING (EM BREVE)
 */

int main(){

    int area; /* Aluno ou professor*/
    char login[30], password[30]; /* Vetores para autentica��o */

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
