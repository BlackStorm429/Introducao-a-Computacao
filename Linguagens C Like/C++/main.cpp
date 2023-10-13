#include <iostream>
using namespace std;

int main() {
  std::cout << "\n\tCálculo do Peso Ideal\n";
  
  bool ERRO;
  float altura;
  char genero;
  float pesoIdeal;
  
  do
  {
    cout << "\nDigite sua altura: ";
    cin >> altura;
    ERRO = altura < 0;
  }
  while(ERRO);

  do 
  {
    cout << "\nDigite seu gênero[M/F]: ";
    cin >> genero;
    genero = toupper(genero);
    ERRO = (genero != 'M')&&(genero != 'F');
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

  cout << "\nSeu peso ideal é " << pesoIdeal;
  
  return 0;
}