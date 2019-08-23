#include <stdio.h>

int main()
{

	int inicial = 6, final=0, i,k=5;

		for(i=inicial; i>final; i/=k)
	{
		printf("%d\n",i);
	}
}

/*

Nota que Log2(final- inicial)/k + 1 es, aproximadamente, el numero de iteraciones.
*/
