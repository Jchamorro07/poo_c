#include "cliente.cpp"
#include <iostream>
using namespace std;
main(){
	string n,nom,ape,dir;
	int tel;
	cout<<"Ingrese el No. de Nit:";
	cin>>n;
	cout<<"Ingrese el Nombre:";
	cin>>nom;
	cout<<"Ingrese el Apellido:";
	cin>>ape;
	cout<<"Ingrese la Direccion:";
	cin>>dir;
	cout<<"Ingrese el Telefono:";
	cin>>tel;
	
	// instancia
	Cliente obj = Cliente(nom,ape,dir,tel,n);
	obj.mostrar();
	cout<<"_________________"<<endl;
	cout<<"Modificar Nit:";
	cin>>n;
	cout<<"Modificar Nombres:";
	cin>>nom;
	cout<<"Modificar Apellidos:";
	cin>>ape;
	cout<<"Modificar Direccion:";
	cin>>dir;
	cout<<"Modificar Telefono:";
	cin>>tel;
	
	obj.setNit(n);
	obj.setNombres(nom);
	obj.setApellidos(ape);
	obj.setDireccion(dir);
	obj.setTelefono(tel);
	
	cout<<"____________________"<<endl;
	cout<<"Nit:"<<obj.getNit()<<endl;
	cout<<"Nombres:"<<obj.getNombres()<<endl;
	cout<<"Apellidos:"<<obj.getApellidos()<<endl;
	cout<<"Direccion:"<<obj.getDireccion()<<endl;
	cout<<"Telefono:"<<obj.getTelefono()<<endl;
	//obj.mostrar();
}