
void menu(){

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
