/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos


#include <stdio.h>

int main()
{

   int n;

   do
   {
      printf( "Introduzca un numero entero: " );
      scanf( "%d", &n );

      printf( "El opuesto es: %d\n", -n );

   } while ( n!=0 );

   return 0;
}
