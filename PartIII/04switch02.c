/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

/*
En este programa veremos la forma general de la 
declaracion switch.
 */

#include<stdio.h>  
int main(){    

char letter='t';     

switch(letter){    
case 'y':    
printf("La respuesta es si\n");    
break;    
case 'n':    
printf("La respuesta es no\n");    
break;    
default:    
printf("Sin respuesta\n");    
}    
return 0;  
}    