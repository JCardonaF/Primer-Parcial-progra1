#include <iostream>
using namespace std;
class Estudiante
{
 	//atributos
 	protected : string nombres, apellidos, curso;
 		int codigo;
 		int nota1, nota2, nota3, nota4;
 		float promedio;
 		
 		//constructor 
 	protected :
 		Estudiante(){
 		}
 		Estudiante(string nom,string ape, string cur, int cod, int n1, int n2, int n3, int n4,float prom){
 			nombres = nom;
 			apellidos = ape;
 			curso = cur;
			codigo = cod;
			nota1 = n1;
			nota2 = n2;
			nota3 = n3;
			nota4 = n4;
			promedio = prom;
 			
			}
		 //metodo
		void mostrar();
};