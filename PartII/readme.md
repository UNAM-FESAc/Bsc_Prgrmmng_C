# Laboratorio: Implementación de Códigos Básicos<a name="LabImpDeCod"></a>

Los siguientes ejercicios tiene como propósito revisar y repasar los 
conceptos del tema **implementación de códigos básicos**

En las siguientes líneas encuentras la tabla de contenido de esta carpeta.

## Tabla de Contenido
1. [Informe de Laboratorio](#InfLabPDF)
2. [Ejercicios](#ejercicios)
3. [Ejercicios Especiales](#ejerciciosespeciales)
4. [Referencias](#referencias)



### 1. Informe de laboratorio<a name="InfLabPDF"></a>

Debes realizar un informe de laboratorio que contenga información sobre la 
lista de [ejercicios especiales](#ejerciciosespeciales) que aparecen en 
esta sección. El formato para el informe 
debe seguir el que se muestra en el siguiente archivo:
[PDF](https://www.dropbox.com/s/f0yia01yn2i1ozw/gral-templete.pdf?dl=0). Este formato 
puede usarse para la entrega de diferentes reportes, incluso tu proyecto final.
Coloca tu documento (PDF) en tu dropbox.


### 2. Ejercicios<a name="ejercicios"></a>

1. *01HolaMundo.c* Modifica el archivo para que imprima la misma cadena, 
usando unos tipos de datos declarados y definidos en el código, como 
cadenas separadas. Es decir "hola" y "mundo" (sin comillas).

2. *02SumNum.c* Modifica el código para que funcione para cualquier 
tipo de dato, no solamente entero. 

3. *03da_cte-smblc.c* Modifica el código para que calcule el area y el 
perímetro de una circunferencia; y el volumen de una esfera de radio dado.

4. *04sum-2-nmbrs.c* Realiza la suma de dos numeros. Analicemos cada linea.
	Modifica el código para que...
	- tome los números desde la terminal y 
	  que no sean necesariamente enteros.
	- Edita el código para que reducir el número de líneas.
	- Implementa las operaciones aritméticas básicas: 
	`a*b, a-b, b-a, a/b y b/a` 
	  Además de la suma.

5. *05char-paragraph.c* Escribe un código en el que guarde un tipo de 
dato char (una cadena) y un tipo de dato entero. En la salida debe 
mostrar un mensaje en el que incluya los dos tipos de datos.

6. *06char-int-variable.c* Investiga la forma de 
Introducir caracteres latinos como: ñ, á, é, etc.
Implementa un ejemplo en un código.

7. *07getchar-putchar.c* Modifica el código y ...
	- Cambia int por void y observa lo que sucede.
	- Omite definir el tipo de la función y observa que sucede
~~~
Cuando puedas usar la terminal, escribe: 
 gcc -Wall nombredelarchivo.c -o nombredelarchivo
 y analiza lo que sucede. 
~~~

8. *08puts-gets.c* Investiga cómo podemos introducir cadenas de caracteres 
que incluyan espacios.

9. *09gets.c* Tarea: 
Investigar por qué la funcion gets es peligrosa. 

10. *10asignacion-op.c* Explica cómo funcionan los operadores de asignación.

11. *11relational-op.c* Detalla el siguiente código y responde: 
	- Observe la salida e identifique los simbolos: ==, >=, <=, etc.
	- Identifique lo que significa el 1 o el 0 al final de cada linea. 

12. *12sizeof-op* Realiza las siguientes actividades:
	- Implementa otros tipos de datos (cualificadores) y
  	  usa la funcion sizeof()
	- Discute tus conclusiones con los compañeros.

13. *13conver.c* Realiza las siguientes actividades: 
	- Comenta lo que sucede en cada linea.
	- Discute con tus compañeros y comparte tus conclusiones.

14. *14conver-exp.c* Implementa un ejemplo donde realices una conversion de tipo 
de dato.


### 3. Ejercicios Especiales<a name="ejerciciosespeciales"></a>

Escribas los programas que realice las tareas que se mencionan a continuación.

1. _Program to find the ASCII value of a character._ 
	_Given a character as input, the ASCII value of the character is displayed as output._

~~~
A character variable holds the ASCII value (an integer number between 0 and 127) rather 
than that character itself. That value is known as the ASCII value.
~~~

2. _Program to check whether the given character is an alphabet._ 
~~~
The ASCII values of lower case alphabets are from  65 to 90 and the ASCII values of upper 
case alphabets are from 97 to 122. A character is obtained as input from the user. 
If its ASCII value lies in the above-mentioned range, it can be displayed as an alphabet.
~~~

3. Programa que revise si un caracter dados es mayúscula, minúscula, número o un 
caracter especial.

4. Programa que encuentre el número mayor entre dos números.

5. Realice el Diagrama de flujo de la suma de dos números reales.

6. Realice el Diagrama de flujo de la suma de dos números complejos.

7. ¿Qué es un dato de tipo simbólico?


### 4. Referencias<a name="referencias"></a>

1. Ir facerep [:link:](https://www.faceprep.in/c-programming-questions/)


#### [Volver al inicio](#LabImpDeCod)

