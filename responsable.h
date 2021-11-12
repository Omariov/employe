#pragma once
#include <assert.h>
#include <iostream>
#include "employe.h"
using namespace std;
namespace emp {
    class responsable : public employe
    {
    private:
        responsable* infd;
        int taille;
        int nbremp=0;
    public:
        responsable();
        responsable(string,int,int);
        void ajouter(responsable&);
        void afficher()const;
        ~responsable();

    };
}
