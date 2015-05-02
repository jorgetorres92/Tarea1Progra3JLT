#include "Evaluador.h"
#include <iostream>
using namespace std;

//Devuelve la suma de a (dado) y b (dado)
int sumar(int a, int b)
{
    return a+b; // suma los valores de a y b
}

//Devuelve la resta de a (dado) y b (dado)
int restar(int a, int b)
{
    return a-b; // resta los valores de a y b
}

//Devuelve la multiplicacion de a (dado) y b (dado)
int multiplicar(int a, int b)
{
    return a*b; // multiplica los valores de a y b
}

//Devuelve la division de a (dado) y b (dado)
int dividir(int a, int b)
{
    return a/b; // divide los valores de a y b
}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMayor(int a, int b)
{
 if (a>b)
    return a;
    else
    return b; // compara los valores de a y b y verifica cual es mayor
}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMenor(int a, int b)
{
    if (a<b)
    return a;
    else
    return b; // compara los valores de a y b y verifica cual es manor
}

//Devuelve el numero mayor entre a (dado), b (dado) y c (dado)
int getMayor(int a, int b, int c)
{
    if (a>b & a>c)
    return a;
    else if (b>a & b>c)
    return b;
    if ( c>a & c>b)
    return c; // compara los tres valores y verifica cual es mayor
}

//Establece el valor (dado) en el arreglo (dado) en el indice posicion (dado)
void setValor(int arreglo[], int valor, int posicion)
{
    arreglo[posicion]=valor; // el arreglo segun la posicion le asigna una
                            // una posicion
}

//Obtiene y devuelve el valor del arreglo (dado) en el indice posicion (dado)
int getValor(int arreglo[], int posicion)
{
    return arreglo[posicion]; // devuelve el valor de la posicion  del  arreglo
}

//Devuelve el numero mayor del arreglo (dado) que contiene tamano (dado) elementos
int getMayor(int arreglo[], int tamano)
{
    int mayor = 0; // se declaro un entero en cero
    for(int i=0;i<tamano;i++)// se recorre el arreglo segun el tamano
    {
    if (arreglo[i]>mayor)// se verifica que los valores del arreglos sean mayor a cero
    mayor=arreglo[i];// una vez encontrado se remplaza en la variable mayor
    }
    return mayor;// se devuelve el valor que esta en la variable mayor
}

//Devuelve el numero menor del arreglo (dado) que contiene tamano (dado) elementos
int getMenor(int arreglo[], int tamano)
{
    int menor = 10; // se declaro un entero en 10
    for(int i=0;i<tamano;i++)// se recorre el arreglo segun el tamano
    {
    if (arreglo[i]<menor)// se verifica que los valores del arreglos sean menor a cero
    menor=arreglo[i];// una vez encontrado se remplaza en la variable menor
    }
    return menor; // devuelve la variable menor
}

//Devuelve el promedio de los numeros del arreglo (dado) que contiene tamano (dado) elementos
int getPromedio(int arreglo[], int tamano)
{
    int promedio; // se declaro un entero
    for(int i=0;i<tamano;i++)// se recorre el arreglo segun el tamano
    {
    promedio = promedio + arreglo[i]; // suma los valores del arreglo
    }
    promedio = promedio/tamano;// se divide con el tamano del promedio
    return promedio;// se devuelve el promedio
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
