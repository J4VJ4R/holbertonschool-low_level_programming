7.4. Librerías
Las librerías constituyen una forma simple de reunir varios ficheros objeto
conjuntamente. Las librerías pueden ser de dos tipos:
Estáticas: El código de la función es integrado con el ejecutable en la fase
de enlazado.
Dinámicas: El código de la función es cargado cuando se ejecuta el programa. Las librerías dinámicas permiten economizar espacio en disco pero,
sobre todo, memoria porque son cargadas sólo una vez en memoria y el
código puede ser compartido entre todos los programas que la necesiten.
Las cabeceras o prototipos (declaraciones) de las funciones de cada librería
se hallan en ficheros de cabecera con extensión .h. Tantos estos ficheros como
las librerías se hallan en determinados directorios conocidos por el compilador.
Por ejemplo, en unix/linux, los ficheros de cabecera se buscan por defecto
en el directorio /usr/include, y las librerías en el directorio /usr/lib. Como
ya vimos en la sección 2, se pueden indicar ubicaciones adicionales de ficheros
cabecera (mediante la opción -I del compilador) o de librerías (mediante la
opción -L del compilador).
Los compiladores de C poseen una librería de funciones más o menos extensa,
pero todos soportan la librería estándar definida por ANSI, para garantizar la
portabilidad. Esta librería dinámica denominada librería C (libc) incluye la
31
mayor parte de las funciones que se necesitan habitualmente en un programa
C, a excepción de la librería de funciones matemáticas (libm, cuyo fichero de
cabecera es math.h). Otras librerías especiales, como por ejemplo las de gráficos,
tampoco se hallan contenidas en la librería estándar.
Dado que el compilador, por defecto, enlaza los ejecutables dinámicamente con la librería C, no es necesario indicárselo. Sin embargo, si se usan, por
ejemplo, las funciones matemáticas declaradas en math.h, debe indicarse al compilador que enlace el ejecutable con la librería matemática, tal y como se indica
en el siguiente ejemplo. De lo contrario, se produciría un error de enlazado:
> gcc ejemplo.c -o ejemplo -lm
Dado que la creación de una librería dinámica es una tarea de cierta complejidad,
y que se sale del ámbito de este manual, veremos una forma sencilla de crear
una librería estática. Supongamos que disponemos de un fichero nuestras.c
que contiene una serie de funciones creadas por nosotros. Los comandos básicos
para crear una librería estática de nombre libpropia.a serían los siguientes:
>gcc -c nuestras.c =⇒ nuestras.o
>ar cru libpropia.a nuestras.o
>ranlib libpropia.a =⇒ Ya hemos creado nuestra librería estática.
Para comprobar que todo ha ido correctamente puede ejecutarse el comando
> nm -s libpropia.a
que nos debería listar todas las funciones incluidas en la librería. 
Ahora, para poder usar las funciones de nuestra librería, bastaría con crear el fichero con todas las cabeceras de las funciones de la librería, por ejemplo nuestras.h, e incluirlo mediante la directiva #include en el fichero fuente donde se van a
usar. Una vez hecho esto, cuando compilemos nuestro programa, basta añadir la opción -lpropia y -Ldirectorio para indicar su ubicación si ésta no es la estándar.