/*
	Leia dois valores inteiros.
	A seguir, calcule o produto entre estes dois valores e atribua esta opera��o � vari�vel PROD.
	A seguir mostre a vari�vel PROD com mensagem correspondente.   

	Entrada
	O arquivo de entrada cont�m 2 valores inteiros.
	
	Sa�da
	Imprima a mensagem "PROD" e a vari�vel PROD conforme exemplo abaixo, com um espa�o em branco antes e depois da igualdade.
	N�o esque�a de imprimir o fim de linha ap�s o produto, caso contr�rio seu programa apresentar� a mensagem: �Presentation Error�.
*/
#include <stdio.h>
 
int main() {
 
	double NotaA, NotaB, Media;
	
	scanf ("%lf", &NotaA);
	scanf ("%lf", &NotaB);
	
	Media = ((NotaA * 3.5) + (NotaB * 7.5)) / 11;
	
	printf ("MEDIA = %.5lf", Media);
	
	return 0;
}
