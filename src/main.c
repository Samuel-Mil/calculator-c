#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include "../includes/soma.h"

void optHandler(int opt, float val1, float val2){
  printf("-------------------------------------------------------------------------\n");
  printf("Resultado: ");
  switch(opt){
    case 1: printf("%f\n", soma(val1, val2)); break;
    case 2: /* Chamar a função aqui dentro de um printf! */ break;
    case 3: /* Chamar a função aqui dentro de um printf! */ break;
    case 4: /* Chamar a função aqui dentro de um printf! */ break;
    case 5: /* Chamar a função aqui dentro de um printf! */ break;
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
    printf("[5] Resto.\n");
    printf("[6] Raiz.\n");
    printf("[7] Sair.\n");
    printf("Digitea a operação: ");
    scanf("%d", &opt);

    printf("Digite o primeiro valor: ");
    scanf("%f", &val1);

    // Caso seja raiz, não pede um segundo valor
    if(opt != 6){
      printf("Digite o segundo valor: ");
      scanf("%f", &val2);
    }

    optHandler(opt, val1, val2);
  }while(opt != 6);

  return 0;
}