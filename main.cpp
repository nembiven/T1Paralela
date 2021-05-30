#include <iostream>
#include "Estudiantes.h"
#include "Funciones.h"

using namespace std;

int main(){
    Estudiantes A[15000]; //Arreglo inicial de 15000 estudiantes
    leeProcesa(A); //Asignamos los valores correspondientes a cada elemento de A
    quicksort(A,0,14999); // ordenamiento de los 150000 estudiantes
    imprimir(A,14999,"maximos.csv"); // se crea maximos.csv con los primeros 100 mejores promedios generales


    definirPromedios(A,1); //modificamos los promedios de todos para solo tener ahi el promedio artistico
    quicksort(A,0,14899); // ordenamiento de los 14900 estudiantes restantes
    imprimir(A,14899,"artisticos.csv");// se crea artistico.csv con los primeros 100 mejores promedios artisticos


    definirPromedios(A,2);//modificamos los promedios de todos para solo tener ahi el promedio humanista
    quicksort(A,0,14799);// ordenamiento de los 14800 estudiantes restantes
    imprimir(A,14799,"humanismos.csv");// se crea artistico.csv con los primeros 100 mejores promedios humanistas


    definirPromedios(A,3);//modificamos los promedios de todos para solo tener ahi el promedio tecnico
    quicksort(A,0,14699);// ordenamiento de los 14700 estudiantes restantes
    imprimir(A,14699,"tecnicos.csv");// se crea tecnicos.csv con los primeros 100 mejores promedios humanistas

	return 0;
        
}
