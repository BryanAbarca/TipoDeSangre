#include<iostream>
#include "Sangre.h"
using namespace std;

int main () {
	char *tsm=new char;
	char *tsp=new char;
	char *rhm=new char;
	char *rhp=new char;
	Sangre *s;
	s=new Sangre();
	int opc;
	system("color 0A");
	for(;;){
		system("cls");
		cout<<"Desea ingresar una prueba de sangre (1-SI,2-NO)"<<endl;
		cin>>opc;
		switch(opc){
		case 1:{
			cout<<"Digite el Tipo de sangre de la madre: "<<endl;
			cin>>*tsm;
			cout<<"Digite el Tipo de sangre del padre: "<<endl;
			cin>>*tsp;
			cout<<"Digite el RH de la madre: "<<endl;
			cin>>*rhm;
			cout<<"Digite el RH del padre: "<<endl;
			cin>>*rhp;
			s->CalcularTS(tsm,tsp);
			s->CalcularRH(rhm,rhp);
			system("pause");
			break;
			}
		case 2:{
			cout<<"Gracias por preferirnos"<<endl;
			system("pause");
			return 0;
			break;
			}
		default:{
				cout<<"Error, marque una opcion correcta"<<endl;	
				system("pause");
				break;
			}
		}//switch
	}
	
}

