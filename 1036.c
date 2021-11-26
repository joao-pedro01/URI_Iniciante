/*
    Leia 3 valores de ponto flutuante e efetue o c�lculo das ra�zes da equa��o de Bhaskara. Se n�o for poss�vel calcular as ra�zes, mostre a mensagem correspondente ?Impossivel calcular?, caso haja uma divis�o por 0 ou raiz de numero negativo.

    Entrada
    Leia tr�s valores de ponto flutuante (double) A, B e C.

    Sa�da
    Se n�o houver possibilidade de calcular as ra�zes, apresente a mensagem "Impossivel calcular". Caso contr�rio, imprima o resultado das ra�zes com 5 d�gitos ap�s o ponto, com uma mensagem correspondente conforme exemplo abaixo. Imprima sempre o final de linha ap�s cada mensagem.
*/    
#include <stdio.h>
#include <math.h>
 
int main() 
{
    double r1, r2, a, b, c, delta;

    scanf ("%lf", &a);
    scanf ("%lf", &b);
    scanf ("%lf", &c);

    delta = pow(b,2) - 4 * a * c;

    if (delta < 0 || a == 0)
    {
        printf ("Impossivel calcular\n");
    }
    else
    {
        r1 = ((-b + sqrt(delta)) / (2 * a));
        r2 = ((-b - sqrt(delta)) / (2 * a));

        printf ("R1 = %.5lf\n", r1);
        printf ("R2 = %.5lf\n", r2);
    }

    return 0;
}