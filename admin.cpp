#include <iostream>
//administrador
using namespace std;

int main()
{
  //menu de administrador, validación
   char pw = "asdf";
   
   cout << "Bienvenido administrador"<< endl;
   cout << "Introdusca su usuario: "<< endl;
   cin << usuario;
   cout << "Introdusca su contraseña"<< endl;
   cin << contraseña;

   if(contraseña==pw){
      cout << "Bienvenido Administrador";
   }else{
    cout << "Contraseña incorrecta";
   }
        
  return 0;
	
}