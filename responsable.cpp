#include <assert.h>
#include <iostream>
#include "responsable.h"
using namespace std;
using namespace emp;
responsable::responsable():employe()
{
}
responsable::responsable(string n, int e, int t) :employe(n, e)
{
	this->taille = t;
	this->infd = new responsable[t]();

}

void responsable::ajouter(responsable& r) 
{
	this->nbremp++;
	this->infd[nbremp-1] = r;
}

void responsable::afficher() const
{
	if (this->nbremp>0)
	{
		this->print();
		for (int i = 0; i < nbremp; i++)
		{
			this->infd[i].afficher();
		}
		return;
	}
	this->print();
}

responsable::~responsable()
{
	if (this->nbremp > 0)
	{
		this->infd = NULL;
		for (int i = 0; i < nbremp; i++)
		{
			delete[] this->infd;
		}
		return;
	}
	this->infd = NULL;
	
	
}
