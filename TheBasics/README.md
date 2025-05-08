# Basicos 1
### En esta sesion se comienza por diferenciar interpretes y compiladores.
C, y C++ necesitan compilar, para generar un ejecutable que es el programa, por otro lado, Python interpreta directamente el codigo.
### Lennguaje ensamblador
Se muestra el programa de Sesion 1, que genera una salida en la consola. A pesar de ser algo sencillo, en lenguaje de ensamblador las instrucciones son multiples, que operan en registro interno.
### Basico1
Hace referencia a uno de los ejemplos mas basicos y la importancia de la estructura basica de un programa en C.
### Tipos de datos
**Primarios**
integer, Character, Boolean, Floating Point, Double Floating Point, Void, Wide Character.
**Derived**
Function, Array, Pointer, Reference.
**User Defined**
Class, Structure, Union, Enum, Typedef.
### Variable en C++
Al asignar un valor a un tipo de dato con nombre, en la memoria se reserva un espacio en memoria, para guardar dicho valor. Declarar implica reservar el espacio, e inicializar una variable es darle un valor inicial al espacio en memoria.
Las variables tienen un alcance distinto, dependiendo de adonde esten definidas, las variables por ejemplo se pueden definir dentro de funciones o de forma global.
### Iniciamos y Global
Se realizan ejemplos de iniciar y declarar variables.
### Modificadores
Son propiedades especificas que se le pueden asignar a las variables, modifican los rangos de las variables, por ejemplo un int unsigned, va de 0 a 65535 en vez de -32768 a 32768 para el signed int.
Existen signed, unsigned, long y short.
### Literales 
Caracteres utilizados para para representar valores fijos
integer, Floting point, Character, String y Secuancias de escape.
Se utliza la comilla doble "" que permite utilizar secuancias de escape.
### Entradas de usuario
 Se utliza cout para imprimir en pantalla, y cin para asignar valores digitados por el usuario, en variables.
 ### Strings
 Son colecciones de caracteres, delimitados por comillas dobles.
 Se utiliza generalmente la libreria llamada string '#include string'. [Documentacion]( https://cplusplus.com/reference/string/string/)
 ### Operadores
 **Aritmeticos**
 "+ - * / % "(modulo, resto de division euclidiana).
 **Asignacion**
 "= += -= *= /= %=" (a /= b es lo mismo que a = a / b).
 **Relacionales**
 Comparativos
 == equivalencia, != no iguales, >, <, >= <=
**Logicos**
&& logico AND, TRUE si todos los operandos son verdaderos.
|| logico OR, TRUE si uno es verdadero.
! logico not, niega la expresion logica.
**Bit a Bit**
Se hace el cambio de los valores a valores binarios para hacer la comparativa
& AND binario
| OR Binario
^ XOR Binario
~ complemento binario
<< shift left
">>" shift right.
**Extras**
'sizeof' memory size, ?: condiciones operador ternario, & para direccion '&num', '.' accesar miembros, -> acceso de variables con punteros.
### Sentencias de toma de decisiones
Condicionales if, if else, switch e ifs anidados.
### Bucles
For, While, do-while
### Break Continue
dentro de los bucles, se pueden utilizar las sentencias de break y continue dentro de condicionales, para terminar el ciclo en el caso de un break, o continuar avanzar la condicion en el caso de continue.
### Arreglos
Se define el tipo de variable del arreglo, con parentesis cuadrado se define el tamaño, pueden tener mas de 1 dimension, por ejemplo una matriz n*m con doble indice matriz[n][m] primero fila, luego columna.
## Funciones en C++
### Predefinidas
Como por ejemplo librerias o ya precargadas
### Definidas por el usuario
tiene tipo de retorno, nombre, lista de parametros a recibir con tipo y un cuerpo de funcion.
### Argumentos
**De valor**, que se pasan directamente a la funcion, y se modifica ahi adentro. **Referencia** se pasa una referencia a la variable, es decir que puede modificar la variable del programa principal. **Puntero** pasa la direccion en memoria de la variable. lo que permite accesarla directamente. **Defecto** aquellos que si no se definen toma un valor por defecto.
### Argumentos en la funcion main
La funcion main no es recursiva, ni recibe argumentos normalmente, para la compilacion y utilizacion desde la linea de comandos, se utilizan **argc** que es un entero que indica el numero de argumentos que se pasan al programa en la linea de comandos. **argv** un array de cadena de caracteres, que representa los argumebntos pasado al programa.
### Retorno de una funcion
Return se utiliza al final de una funcion, y es el argumento que la funcion va a devolver al ser ejecutada, con los parametros especificado.
### Prototipo de funcion
Si se quiere definir una funcion, luego de su llamado, se necesita usar un prototipo.
### Sobrecarga de Funciones
Funciones con el mismo nombre, que tienen tipos y/o nombres de argumentos distintos.
Son los argumentos y sus tipos lo que las diferencian entre ellas.
### Valores por defecto en parametros
Valores que se le asignan por en el prototipo a una funcion, para que a la hora de su llamado, si no se especifica algun parametro, ya tiene un valor por defecto en el prototipo. Especialmente util para evitar errores si algun valor en la funcion es esencial para su funcionamiento. Es necesario que en el prototipo de la funcion, los argumentos por defecto tienen que ir al final.
## Variables y su alcance
### Local estatica
Existe solo dentro de una funcion donde se declara, pero su vida cominza cuando se llama la funcion y termina al finalizar el programa.
### Local
Las variables locales, no persisten al final del programa, y esto las diferencia de las estaticas, cuyo valor persiste.
### scope
Se utiliza el tipo de variable extern, para indicar que la variable ya ha sido definida en otro lugar, es decir que el compilador debe confiar que ya se definio en otro archivo o unidad de tradiccion.
## Estructuras
Son tipos de datos, que se definen como una coleccion de variables de diferentes tipos de datos, bajo un solo nombre. Es similar a una clase, en que ambos contienen una doleccion de datos de diferentes tipos.