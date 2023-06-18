#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include "../includes/soma.h"
#include "../includes/subtracao.h"
#include "../includes/multiplicacao.h"
#include "../includes/divisao.h"
#include "../includes/raiz.h"

void optHandler(int opt, float val1, float val2){
  printf("-------------------------------------------------------------------------\n");
  printf("Resultado: ");
  switch(opt){
    case 1: printf("%f\n", soma(val1, val2)); break;
    case 2: printf("%f\n", subtracao(val1, val2)); break;
    case 3: printf("%f\n", multiplicacao(val1, val2)); break;
    case 4: printf("%f\nResto: %f\n", divisao(val1, val2), resto(val1, val2)); break;
    case 5: printf("%f\n", raiz(val1)); break;
    case 6: /* Chamar a função aqui dentro de um printf! */ break;
  }
  printf("-------------------------------------------------------------------------\n");
}

int main(){
  setlocale(LC_ALL, "Portuguese");
  int opt;
  float val1, val2;

  printf("------------------------------CALCULADORA---------------------------\n");
  do{
    printf("[1] Soma.\n");
    printf("[2] Subtração.\n");
    printf("[3] Multiplicação.\n");
    printf("[4] Divisão.\n");
    printf("[5] Raiz.\n");
    printf("[6] Sair.\n");
    printf("Digitea a operação: ");
    scanf("%d", &opt);

    if(opt == 6){
      return 0;
    }

    printf("Digite o primeiro valor: ");
    scanf("%f", &val1);

    // Caso seja raiz, não pede um segundo valor
    if(opt != 5){
      printf("Digite o segundo valor: ");
      scanf("%f", &val2);
    }

    optHandler(opt, val1, val2);
  }while(opt != 6);

  return 0;
}