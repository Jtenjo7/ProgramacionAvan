/*
Autor: Juan Diego Tenjo Borda
Problema: Taller #02
Se desea hacer un aplicaci�n que genere un conjunto de n�meros aleatorios entre 0 y
20. En caso que el usuario quiera, se debe presentar un histograma sobre la frecuencia
de los n�meros del conjunto de n�meros aleatorios. La aplicaci�n deber� presentar un
men�, que identifique en dos partes: a) presentar la generaci�n del conjunto de
n�meros aleatorios y b) presentar el histograma del conjunto de n�meros aleatorios.
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdio.h>
using namespace std;
struct resultados{
   int valorMax ;
   int tamArr;
   int arreglo[100];
}enteros; // creacion de estructura
resultados vectorAleatorio(){ // funcion de numeros aleatorios, devuelve lo que se encuentra en la estructura.
   cout << "Ingrese el tamano del arreglo" << endl;
   cin >> enteros.tamArr;
   enteros.arreglo[enteros.tamArr];
   for(int i = 0; i < enteros.tamArr; i++){// llenar el arreglo con numeros aleatorios.
       enteros.arreglo[i] = rand()%20;
       cout << enteros.arreglo[i] << " " ;
   }
   enteros.valorMax = 0;
   for(int j = 0; j < enteros.tamArr; j++){// encontrar el valor maximo que se encuentra en el arreglo.
       if(enteros.arreglo[j] > enteros.valorMax){
           enteros.valorMax = enteros.arreglo[j];
       }
   }
   return enteros;
}
void generarHistograma(resultados enteros){ // funcion que genera el histograma, con los mismos valores de la estructura.
    int histograma[enteros.tamArr];
    int array[enteros.tamArr];
    int cont;
    cout << "    Index   Valor    Histograma" << endl;
    for(int i = 0; i < enteros.tamArr; i ++){
        cont = 0;
        array[i] = enteros.arreglo[i];
        for(int j = 0; j < enteros.tamArr; j++){
            if(enteros.arreglo[i] == enteros.arreglo[j]){ //comparacion de los valores del arreglo, asi contamos repeticiones.
               cont ++;
               histograma[i] = cont; // histograma arreglo que va a mostrar los valores de la cantidad de repeticiones.
            }
        }
        cout << "\t" << i << "\t" << array[i] << "\t" << histograma[i] << endl; //impresion de la tabla segun los valores.
    }
}

int main()
{
    int op;
    bool bandera = true;
    while(bandera == true){ //creacion del menu y sus opciones, ademas de bucle para imprimir opciones cuando termine de ejecutar.
    cout << "\tMENU" << endl;
    cout << "0. Salir del programa" << endl;
    cout << "1. Crear vector aleatorio con numeros del 1 al 20 de n tamano" << endl;
    cout << "2. Generar matriz del histograma" << endl;
    cin >> op;
    switch(op){ //casos segun lo solicitado.
        case 0:
        bandera = false;
        break;
        case 1:
        enteros = vectorAleatorio(); // llamado de funcion de generacion de numeros
        cout << endl << "Max: " << enteros.valorMax << endl;
        cout << "Size: " << enteros.tamArr << endl;
        break;
        case 2:
        generarHistograma(enteros); //llamado de generacion de histograma
        break;
        default:
        cout << "Opcion invalida" << endl;
        break;
    }
    }
    return 0;
}

