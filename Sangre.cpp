#include "Sangre.h"

Sangre::Sangre() {
	tsm=new char;
	tsp=new char;
	rhm=new char;
	rhp=new char;
}

Sangre::Sangre(char *tsm,char *tsp,char *rhm,char *rhp){
	this->tsm=tsm;
	this->tsp=tsp;
	this->rhm=rhm;
	this->rhp=rhp;
}

Sangre::~Sangre() {
	//destructor
	delete tsm;
	delete tsp;
	delete rhm;
	delete rhp;
}

void Sangre::setTsm(char *tsm){
	this->tsm=tsm;
}
void Sangre::setTsp(char *tsp){
	this->tsp=tsp;
}
void Sangre::setRhm(char *rhm){
	this->rhm=rhm;
}
void Sangre::setRhp(char *rhp){
	this->rhp=rhp;
}

char Sangre::getTsm(){
	return *tsm;
}

char Sangre::getTsp(){
	return *tsp;
}

char Sangre::getRhm(){
	return *rhm;
}

char Sangre::getRhp(){
	return *rhp;
}

void Sangre::CalcularTS(char *tsm, char *tsp){
	if(*tsm=='A'&&*tsp=='A'){
		cout<<"El tipo de sangre del hijo es: A"<<endl;
	}else if((*tsm=='A'&&*tsp=='B')||(*tsm=='B'&&*tsp=='A')){
		cout<<"El tipo de sangre del hijo es: AB"<<endl;
	}else if((*tsm=='A'&&*tsp=='O')||(*tsm=='O'&&*tsp=='A')){
		cout<<"El tipo de sangre del hijo es: A"<<endl;
	}else if((*tsm=='B'&&*tsp=='O')||(*tsm=='O'&&*tsp=='B')){
		cout<<"El tipo de sangre del hijo es: B"<<endl;
	}else if(*tsm=='B'&&*tsp=='B'){
		cout<<"El tipo de sangre del hijo es: B"<<endl;
	}else if(*tsm=='O'&&*tsp=='O'){
		cout<<"El tipo de sangre del hijo es: O"<<endl;
	}else{
		cout<<"Error en el tipo de sangre"<<endl;
	}
}
void Sangre::CalcularRH(char *rhm,char *rhp){
	if((*rhm=='+'&&*rhp=='-')||(*rhm=='-'&&*rhp=='+')){
		cout<<"El rh del hijo es: +"<<endl;
	}else if(*rhm=='+'&&*rhp=='+'){
		cout<<"El rh del hijo es: +"<<endl;
	}else if(*rhm=='-'&&*rhp=='-'){
		cout<<"El rh del hijo es: -"<<endl;
	}else{
		cout<<"Error en el RH"<<endl;
	}
}
