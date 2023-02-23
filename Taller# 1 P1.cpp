/*
Autor: Juan Diego Tenjo Borda
Problema: Primer punto Taller #01
1.- Crear un array con 10 elementos
2.- Crear una función para generar números aleatorios entre 0 y 25
3.- Llenar el array con 10 números aleatorios
4.- Crear un puntero
5.- Imprimir el contenido del array usando el puntero
6.- Imprimir las direcciones del contenido del array usando el puntero.
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void **aleatorio(int arreglo[10]){
   for (int i = 0; i < 10; i ++){
    arreglo[i] = rand()%25;
   }
}

int main()
{
    int arreglo[10];
    aleatorio(arreglo);
    int *puntero;
    for(int i=0; i<10; i++){
        puntero = &arreglo[i];
        cout << *puntero << " " ;
    }
    cout<<endl;
    for(int i=0; i<10; i++){
        puntero = &arreglo[i];
        cout << puntero << " " ;
    }
    return 0;
}
