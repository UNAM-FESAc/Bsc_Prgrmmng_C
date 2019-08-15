#include <stdio.h>

int main()
{

	int inicial = 4, final=10, i;

		for(i=final; i>=inicial; i--)
	{
		printf("%d\n",i);
	}
}

/*

Nota que "final - inicial + 1" numero de iteraciones.
10
9...
4
*/
