#pragma once
#include <assert.h>
#include <iostream>
#include "responsable.h"
using namespace std;
namespace emp {
    class commerce : public responsable
    {
    private:
        double vente;
        double comission;
    public:
        commerce();
        commerce(string, int, int, double, double);
        double mensuel() const;
        void affichec() const;

    };
}
