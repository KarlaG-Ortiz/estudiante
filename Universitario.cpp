#include "Estudiante.cpp"
#include<iostream>

using namespace std;

class Universitario:Estudiante{
	private : string carrera, semestre;
	public:
		Universitario(string nom, string ape, string jor, int ed,string carr, string sem):Estudiante(nom,ape,jor,ed){
			carrera = carr;
			semestre = sem;
		}	
		
		void setCarrera(string carr){
			carrera = carr;
		}
		void setSemestre(string sem){
			semestre = sem;
		}
		void setNombres(string nom){
			nombres = nom;
		}
		void setApellidos(string ape){
			apellidos = ape;
		}
		void setJornada(string jor){
			jornada = jor;
		}
		void setEdad(int ed){
			edad = ed;
		}
		
		string getCarrera(){
			return carrera;
		}
		string getSemestre(){
			return semestre;
		}
		string getNombres(){
			return nombres;
		}
		string getApellidos(){
			return apellidos;
		}
		string getJornada(){
			return jornada;
		}
		int getEdad(){
			return edad;
		}
		
		void mostrar(){
			cout<<"--------------------------------------------------"<<endl;
			cout<<apellidos<<", "<<nombres<<", "<<jornada<<", "<<edad<<", "<<carrera<<", "<<semestre<<endl;
		}
	}
};
