# Laboratorio: Arreglos<a name="LabArreglos"></a>

Los siguientes ejercicios tiene como propósito revisar y repasar los 
conceptos del tema **Arreglos**.

En las siguientes líneas encuentras la tabla de contenido de esta carpeta.

## Tabla de Contenido
1. [Informe de Laboratorio](#InfLabPDF)
2. [Ejercicios](#ejercicios)
3. [Referencias](#referencias)

### Informe de laboratorio<a name="InfLabPDF"></a>

Debes realizar un informe de laboratorio que contenga información sobre la 
lista de ejercicios que aparecen en esta sección. El formato para el informe 
debe seguir el que se muestra en el siguiente archivo:
[PDF](https://www.dropbox.com/s/f0yia01yn2i1ozw/gral-templete.pdf?dl=0). 
Este formato puede usarse para la entrega de diferentes reportes, incluso 
tu proyecto final. Coloca tu documento (PDF) en tu dropbox.

### Ejercicios<a name="ejercicios"></a>

1. *00array.c* y *01array.c* Escribe un programa que tome la cadena dada, la lea 
	y que busque algún caracter y diga si está, o no, en la cadena.
<!---
Puedes reemplazar 
```c
getchar();
```
por
```c 
while ( getchar() != '\n');
```
o
```
system("pause");
```
--->

2. *02array.c* Realiza las siguientes actividades:
	- Compare con el anterior archivo (*01array.c*).
3. *03array.c* Identifica los siguientes conceptos:
	- static
	- Apuntador
	- Arreglo
	- register
	- Bucle
	- Operadores
	- Direcciones de memoria
	- Formatos
4. *04array.c* Realiza las siguientes actividades:
	- Escribe un código que tome valores de dos vectores del espacio (x, y, z) y 
	realice las operaciones: 
		- suma, 
		- resta, 
		- producto vectorial y 
		- producto escalar.
	- Realice un código que tome una matriz y calcule: 
		- la inversa,
		- la transpuesta, 
		- el determinante y 
		- el polinomio característico.
5. *05array.c* Implementa documentación interna del archivo fuente.
	- Implemente documentación interna y externa. Describa cada parte del código. 
	- Implemente un código que calcule la desviación estándar.
Reproduce los resultados de [Wikipedia](https://es.wikipedia.org/wiki/Desviaci%C3%B3n_t%C3%ADpica).

6. *06array.c* Implemente un programa que... 
	- muestre una lista de alumnos con su respectiva calificación y que calcule el promedio.
	- Implemente documentación interna y externa. Describa cada parte del código. 

7.*07array.c* Investiga sobre: 
	- El concepto: concatenación.
	- Explíque las funciones de biblioteca: *strcpy* y *strcat*.


<!---
En este archivo implementamos la funcion de biblioteca 

strcpy()

que nos permite copiar cadenas. Esta funcion anade un caracter nulo 
al final de la cadena.

Tambien usaremos la funcion strcat(destino, fuente)

donde 

destino= es el arreglo de destino, el cual contendra la 
	cadena de C y debera ser lo suficientemente grande
	para contener la cadena concatenada resultante.

fuente= es la cadena que sera agregada 
--->

### Referencias<a name="referencias"></a>

1. Ir [:link:](https://www.programiz.com/c-programming/c-multi-dimensional-arrays)

2. Ir [:link:](https://www.le.ac.uk/users/rjm1/cotter/page_54.htm)



LabArreglos
