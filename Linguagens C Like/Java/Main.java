import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    
    System.out.println("\n\tCálculo do Peso Ideal\n");

    double altura;
    char genero;
    boolean ERRO;
    double pesoIdeal;

    Scanner entrada = new Scanner (System.in);

    do
    {
      System.out.print("\nDigite sua altura: ");
      altura = entrada.nextDouble();
      ERRO = altura < 0;
    }
    while(ERRO);

    do 
    {
      System.out.print("\nDigite seu gênero [M/F]: ");
      genero = entrada.next().charAt(0);
      ERRO = (genero != 'm') && (genero != 'f') && (genero != 'M') && (genero != 'F');
    }
    while(ERRO);

    if(genero == 'm')
    {
      pesoIdeal = 72.7 * altura - 58.0;
    }
    else
    {
      pesoIdeal = 62.1 * altura - 44.7;
    }
    
    System.out.printf("\nSeu peso ideal é %f", pesoIdeal);
    entrada.close();
  }
} 