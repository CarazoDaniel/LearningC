# Sesion3
## Headers
Archivos que contienen declaraciones de funciones, Variablews, y otros objetos que se utilizan en un programa.
Estos archivos son incluidos en un programa utilizando la directiva #include.
La idea es trabajar en varios archivos, defininedo funciones en uno, completando el funcion en otro, y ambos separados del archivo principal del programa, que contiene el main.
Para compilarlos, se agrega el nombre del ejecutable, y luego los archivos cpp que contienen las funciones y el main, el archivo hpp que las define, no se compila.
**Por ejemplo** `g++ -o sum.exe main.cpp sum.cpp`
## Type casting
Al hablar de casting, hablamos de hjacer conversiones de typo de variable.
Existen de forma explicita, e implicita.
`g++ -o  .\Implicit.exe .\Implicit.cpp`
`g++ -o .\Explicit.exe .\Explicit.cpp`
## Goto
Da el poder de salta a cualquier parte de un programa. Es considerada mala practica, la mayoria se puede reemplazar con un break o continue.
`g++ -o .\Goto.exe .\Goto.cpp`
## Recursividad
Cuando el grado de complejidad permite utilizar llamadas multiples de la misma funcion. `g++ -o .\Factorial.exe .\Factorial.cpp`
## Enumeraciones enums
Son una forma de hacer codigo mantenible legible y escalable. Asi como las estructuras, tiene definidas caracteristicas y se podria ver como un tipo de dato.
A pesar de tener nombres, la idea de una enumeracion, como lo dice el nombre, es tener valores identificadores. `g++ -o .\Enum.exe .\Enum.cpp`
el resultado al no tener valores asignados de una enumeracion, es ordenado segun su orden de definicion `g++ -o .\Semana.exe .\Semana.cpp`
## Defines
se utilizan con el # y mayusculas, se utiliza parecido a una variable, pero es un valor fijado. y este valor se procesa en precompilacion, a la hora de compilar, los valores son reemplazados. Su utilidad es para hacer el codigo mas legible y escalable. `g++ -o .\Define.exe .\Define.cpp`
# Donde se guardan las variables
el & pegado a una variable, representa el lugar de memoria donde esta almacenada la variable. TODA variable tiene un lugar fisico en la memoria.
`g++ -o .\Variables.exe .\Variables.cpp`
## Punteros
Un puntero, es un tipo de variable, que apunta a la ubicacion de otra variable en memoria. Al utilizarlos, podemos acceder y modificar la variable a la que se apunta. Son sumamanete utiles para trabajar con estrucutras de datos complejas y para la gestion de memoria dinamica.
`g++ -o .\Punteros.exe .\Punteros.cpp` Y `g++ -o .\Pointer.exe .\Pointer.cpp`
## Punteros y estructuras.
Los punteros se pueden utilizar con variables nativas, tambien pueden ser utilizados con definidas por el usuario, como una estructura.
`g++ -o .\StructPoint.exe .\StructPoint.cpp` 
** el operador . tiene precedencia al operador *, lo qque encerramos en parentesis (*ptr) **
Por esto se tiende a utilizar el operador ->, lo que permite utilizar el puntero directamente, sin dereferenciar.
`g++ -o .\StructPointderef.exe .\StructPointderef.cpp`
A nivel de estructura, se prefiere el operador ->
## Punteros y arreglos
al crear un puntero hacia un arreglo, se amacena la direccion de inicio del arreglo, es decir, donde se ubica el primer elemento del arreglo.
ptr = arr same as &arr[0], igual que ptr + n = &arr[n]
`g++ -o .\Arreglos.exe .\Arreglos.cpp`

## Punteros y Funciones
Cuando utilizamos funciones, se pueden mandar parametros, por variable, o por referencia. Es decir, mandamos el valor de la variable, o la direccion de referencia (puntero) de la variable.
`g++ -o .\FuncRef.exe .\FuncRef.cpp`

## Punteros dobles
se puede referenciar el espacio en memoria de cualquier variable, esto incluye a los punteros. Por esto, se pueden referenciar las veces que uno quiera. Con el ejemplo de un puntero a un puntero, vemos los espacios en memoria.
`g++ -o .\DoblePuntero.exe .\DoblePuntero.cpp`
Hay que tener cuidado con la mantenibilidad de utilizar punteros multiples.