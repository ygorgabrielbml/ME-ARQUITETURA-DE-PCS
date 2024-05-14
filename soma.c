#include <stdio.h>

int main()
{
  printf("Selecione dois valores para fazer a soma.\n");

  double a, b, resultado;

  scanf("%lf%lf", &a, &b);

  resultado = a + b;

  printf("O resultado da operacao eh: %.2lf.", resultado);

   return 0;
}
