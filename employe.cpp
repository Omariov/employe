#include <assert.h>
#include <iostream>
#include "employe.h"
using namespace std;
using namespace emp;
int employe::sal = 200;
int employe::mat =0;
int employe::somme = 0;

employe::employe()
{
	mat++;
	this->matricule = mat;
}

employe::employe(string n,int e)
{
	mat++;
	this->nom = n;
	this->matricule = mat;
	this->echelle = e;
	somme += this->echelle * sal;
}

void employe::print() const
{
	cout << endl << this->nom<<" " << this->matricule<<" " << this->echelle << " " << this->clacul() ;
}

double employe::clacul() const
{
	return(this->echelle * sal);
}

int employe::totalsal() 
{
	return(employe::somme);
}
