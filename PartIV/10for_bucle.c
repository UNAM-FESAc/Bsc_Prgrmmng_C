/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <stdio.h>
int main()
{
	int inicial, final, i, numero, prod_nume;
	int sum_nume;
	puts("Este programa te imprime una tabla de multiplicar\n");
	puts("de un NUMERO desde un numero inicial\n");
	puts("hasta un numero final");
	printf("Valor inicial: ");
	scanf("%d",&inicial);
	printf("Ingrese el valor final: ");
	scanf("%d",&final);
	printf("Ingrese el NUMERO: ");
	scanf("%d",&numero);

		for(i=inicial; i<=final; ++i)
	{
prod_nume=i*numero;
sum_nume=i+numero;
 printf("%d x %d = %d \t%d + %d = %d \n", numero, i, prod_nume, numero, i, sum_nume);
	}
}
