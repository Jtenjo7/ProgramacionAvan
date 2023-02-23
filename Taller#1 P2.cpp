#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;
struct cliente{
   string nombre;
   long long numero;
   long long cc;
};
void llenarFactura(cliente persona){
   string *puntero;
   long long *puntero1;
   long long *puntero2;
   ofstream fichero("factura.txt");
   if(fichero.is_open()){
   fichero << "             FACTURA             " << endl;
   cout << "Ingrese su nombre" << endl;
   cin >> persona.nombre;
   puntero = &persona.nombre;
   fichero << *puntero << endl;
   cout << "Ingrese su numero de telefono" << endl;
   cin >> persona.numero;
   puntero1 = &persona.numero;
   fichero << *puntero1 << endl;
   cout << "Ingrese su numero de identificacion" << endl;
   cin >> persona.cc;
   puntero2 = &persona.cc;
   fichero << *puntero2 << endl;
   }
   else {
    cout << "No tiene permisos de escritura" << endl;
   }
   cout << "                FACTURA                 " << endl;
   cout << "Nombre:" << *puntero << endl;
   cout << "Numero:" << *puntero1 << endl;
   cout << "Identificacion:" << *puntero2 << endl;

}
int main(){
    cliente persona;
    llenarFactura (persona);
}
