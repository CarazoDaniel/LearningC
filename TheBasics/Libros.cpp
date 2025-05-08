#include <iostream>
#include <cstring>

using namespace std;

struct Libro {
    char titulo[50];
    char autor[50];
    char tema[50];
    int book_id;
};

int main(){
    struct Libro Libro1; // se declara variable libro1 de tipo libro
    struct Libro Libro2;

    //se dan especificaciones para los libros.
    strcpy(Libro1.titulo, "Learn C++ Programming"); //strcpy pone el string de segunda entrada, en la direccion provista de primero.
    strcpy(Libro1.autor, "Chand Miyan");
    strcpy(Libro1.tema, "C++ Programming");
    Libro1.book_id = 6495407;

    strcpy(Libro2.titulo, "Telecom Billing");
    strcpy(Libro2.autor, "Yakit Singha");
    strcpy(Libro2.tema, "Telecom");
    Libro2.book_id = 6495700;

    //sacamos la informacion de las estructuras utilizando el mismo . para llamar los atributos
    cout << "Titulo del Libro 1: " << Libro1.titulo << endl ; 
    cout << "Autor del Libro 1: " << Libro1.autor << endl ; 
    cout << "Tema del Libro 1: " << Libro1.tema << endl ; 
    cout << "Identificacion del Libro 1: " << Libro1.book_id <<endl;

    cout << "Titulo del Libro 2: " << Libro2.titulo << endl ; 
    cout << "Autor del Libro 2: " << Libro2.autor << endl ; 
    cout << "Tema del Libro 2: " << Libro2.tema << endl ; 
    cout << "Identificacion del Libro 2: " << Libro2.book_id <<endl;

    return 0;
}