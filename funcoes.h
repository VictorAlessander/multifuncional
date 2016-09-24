#include <string.h>
#include <stdlib.h>

void limpar_buffer(){
    #ifdef __linux__
        __fpurge(stdin);
    #endif // __linux__

    #ifdef __WIN32__
        fflush(stdin);
    #endif // __WIN32__
}

void tipo(){
    printf("+-----------------------------+\n|ALUNO = [1] / PROFESSOR = [2]|\n+-----------------------------+\n=> ");
}

char area_aluno(char login[30], char password[30]){
    int erro = 0;

    /* Enquanto erro for menor ou igual a 3 */
    while(erro <= 3){
        printf("User: ");
        fgets(login, 30, stdin);
        printf("Password: ");
        fgets(password, 30, stdin);

        /* Se tamanho do login e password digitados for igual ou superior a 29 caracteres, o programa sofre BREAK */
        if(strlen(login) >= 29 || strlen(password) >= 29){
            printf("[!] Login or password not expected\n");
            break;
        }
        else{
            printf("-------------------------------------------\n");
            printf("Login written: %s", login);
            printf("\nPassword written: %s\n", password);
            printf("-------------------------------------------\n");

            /* Compara se login é igual a "root" e se password é igual a "toor". Se sim, imprime mensagem de sucesso e sofre BREAK */
            if(strcmp(login, "root\n") == 0 && strcmp(password, "toor\n") == 0){
                printf("[*] Login sucessful\n");
                system("cls");
                printf("[*] Bem vindo, Victor!\n");
                break;
            }
                /* Se não acontecer, irá adicionar +1 a variável erro */
            else{
                erro++;
                /* Se erro for menor ou igual a 3, imprime mensagem de senha incorreta */
                if(erro < 3){
                    printf("[!] Login or password is wrong\n");
                }
                /* Se erro for maior que 3, o programa imprime mensagem e sofre BREAK */
                else if(erro >= 3){
                    printf("Incorrect for 3 times\nBye\n");
                    break;
                }
            }
        }
    }
}

char area_professor(char login[30], char password[30]){
    int erro = 0;

    /* Enquanto erro for menor ou igual a 3 */
    while(erro <= 3){
        printf("User: ");
        fgets(login, 30, stdin);
        printf("Password: ");
        fgets(password, 30, stdin);

        /* Se tamanho do login e password digitados for igual ou superior a 29 caracteres, o programa sofre BREAK */
        if(strlen(login) >= 29 || strlen(password) >= 29){
            printf("[!] Login or password not expected\n");
            break;
        }
        else{
            printf("-------------------------------------------\n");
            printf("Login written: %s", login);
            printf("\nPassword written: %s\n", password);
            printf("-------------------------------------------\n");

            /* Compara se login é igual a "root" e se password é igual a "toor". Se sim, imprime mensagem de sucesso e sofre BREAK */
            if(strcmp(login, "joao\n") == 0 && strcmp(password, "bosco\n") == 0){
                printf("[*] Login sucessful\n");
                system("cls");
                printf("[*] Bem vindo, João!\n");
                break;
            }
                /* Se não acontecer, irá adicionar +1 a variável erro */
            else{
                erro++;
                /* Se erro for menor ou igual a 3, imprime mensagem de senha incorreta */
                if(erro < 3){
                    printf("[!] Login or password is wrong\n");
                }
                /* Se erro for maior que 3, o programa imprime mensagem e sofre BREAK */
                else if(erro >= 3){
                    printf("Incorrect for 3 times\nBye\n");
                    break;
                }
            }
        }
    }
}

void menu_alunos(){

    printf("\nOpções disponíveis\n"
    "+--------------------------+\n"
    "|[1] Múltiplo de cinco     |\n"
    "|[2] Par ou ímpar          |\n"
    "|[3] Valor ao cubo         |\n"
    "|[4] Sucessor e antecessor |\n"
    "|[5] Calculadora           |\n"
    "|[0] Sair                  |\n"
    "+--------------------------+\n");
}

void menu_professor(){

    printf("\nOpções disponíveis\n"
    "+--------------------------+\n"
    "|[1] Múltiplo de cinco     |\n"
    "|[2] Par ou ímpar          |\n"
    "|[3] Valor ao cubo         |\n"
    "|[4] Sucessor e antecessor |\n"
    "|[5] Calculadora           |\n"
    "|[6] Situação dos Alunos   |\n"
    "|[0] Sair                  |\n"
    "+--------------------------+\n");
}

int mult_cinco(int a){
    if(a % 5 == 0){
        return "É múltiplo de cinco";
    }
    else{
        return "Não é múltiplo de cinco";
    }
}

int sucessor_antecessor(int a){
    return a;
}

int cubo(int a){
    return pow(a, 3);
}

int par_impar(int a){
    if(a % 2 == 0){
        return "Valor par";
    }
    else{
        return "Valor ímpar";
    }

}

float soma(float a, float b){
    return a + b;
}

float subtracao(float a, float b){
    return a - b;
}

float multiplicacao(float a, float b){
    return a * b;
}

float divisao(float a, float b){
    return a / b;
}

float notas_alunos(){
    char nomes[6][30], situacao[6][10];
    float prova1[6], prova2[6], media[6];
    int x;

    /* Insere os nomes na matriz nomes */
    for(x = 0; x < 6; x++){
        printf("Aluno [%d]: ", x);
        fgets(nomes[x], 30, stdin);
        limpar_buffer();
    }

    /* Insere os valores na matriz prova1 */
    for(x = 0; x < 6; x++){
        printf("Primeira nota [%d]: ", x);
        scanf("%f", &prova1[x]);
        limpar_buffer();
    }

    /* Insere os valores na matriz prova2 */
    for(x = 0; x < 6; x++){
        printf("Segunda nota [%d]: ", x);
        scanf("%f", &prova2[x]);
        limpar_buffer();
    }

    /* Insere a soma da matriz prova1 + prova2 na matriz media */
    for(x = 0; x < 6; x++){
        media[x] = (prova1[x] + prova2[x]) / 2;
    }

    /* Insere a situação do aluno no vetor situacao */
    for(x = 0; x < 6; x++){
        if(media[x] > 5){
            strcpy(situacao[x], "Aprovado");
        }
        else{
            strcpy(situacao[x], "Reprovado");
        }
    }

    system("cls");
    /* Exibe a situação do aluno por intermédio do vetor situação */
    for(x = 0; x < 6; x++){
        printf("Aluno: %s\n", nomes[x]);
        printf("Situacao: %s\n", situacao[x]);
        printf("--------------------\n");
    }
}
