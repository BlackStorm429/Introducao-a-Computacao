Início

Escreva: Cálculo do Peso Ideal

Declare altura: real
Declare genero: caracter
Declare bool: booleano
Declare peso ideal: real

Faça:
    Escreva: digite sua altura
    Leia: altura
    Erro = altura < 0
Enquanto for diferente de erro

Faça:
    Escreva: Digite seu gênero [M/F]
    Leia: gênero
    Erro = genero diferente de 'm' e 'M' e 'f' e 'F'
Enquanto for diferente de erro

Se:
    Genero for 'm' ou 'M'
    Faça:
        Peso ideal = 72.7 * altura - 58

Se não:
    Peso ideal = 62.1 * altura - 44.7

Escreva: Seu peso ideal é x (resultado do cálculo de peso ideal)

Fim