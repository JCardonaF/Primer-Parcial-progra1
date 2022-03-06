//Primer parcial PROGRAMACIOIN 1 - Julio Cesar Cardona Fuentes - 5990-21-11007
#include "Estudiante.cpp"
#include <iostream>
using namespace std;

main(){
	string nombres, apellidos, curso;
 		int codigo;
 		int nota1, nota2, nota3, nota4;
 		float promedio;
 		char res;
 		
 		do{
 			cout<<"                                    "<<endl;
 			cout<<"Ingrese el NOMBRE del estudiante: "<<endl;
 			
 			cin>>nombres;
 			cout<<"Ingrese el APELLIDO del estudiante: "<<endl;
 			cin>>apellidos;
 			cout<<"Ingrese el CODIGO del estudiante: "<<endl;
 			cin>>codigo;
 			cout<<"Ingrese el CURSO del estudiante: "<<endl;
 			cin>>curso;
 			cout<<"Ingrese la NOTA 1 del estudiante: "<<endl;
 			cin>>nota1;
			cout<<"Ingrese la NOTA 2 del estudiante: "<<endl;
 			cin>>nota2;
			cout<<"Ingrese la NOTA 3 del estudiante: "<<endl;
 			cin>>nota3;
			cout<<"Ingrese la NOTA 4 del estudiante: "<<endl;
 			cin>>nota4;  
			cout<<"                                   "<<endl;
			cout<<"___________________________________"<<endl;
			
			//calculando promedio
			promedio = (nota1+nota2+nota3+nota4)/4;
			
				if (promedio>=60){
				cout<<"El PROMEDIO es "<<promedio<<", ESTUDIANTE APROBADO :) "<<endl;
				}else{
					cout<<"EL PROMEDIO es "<<promedio<<", ESTUDIANTE REPROBADO :( "<<endl;
				}
			
			//PARA INGRESAR OTRO ESTUDIANTE//
			cout<<"                                       "<<endl;
			cout<<"_______________________________________"<<endl;
			cout<<"Desea ingresar otro Estudiante? (S/N): "<<endl;
			cin>>res; 			
		 }while(res=='s');
 		

};