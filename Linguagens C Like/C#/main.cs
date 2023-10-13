using System;

static class Program {
  public static void Main (string[] args) {
    Console.WriteLine ("\n\tCálculo do Peso Ideal\n");
  
    bool ERRO;
    double altura;
    char genero;
    double pesoIdeal;
      
    do
    {
      Console.Write("\nDigite sua altura: ");
      altura = double.Parse(Console.ReadLine());
      ERRO = altura < 0;
    }
    while(ERRO);
    
    do 
    {
      Console.Write("\nDigite seu gênero[M/F]: ");
      genero = char.Parse(Console.ReadLine());
      ERRO = ((genero != 'M') && (genero != 'F') && (genero != 'm') && (genero != 'f'));
    }
    while(ERRO);
    
    if((genero == 'M') || (genero == 'm'))
    {
      pesoIdeal = 72.7 * altura - 58;
    }
    else
    {
      pesoIdeal = 62.1 * altura - 44.7;
    }
    
    Console.WriteLine("\nSeu peso ideal é "+pesoIdeal+"");
      
    return;
      
    }
  }
  