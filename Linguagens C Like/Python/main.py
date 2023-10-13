print("\n\tCálculo do Peso Ideal\n")

altura = 0

while (altura <= 0):
  altura = float(input("\nDigite sua altura: "))

str(input())
genero = 0

while (genero != 'M' and genero != 'm' and genero != 'F' and genero != 'f'):
  genero = str(input("\nDigite seu gênero [M/F]: "))
  if (genero == 'm' or genero == 'f' or genero == 'M' or genero == 'F'):
    break

if(genero == 'M' or 'm'):
  pesoIdeal = 72.7 * altura - 58 
  
if(genero == 'F' or genero == 'f'):
  pesoIdeal = 62.1 * altura - 44.7

print("\n\nSeu peso ideal é ",pesoIdeal,)

    
