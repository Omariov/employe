#pragma once
#include <assert.h>
#include <iostream>
using namespace std;
namespace emp {
	class employe
	{
	private:
		string nom;
		int matricule;
		int echelle;
		static int sal;
		static int mat;
		static int somme;
	public:
		employe();
		employe(string,int);
		void print() const;
		double clacul() const;
		static int totalsal();


	};
}

