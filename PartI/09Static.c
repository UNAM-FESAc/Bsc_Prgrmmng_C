/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos


#include <stdio.h>
 
// Declaracion del funcion

void func(void);



 
static int count = 5; // variable global
 
int main(){

   while(count--) {
      func();
   }
	
   return 0;
}






// Definicion de la funcion
void func( void ) {

   register int i = 5; // variable local static
   i++;

   printf("i es %d y la cuenta es %d\n", i, count);

}

