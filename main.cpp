#include "Universitario.cpp"
#include<iostream>
using namespace std;

main(){
	string nombres,apellidos, jornada, carrera, semestre;
	int edad;
	cout<<"Ingrese Nombres: ";
	cin>>nombres;
	cout<<"Ingrese Apellidos :";
	cin>>apellidos;
	cout<<"Ingrese jornada: ";
	cin>>jornada;
	cout<<"Ingrese edad: ";
	cin>>edad;
	cout<<"Ingrese carrera: ";
	cin>>carrera;
	cout<<"Ingrese semestre: ";
	cin>>semestre;
		
	Universitario uni = Universitario(nombres,apellidos,jornada,edad,carrera,semestre);
	uni.mostrar();
	
	cout<<"--------- Modificar ------------"<<endl;
	cout<<"Ingrese Nombres: ";
	cin>>nombres;
	cout<<"Ingrese Apellidos :";
	cin>>apellidos;
	cout<<"Ingrese jornada: ";
	cin>>jornada;
	cout<<"Ingrese edad: ";
	cin>>edad;
	cout<<"Ingrese carrera: ";
	cin>>carrera;
	cout<<"Ingrese semestre: ";
	cin>>semestre;
	
	uni.setNombres(nombres);
	uni.setApellidos(apellidos);
	uni.setJornada(joranda);
	uni.setEdad(edad);
	uni.setCarrera(carrera);
	uni.setSemestre(semestre);
	
	uni.mostrar();
}
