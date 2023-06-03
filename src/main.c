#include <stdio.h>
#include "../includes/soma.h"

int main()
{
  int soman1, soman2, a, resultado;
  printf("escolha a operação:\n");
  scanf("%d", &a);

  switch (a) {
    case 1:
      resultado = soma(soman1,soman2);
      printf("%d\n", resultado);
  }
  return 0;
}
