/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <stdio.h>

int main ()
{

char a[10];
char b[10];

printf("Como te gusta que te llamen (sin espacios)? ");
scanf("%9s", a);



printf("Cual es tu apellido (sin espacios)? ");
scanf("%9s", b);

printf("Hola %s tu apellido es %s\n", a, b);

}

