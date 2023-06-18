#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

#include "../includes/soma.h"
#include "../includes/subtracao.h"
#include "../includes/multiplicacao.h"
#include "../includes/divisao.h"
#include "../includes/raiz.h"
#include "../includes/potenciacao.h"

void optHandler(int opt, float val1, float val2){
    printf("-------------------------------------------------------------------------\n");
    printf("Resultado: ");
    switch(opt){
    case 1: printf("%f\n", soma(val1, val2)); break;
    case 2: printf("%f\n", subtracao(val1, val2)); break;
    case 3: printf("%f\n", multiplicacao(val1, val2)); break;
    case 4: printf("%f\nResto: %f\n", divisao(val1, val2), resto(val1, val2)); break;
    case 5: printf("%f\n", raiz(val1)); break;
    case 6: printf("%f\n", potencia(val1)); break;
    default: printf("Valor invalido!\n"); break;
    }
    printf("-------------------------------------------------------------------------\n");
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int opt;
    float val1, val2;

    printf("------------------------------CALCULADORA---------------------------\n");
    while(true){
        printf("[1] Soma.\n");
        printf("[2] Subtração.\n");
        printf("[3] Multiplicação.\n");
        printf("[4] Divisão.\n");
        printf("[5] Raiz.\n");
        printf("[6] Potenciação ao quadrado.\n");
        printf("[7] Sair.\n");
        printf("Digite a operação: ");
        scanf("%d", &opt);

        if(opt == 7){
            return 0;
        }

        printf("Digite o primeiro valor: ");
        scanf("%f", &val1);

        // Caso seja raiz, não pede um segundo valor
        if(opt != 5 && opt != 6){
            printf("Digite o segundo valor: ");
            scanf("%f", &val2);
        }

        optHandler(opt, val1, val2);
    }

    return 0;
}