#include<iostream>
using namespace std;

class Estudiante{
	protected : string nombres,apellidos,jornada;
				int edad;
	protected : 
		Estudiante(string nom, string apes,string jor, int ed){
			nombres = nom;
			apellidoos = ape;
			jornada = jor;
			edad = ed;
		}
		
		void mostrar();
}
