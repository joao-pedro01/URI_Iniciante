/*
    Voc� deve fazer um programa que leia um valor qualquer e apresente uma mensagem dizendo em qual dos seguintes intervalos ([0,25], (25,50], (50,75], (75,100]) este valor se encontra. Obviamente se o valor n�o estiver em nenhum destes intervalos, dever� ser impressa a mensagem ?Fora de intervalo?.

    O s�mbolo ( representa "maior que". Por exemplo:
    [0,25]  indica valores entre 0 e 25.0000, inclusive eles.
    (25,50] indica valores maiores que 25 Ex: 25.00001 at� o valor 50.0000000

    Entrada
    O arquivo de entrada cont�m um n�mero com ponto flutuante qualquer.

    Sa�da
    A sa�da deve ser uma mensagem conforme exemplo abaixo.
*/
#include <stdio.h>
 
int main() {
 
    double Num1;

    scanf ("%lf", &Num1);
    
    if (Num1 < 0 || Num1 > 100.00000)
    {
        printf ("Fora de intervalo\n");
    }
    else if (Num1 > 0 && Num1 < 25.00001)
    {
        printf ("Intervalo (0,25]\n");
    }
    else if (Num1 > 25.0000 && Num1 < 50.00001)
    {
        printf ("Intervalo (25,50]\n");
    }
    else if (Num1 > 50.0000 && Num1 < 75.00001)
    {
        printf ("Intervalo (50,75]\n");
    }
    else if (Num1 > 75.00000 && Num1 < 100.00001)
    {
        printf ("Intervalo (75,100]\n");
    }

    return 0;
}