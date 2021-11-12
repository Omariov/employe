#include <assert.h>
#include <iostream>
#include "commerce.h"
using namespace std;
using namespace emp;
commerce::commerce():responsable()
{
}

commerce::commerce(string n, int e , int t, double a, double b):responsable(n,e,t)
{
	this->vente = a;
	this->comission = b;
}

double commerce::mensuel() const
{
	return((this->clacul()) + (this->vente * (this->comission / 100)));
}

void commerce::affichec() const
{
	this->afficher();
	cout <<" " << this->mensuel() << endl;
}

