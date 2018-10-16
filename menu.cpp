#include <iostream>
//mmain menu
using namespace std;

int main()
{
  int opcion;
   
   cout << "Bienvenido"<< endl;
   cout << "Seleccione una opción" << endl;
   cout << "1. Administrador, 2. Ventas, 3. Salir ";
   cin >> opcion;
   
   switch (opcion){
    case 1: cout << "Administrador";
    break;
    case 2: cout << "Ventas";
    break;
    case 3: cout << "Salir";
   	break;
    default: cout << "Opción invalida";
        
  return 0;
	}
}