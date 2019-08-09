#include <stdio.h>

int main()
{

	int inicial = 1, final=25, i,k=2;

		for(i=inicial; i<final; i*=k)
	{
		printf("%d\n",i);
	}
}

/*

Nota que Log2((final-inicial)/k) es, aproximadamente, el numero de iteraciones.
*/
