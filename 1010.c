/*
    Neste problema, deve-se ler o c?digo de uma pe?a 1, o n?mero de pe?as 1, o valor unit?rio de cada pe?a 1, o c?digo de uma pe?a 2, o n?mero de pe?as 2 e o valor unit?rio de cada pe?a 2. Ap?s, calcule e mostre o valor a ser pago.

    Entrada
    O arquivo de entrada cont?m duas linhas de dados. Em cada linha haver? 3 valores, respectivamente dois inteiros e um valor com 2 casas decimais.

    Sa?da
    A sa?da dever? ser uma mensagem conforme o exemplo fornecido abaixo, lembrando de deixar um espa?o ap?s os dois pontos e um espa?o ap?s o "R$". O valor dever? ser apresentado com 2 casas ap?s o ponto.
*/
#include <stdio.h>
 
int main() {
 
    int CodPeca1, QntPeca1, CodPeca2, QntPeca2;
    float UnitaryValue1, UnitaryValue2, Total;

    scanf ("%i %i %f", &CodPeca1, &QntPeca1, &UnitaryValue1);
    scanf ("%i %i %f", &CodPeca2, &QntPeca2, &UnitaryValue2);

    Total = (QntPeca1 * UnitaryValue1) + (QntPeca2 * UnitaryValue2);

    printf ("VALOR A PAGAR: R$ %.2f\n", Total);

    return 0;
}