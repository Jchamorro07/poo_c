#include "persona.cpp"
#include <iostream>

using namespace std; 

class Cliente : Persona{
	
	// atributos 
	
	private : string nit; 
	
	// constructor 
	
	public : 
			Cliente(){
				
			}
			
			Cliente(string nom,string ape,string dir,int tel,string n) : Persona(nom,ape,dir,tel){
				
				nit = n;
			}
			
			// metodos get y set 
			// set (modificar el atributo principal) 
			
			void setNit(string n){nit = n;}
			void setNombres(string nom){nombres = nom;}
			void setApellidos(string ape){apellidos = ape;}
			void setDireccion(string dir){direccion = dir;}
			void setTelefono(int tel){telefono = tel;}
		
			// get (mmostrar el atributo) 
			
			string getNit(){return nit;}
			string getNombres(){return nombres;}
			string getApellidos(){return apellidos;}
			string getDireccion(){return direccion;}	
			int getTelefono(){return telefono;}
	void mostrar(){
		
		cout<<"__________________"<<endl;
		cout<<"Nit:"<<nit<<endl;
		cout<<"Nombres:"<<nombres<<endl;
		cout<<"Apellidos:"<<apellidos<<endl;
		cout<<"Direccion:"<<direccion<<endl;
		cout<<"Telefono:"<<telefono<<endl;
	}
};