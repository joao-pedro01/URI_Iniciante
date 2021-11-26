/*
    Entrada
    O arquivo de entrada contém dois valores inteiros correspondentes ao código e à quantidade de um item conforme tabela acima.

    Saída
    O arquivo de saída deve conter a mensagem "Total: R$ " seguido pelo valor a ser pago, com 2 casas após o ponto decimal.
*/
#include <stdio.h>
 
int main() {
 
    int code, code2;
    float value;

    scanf ("%i", &code2);

    if (code == 1)
    {
        value = 4.00;
    }
    else if (code == 2)
    {
        value = 4.50;
    }
    else if (code == 3)
    {
        value = 5.00;
    }
    else if (code == 4)
    {
        value = 2.00;
    }
    else if (code == 5)
    {
        value = 1.50;
    }

    if (code2 == 1 || code2 == 2 || code2 == 3 || code2 == 4 || code2 == 5)
    {
        Code();
    }

    printf ("%.2f\n", value);
    printf ("%i\n", code2);

    return 0;
}
int Code ()
{
    int code2;
    float value;
    if (code2 == 1)
    {
        value = 4.00;
    }
    else if (code2 == 2)
    {
        value = 4.50;
    }
    else if (code2 == 3)
    {
        value = 5.00;
    }
    else if (code2 == 4)
    {
        value = 2.00;
    }
    else if (code2 == 5)
    {
        value = 1.50;
    }
}