# Laboratorio: Estructuras de control<a name="LabEstrucDeControl"></a>

Los siguientes ejercicios tiene como propósito revisar y repasar los 
conceptos del tema **Estructuras de Control**

En las siguientes líneas encuentras la tabla de contenido de esta carpeta.

## Tabla de Contenido
1. [Informe de Laboratorio](#InfLabPDF)
2. [Ejercicios](#ejercicios)
3. [Ejercicios de Laboratorio](#ejerciciosLaboratorios)
4. [Ejercicios especiales](#ejerciciosEspeciales)
5. [Referencias](#referencias)

### Informe de laboratorio<a name="InfLabPDF"></a>

Debes realizar un informe de laboratorio que contenga información sobre la 
lista de ejercicios que aparecen en esta sección. El formato para el informe 
debe seguir el que se muestra en el siguiente archivo:
[PDF](https://www.dropbox.com/s/f0yia01yn2i1ozw/gral-templete.pdf?dl=0). 
Este formato puede usarse para la entrega de diferentes reportes, incluso 
tu proyecto final. Coloca tu documento (PDF) en tu dropbox.

### Ejercicios<a name="ejercicios"></a>


1. *01while.c* Discute con tus compañeros si la afirmación es correcta:
	
	- [ ] La instruccion while se utiliza para generar bucles (ciclos):
	hasta satisfacer la condicion, un grupo de condiciones se 
	ejecuta de forma repetida.
	- [ ] La instruccion while se utiliza para generar bucles (ciclos):
	hasta evitar la condicion, un grupo de instrucciones se 
	ejecuta de forma repetida.
	- [X] La instruccion while se utiliza para generar bucles (ciclos):
	hasta satisfacer la condicion, un grupo de instrucciones se 
	ejecuta de forma repetida.
	- [ ] La instruccion while se utiliza para generar bucles (ciclos):
	hasta satisfacer la condicion, ningún grupo de instrucciones se 
	ejecuta de forma repetida.
	- [ ] La instruccion while se utiliza para generar bucles (ciclos):
	hasta satisfacer la condicion, un grupo de instrucciones no se 
	ejecuta de forma repetida.

```C 
	while(condicion){instrucciones}
```

2. *03do-while.c* Observa y discute sobre cuál es la forma correcta de un do-while

	- [ ] 
	```C 
	do 
	{
	// instrucciones
	}
	while(condicion)
	```
	- [X] 
	```C 
	do 
	{
	// instrucciones;
	}
	while(condicion);
	```
	- [ ] 
	```C 
	do 
	{
	// instrucciones
	}
	while(condicion;)
	```
	- [ ] 
	```C 
	do; 
	{
	// instrucciones
	}
	while(condicion)
	```


~~~
	La instrucción do-while se utiliza para generar bucles (ciclos):
	un grupo de instrucciones se ejecuta de forma repetida, hasta 
	satisfacer la condicion.
~~~


3. *04centinela-bucle* Reflexiona sobre el uso de los centinelas. Desde 
	el punto de vista de la programación, responde:	¿Qué es un centinela?

	
~~~
	Repetición definida: Aquella que se implementa a través de un contador.
	Repetición indefinida: Aquella que se implementa a través de un centinela.

~~~

4. *05bandera-bucle.c* Reflexiona sobre las siguientes afirmaciones: Una bandera...

	a.[ ] no es un indicador.

	b.[X] es un indicador.

	c.[ ] no es bandera.

	d.[ ] es un parámetro de iteración.

	e.[ ] es una variables.

5. *05ques-ope.c* 
	a. El estudiante debe cambiar == por =, y reflexionar sobre lo que sucede.

	b. Introduce el teorema del seno y  del coseno en el programa 
	y que el programa calcule el otro lado. 
	En caso necesario, el usuario debe introducir dos lados y un ángulo 
	por consola, y elegir la clasificación del triángulo según sus lados. 



```C
	# Identificador puede ser de diferente tipo. Prueba cuáles...
	switch(Identificador){
	case 1:
	# Instrucciones;
	# ...y casos n-1
	break;
	case n:
	break;
	default: 
	# Instrucciones por defecto;
	break;	
	}

```

	c. Escriba dos programas en los que implemente un if-else y el otro con 
	el operador ternario.

~~~
	El operador ternario se usa de la forma A ? B : C
	y es una operacion con tres operandos. Se conoce como expresion 
	condicional. Note la similitud con el condicional if-else.
~~~
	


6. *08for_bucle* 
	- Modifica el código para que la salida sea:

|                Resultados              |
|----------------------------------------|
| i =     0 | i*i =     0 | i*i*i =     0|
| i =     1 | i*i =     1 | i*i*i =     1|
| i =     2 | i*i =     4 | i*i*i =     8|
| i =     3 | i*i =     9 | i*i*i =    27|
| i =     4 | i*i =    16 | i*i*i =    64|
| i =     5 | i*i =    25 | i*i*i =   125|

	- Haz que los valores inicial y final se adquieran a traves 
	de la pantalla.

7. *09for_bucle.c*
	- Modifica el archivo en la línea ```C printf("%d\n",i++); ```
	por ```C printf("%d\n",++i); ```
	Discute con tus compañeros sobre los resultados obtenidos. Explíca.

	- Modifica el archivo para que obtengas (usa el operador incremento):


|Resultados|
|----------|
| 2  | 3   |
| 5  | 6   |
| 8  | 9   |
|11  |12   |
|14  |15   |
|17  |18   |
|20  |21   |


Discute tu solución. Revisa los otros códigos del bloque *09for_bucle01.c*-*09for_bucle07.c*.



8.*10for_bucle.c* Edita el código...
	- para que la salida sea parecida a (usa secuencias de escape):

| Resultados  |
|-------------|
|4 x -5 =  -20|
|4 x -4 =  -16| 
|4 x -3 =  -12| 
|4 x -2 =   -8| 
|4 x -1 =   -4| 
|4 x  0 =    0| 
|4 x  1 =    4| 
|4 x  2 =    8| 
|4 x  3 =   12| 
|4 x  4 =   16| 
|4 x  5 =   20|

	- Implementa un switch para que el usuario elija cuál tabla de multiplicar 
	desea ver en pantalla (también puedes usar un for).
	- Modifica el código para la salida se muestre de la siguiente forma (ejemplo):

	
Producto	|	Suma	|Resta		|División	
----------------|---------------|---------------|---------------
6 x  1 =  6.0	| 6 +  1 =  7.0	| 6 -  1 = 5.0	| 6 /  1 =  6.0
6 x  2 = 12.0	| 6 +  2 =  8.0	| 6 -  2 = 4.0	| 6 /  2 =  3.0
6 x  3 = 18.0	| 6 +  3 =  9.0	| 6 -  3 = 3.0	| 6 /  3 =  2.0
6 x  4 = 24.0	| 6 +  4 = 10.0	| 6 -  4 = 2.0	| 6 /  4 =  1.5
6 x  5 = 30.0	| 6 +  5 = 11.0	| 6 -  5 = 1.0	| 6 /  5 = 1.2 


9. *11for-anidado.c* Revisa detalladamente la siguiente información y confirma cuál aseveración 
	corresponde con el código que se muestra en el archivo mencionado.
	<!--- La respuesta correcta es la primera--->

- Primero prueba de escritorio


Paso	|   j	|  i/n	|   j   |   n   | j/n/i	|   j   | i/n/j |   j   |   n   | j/n
--------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------
P1	|	|	|	|n=0	|	|	|	|	|	|	
P2	|       |i = 1	|	|	|	| 	|i = 2	|	|	|	
P3	| j = 5	|	|j = 3	| 	|j = 1	|j = 5	|	| j = 3	|	| j = 1 
P4	|	|n = 6	|	|n = 10	| n = 12|	|n = 19	| 	|n = 24	| n = 27
P5	|	|	|Bucle j| 	|	|	|Bucle j|	|	|	
P6	|	|	|	|	|Bucle i|	|	|	| 	|FIN	

- Segundo prueba de escritorio

Paso	|   j	|  i/n	|   j   |   n   | j/n/i	|   j   | i/n/j |   j   |   n   | j/n
--------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------
P1	|	|	|	|n=1	|	|	|	|	|	|	
P2	|       |i = 1	|	|	|	| 	|i = 2	|	|	|	
P3	| j = 5	|	|j = 3	| 	|j = 1	|j = 5	|	| j = 3	|	| j = 1 
P4	|	|n = 6	|	|n = 10	| n = 12|	|n = 19	| 	|n = 24	| n = 27
P5	|	|	|Bucle j| 	|	|	|Bucle j|	|	|	
P6	|	|	|	|	|Bucle i|	|	|	| 	|FIN	

- Tercer prueba de escritorio

Paso	|   j	|  i/n	|   j   |   n   | j/n/i	|   j   | i/n/j |   j   |   n   | j/n
--------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------
P1	|	|	|	|n=0	|	|	|	|	|	|	
P2	|       |i = 0	|	|	|	| 	|i = 2	|	|	|	
P3	| j = 5	|	|j = 3	| 	|j = 1	|j = 5	|	| j = 3	|	| j = 1 
P4	|	|n = 6	|	|n = 10	| n = 12|	|n = 19	| 	|n = 24	| n = 27
P5	|	|	|Bucle j| 	|	|	|Bucle j|	|	|	
P6	|	|	|	|	|Bucle i|	|	|	| 	|FIN	

- Cuarto prueba de escritorio

Paso	|   j	|  i/n	|   j   |   n   | j/n/i	|   j   | i/n/j |   j   |   n   | j/n
--------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------
P1	|	|	|	|n=0	|	|	|	|	|	|	
P2	|       |i = 1	|	|	|	| 	|i = 2	|	|	|	
P3	| j = 1	|	|j = 3	| 	|j = 1	|j = 5	|	| j = 3	|	| j = 1 
P4	|	|n = 6	|	|n = 10	| n = 12|	|n = 19	| 	|n = 24	| n = 27
P5	|	|	|Bucle j| 	|	|	|Bucle j|	|	|	
P6	|	|	|	|	|Bucle i|	|	|	| 	|FIN	


### Ejercicios de Laboratorio<a name="ejerciciosLaboratorios"></a>

1. Escribe un código que evalúe la `x` y te calcule `f(x)`

x	|`f(x)=(x^3-x/3-1)/2`	
-------|-------------
-5	| 		   
-4	| 		   
-3     |  		
-2     | 	 
-1     | 	 
0     | 	-0.5 
1     | 	 
2     | 	 
3     | 	 
4     | 	 
5     | 	 

2. Escribe un código que evalúe la `x` y te calcule `f(x)`, 
`g(x)` y `h(x)`

x	|`f(x)=x^3+2x`	    |`g(x)=x^3-2x^2-1`| `h(x)=sin(x)-sin^2(x)+x^(1/2)`	
-------|-------------|-----------------|---------------
-10.0	| 		|  | 
-9.5	| 		|  | 
-9.0	| 		|  | 
-8.5    |  		|  |
-8.0    |  		|  |
0      | 	0	| -1 | 

Note que `-10.0<=x<=10.0`.

3. Escriba un código que calcule las tablas de multiplicar  del 1 al 12.

4. Reproduzca 10 códigos de la lista que aparece en:
[link](https://www.w3resource.com/c-programming-exercises/for-loop/index.php).

5. Escriba un programa que realice la suma 
de números mientras el usuario no presiona introduzca un carácter especial. Puede usar un _do-while_.

6. Escribe un código que realiza una tarea en el que implemente una estructura _while_

7. Implementa un código en el que se muestre una cadena 
caracteres. Usa una estructura de control iterativa. 

8. Implementa  un código que tome caracteres y los clasifique  en una tabla; es decir: 
el usuario introduce los caracteres y el programa muestra:

vocal 	| número | carácter
-------|-------------|----------------
a | 0 |
e |  |*
|  2 |



### Ejercicios Especiales<a name="ejerciciosEspeciales"></a>

1. Implementa un covertidor de temperatura: usa una estructura de control iterativa _for_.
	Convierte Farenheit a Celsius y Kelvin, implementa todas las conversiones posibles.

2. Escribe un programa que muestre los números pares en un intervalo. 
	Ingrese el número 1 y 7; y el resultado sea: 2, 4, 6. Escribe el mismo 
	programa para números impares. Implementa una estructura de control iterativa.

3. Escribe un programa que muestre el triángulo de pascal, el número de filas debe 
	introducirse desde la terminal.

4. Usa estructuras de control iterativas y escribe un programa que te muestre tu 
	apellido escrito con un caracter ingresado desde la terminal; ejemplo:
~~~
	**** ***  ***  *  * ****
	*  * *  * *  * *  *   *
	*  * ***  *  * *  *  * 
	**** *  * ***  **** ****
~~~


5. Cree un programa que muestre los primeros cien números primos.

6. Cree un programa que tome un cadena de números y los invierta; es decir, 10283 y muestre 38201.

7. Escriba un programa en la que el usuario escriba 
la función y la evalúe para mostrar los 
de la variable y la función; es decir, `x` y `f(x)`.

8. Escriba un programa que tome los datos de 5 personas: 
nombre, peso y edad; y muestre en la salida dos grupos 
de personas (en dos columnas): 
mayores a 15 y en la otra columna menores de 15 años.

9. Seleccione 5 ejercicios de cada capítulo del sitio: 
[link](https://c-for-dummies.com/begc4d/exercises/), explíquelos y colóquelos en su repositorio.

### Referencias<a name="referencias"></a>
1. Lenguaje C [link](http://www.carlospes.com/curso_de_lenguaje_c/04_01_instruccion_break.php)

#### [Volver al inicio](#LabEstrucDeControl)


<!---
|V|V|V|V|V|V|V|V|V|C
---|---|---|---|---|---|---|---|---|---|---
P1	|	|n=0	|	|	|	|	|	|	|
P2	| i = 1	|	|	|	|	| i = 2	|	|	|	|			
P3	| j = 5	|	|j = 3	| 	|j = 1	|j = 5	|	| j = 3	|	| j = 1 
P4	|	|n = 6	|	|n = 10	| n = 12|	|n = 19	| 	|n = 24	| n = 27
P5	|	|	|Bucle j| 	|	|	|Bucle j|	|	|	
P6	|	|	|	|	|Bucle i|	|	|	|  	|	|FIN	

--->

