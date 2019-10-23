# Laboratorio: Funciones y otros conceptos<a name="LabFunciones"></a>

Los siguientes ejercicios tiene como propósito revisar y repasar los 
conceptos del tema **Funciones y otros conceptos**, incluiremos una introducción 
general al concepto de apuntadores.

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

1. *01function.c* Modifica el código (correspondiente a este enunciado) para:
	- Implementar más parámetros en la función, también debes 
	modificar la operación de salida.
	- Realizar otras operaciones aritméticas dentro de la función.
	- Dar otras instrucciones a la función creada (implementada) por el usuario.
	- Crear otras funciones que realicen otras operaciones o instrucciones.

2. *02funciones.c* Modifica el código para que usando funciones (subrutinas)...
	- acepte cualquier valor numérico de entrada.
	- tome tres números y los organice de forma ascendente.

3. *03funciones_main.c* y *03funciones_sec.c* Escribe los códigos para que...
	- Realicen las cuatro operaciones aritméticas básicas e imprima la salida.
	- Ejecute el código y que se interrumpa cuando ingresa la letra q.

4. *04main.c*--*04support.c* Implementa un for anidado para que imprima las tablas de multiplicar. 
	- Usa funciones de biblioteca, 
	- Funciones creadas por el programador,
	- Implementa información para el usuario: mensajes,
	instrucciones (datos de tipo char); 
	de tal forma que el usuario esté informado 
	de lo que realiza el código y qué puede datos puede modificar.
	-  Implementa la declaración extern con diferentes tipos 
	de datos. Crea al menos cuatro (4) archivos externos.

5. *06funciones-argumentos.c* y *07funciones-argumentos.c* Realiza los siguientes ejercicios:
	- Implementa cinco funciones en línea y posteriormente, 
	defínelas como funciones creadas por el usuario.
	- Escribe los programas para que calculen el volumen 
	de tres  objetos  como función en línea y 
	como función generada por el programador.
	- Crea un código que tome un texto y convierta cada 
	primer letra en su opuesta; es decir de mayúscula a minúscula 
	o de minúscula a mayúscula.
   
6. *08funciones-bibliote.c* Realiza las siguientes prácticas:
	- Ejecuta el programa e introduce otros caracteres para observar lo que sucede.
	- Crear un cuestionario de 10 preguntas. Al final debe mostrarse un párrafo 
	con las respuestas. Puedes usar diferentes funciones de biblioteca.

7. *09funciones-bibliote.c*, *10funciones-bibliote.c*, *11funciones-bibliote.c* y 
	*12funciones-bibliote.c* 
	Crea los siguientes programas:
	- Crea un programa para que genere letras (alfanuméricos) al azar.
	- Crea un programa que genere texto (cadenas de carácteres) al azar.
	
~~~
La funcion fgets puede implementarse para tomar una entrada de caracteres de la 
entrada. En este ejemplo, cadena es el nombre del arreglo de caracteres, 
sizeof cadena es la cantidad de texto en la entrada más uno; 
y stdin es el nombre del dispositivo estandar de entrada.
~~~


8. *12paso-copia.c*, *13paso-referencia.c* y *14uso-apuntadores.c* Realiza un pseudocódigo de 
	cada uno de los programas de este enunciado.


### Ejercicios Especiales<a name="ejerciciosEspeciales"></a>

1. To find all prime numbers between two integers, checkPrimeNumber() function is created. 
This function checks whether a number is prime or not. Use the Ref. 1 from references section.

2. Realize the whole of exercises given in Ref. 2-4 from references section.

3. Investiga e implementa una funcion srand(semilla) y realiza 
	un programa que use funciones (de biblioteca, implementadas por el usuario 
	y matemáticas) para obtener la media aritmética de un conjunto de valores 
	generados (pseudo) aleatorios. 
	x_i f(x_i) y la x_media_aritmética.

4. Investiga sobre las funciones de biblioteca para manejo de archivos; e.g.: 
fprintf(), fscanf(), etc.

### Referencias<a name="referencias"></a>

1. https://www.programiz.com/c-programming/examples/prime-interval-function

2. https://fresh2refresh.com/c-programming/c-function/

3. https://beginnersbook.com/2014/01/c-functions-examples/

4. https://www.tutorialspoint.com/cprogramming/c_functions.htm

#### [Volver al inicio](#LabFunciones)




