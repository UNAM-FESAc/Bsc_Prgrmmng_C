#include <stdio.h>

int main()
{

	int inicial = 1, final=12, i,k=2;

		for(i=inicial; i<final; i+=k)
	{
		printf("%d\n",i);
	}
}

/*

Nota que (Final - inicial)/k es el numero de iteraciones.
*/
