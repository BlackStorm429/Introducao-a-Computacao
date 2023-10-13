#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <locale.h>

int main(void) {
  setlocale (LC_ALL, "Portuguese");
  
  printf("\n\tCálculo do Peso Ideal\n");
  
  bool ERRO;
  float altura;
  char genero;
  float pesoIdeal;
  
  do
  {
    printf("\nDigite sua altura: ");
    scanf("%f",&altura);
    ERRO = altura < 0;
  }
  while(ERRO);

  do 
  {
    printf("\nDigite seu gênero[M/F]: ");
    scanf(" %c",&genero);
    genero = toupper(genero);
    ERRO = (genero != 'M') && (genero != 'F');
  }
  while(ERRO);

  if(genero == 'M')
  {
    pesoIdeal = 72.7 * altura - 58;
  }
  else
  {
    pesoIdeal = 62.1 * altura - 44.7;
  }

  printf("\nSeu peso ideal é %f",pesoIdeal);
  
  return 0;
}