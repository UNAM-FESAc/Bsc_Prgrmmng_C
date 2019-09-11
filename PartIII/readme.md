# Laboratorio:Estructuras de Control<a name="LabEstrDeContr"></a>

Los siguientes ejercicios tiene como propósito revisar y repasar los 
conceptos del tema **estructuras de control**

En las siguientes líneas encuentras la tabla de contenido de esta carpeta.

## Tabla de Contenido
1. [Informe de Laboratorio](#InfLabPDF)
2. [Ejercicios](#ejercicios)
3. [Ejercicios Especiales](#ejerciciosespeciales)
4. [Referencias](#referencias)

### Informe de laboratorio<a name="InfLabPDF"></a>

Debes realizar un informe de laboratorio que contenga información sobre la 
lista de [ejercicios especiales](#ejerciciosespeciales) que aparecen en 
esta sección. El formato para el informe 
debe seguir el que se muestra en el siguiente archivo:
[PDF](https://www.dropbox.com/s/f0yia01yn2i1ozw/gral-templete.pdf?dl=0). Este formato 
puede usarse para la entrega de diferentes reportes, incluso tu proyecto final.
Coloca tu documento (PDF) en tu dropbox.



### Ejercicios en clase<a name="ejercicios"></a>

1. *01estructuraIF01.c*--*01estructuraIF02.c* Realizar un programa que pida un número y responda 
si es par o impar.

~~~
	if(condición){instrucción si condición es Verdadera}else{instrucción si condición es falsa}
~~~

Veamos un ejemplo en la sintaxis del lenguaje de programación C:
```C
	if(a==1){
	printf{"Esta bien"};
	}else{
	printf{"Esta mal"};
	}
```


2. *02numerosdiferentes.c* Realizar un pseudocódigo (o diagrama de flujo) y dar una salida legible para 
aquel usuario que tenga el archivo ejecutable.

3. *02numerosdiferentes.c* Escribe un código que tome carácteres alfanuméricos que:
	- Si son números los organice (de acuerdo a la elección del usuario):
		- menor a mayor
		- mayor a menor.
	- Si son letras que los organice (de acuerdo a la elección del usuario)
		- ordenado normal:  _a_, _b_, _c_, .., _z_.
		- ordenado inverso: _z_, y_, _x_, .., _a_.
		
4. *01estructuraIF03.c* Investigue sobre qué otros operadores se pueden 
introducir en la condición de la estructura de control selectiva. 
Realice ejemplos de al menos dos operadores con sus pseudocódigo (diagrama de flujo).

5. *03yes-no.c* Construya el código en C usando el siguiente pseudocódigo:
	```
	INICIO
   		Número: ENTERO
   		ESCRIBA Escriba un número
   		LEA número
   		Si número >= 0 entonces
      			ESCRIBA El número es positivo
   				Si no
         		ESCRIBA El número es negativo
      		Fin-Si
	FIN

	```



6. *04switch01.c* Discute con tus compañeros si la afirmación es correcta:
	- [X] La declaración switch como una declaración de selección 
	múltiple. Esta declaración se usa para seleccionar un 
	camino de diferentes alternativas en la ejecución de 
	un programa. Funciona asociando una variable con un lista 
	de identificadores y cuando encuentra la opción que se ajusta; 
	entonces la secuencia se ejecuta.

	- [ ] La declaración switch como una declaración de selección 
	múltiple. Esta declaración no se usa para seleccionar un 
	camino de diferentes alternativas en la ejecución de 
	un programa. Funciona asociando una variable con un lista 
	de identificadores y cuando encuentra la opción que se ajusta; 
	entonces la secuencia se ejecuta.

	- [ ] La declaración switch como una declaración de selección 
	múltiple. Esta declaración se usa para seleccionar un 
	camino de diferentes alternativas en la ejecución de 
	un programa. Funciona asociando una variable con un lista 
	de datos aleatorios y cuando encuentra la opción que se desajusta; 
	entonces la secuencia se ejecuta.

	- [ ] La declaración switch como una declaración de selección 
	múltiple. Esta declaración se usa para seleccionar un 
	camino de diferentes alternativas en la ejecución de 
	un programa. Funciona asociando una variable con un lista 
	de enteros y cuando encuentra la opción que se no ajusta; 
	entonces la secuencia se ejecuta.

	- [ ] La declaración switch como una declaración de selección 
	múltiple. Esta declaración se usa para seleccionar un 
	camino de diferentes alternativas en la ejecución de 
	un programa. Funciona asociando una variable con un lista 
	de identificadores y cuando encuentra la opción que se ajusta; 
	entonces la secuencia no se ejecuta.


~~~
	switch (condicion)
{
    case 1: // caso si condicion = 1;
        break;
    case 2: // caso si condicion = 2;
        break;
    default: // // caso si condicion no es 1 ni 2;
}
~~~


7. *04switch02.c*--*04switch03.c* Modifica el código para que te brinde opciones de cálculos de las 
propiedades, al menos, diez (10) figuras geométricas.

### 3. Ejercicios Especiales<a name="ejerciciosespeciales"></a>

1. Escriba un código en el que asocie cada día de la semana con un carácter, 
haga que el usuario escriba el día de la semana y se imprima en pantalla el carácter asociado.
Implemente _if_.

2. Escriba un código en el que asocie cada día de la semana con un un cadena de texto, 
haga que el usuario escriba el día de la semana y se imprima en pantalla la cadena asociada. 
Implemente _if_.


3. Describa cómo funcionan los operadores de incremento y reducción (decrement).

4. Investigue sobre los operadores que se pueden implementar en 
en la condición del _switch_. 

5. Escriba un código con su pseudocódigo en el que implemente 
un _switch_ anidado.


### Referencias

1. Ir aprenderaprogramar [:link:](https://www.aprenderaprogramar.com/index.php?option=com_content&view=article&id=322:instrucciones-condicionales-si-entonces-sino-if-then-else-ejemplos-en-pseudocodigo-cu00142a&catid=28&Itemid=59)

2. Ir a programavideojuegos[:link:](http://programavideojuegos.blogspot.com/2013/05/25-ejercicios-resueltos-de-estructuras.html)


#### [Volver al inicio](#LabEstrDeContr)


