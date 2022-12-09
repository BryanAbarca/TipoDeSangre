#ifndef SANGRE_H
#define SANGRE_H
#include <iostream>
using namespace std;
class Sangre {
public:
	Sangre();
	Sangre(char *tsm,char *tsp,char *rhm,char *rhp);
	virtual ~Sangre();
	
	void setTsm(char *tsm);
	void setTsp(char *tsp);
	void setRhm(char *rhm);
	void setRhp(char *rhp);
	
	char getTsm();
	char getTsp();
	char getRhm();
	char getRhp();
	
	void CalcularTS(char *tsm,char *tsp);
	void CalcularRH(char *rhm, char *rhp);
private:
	char *tsm;
	char *tsp;
	char *rhm;
	char *rhp;
};

#endif

