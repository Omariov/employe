#include <assert.h>
#include <iostream>
#include "employe.h"
#include "responsable.h"
#include "commerce.h"
using namespace std;
using namespace emp;
int main()
{
	employe a("omar", 10);
	employe b("otman", 11);
	responsable c("salah", 12, 10);
	commerce d("jamal", 13, 10, 200, 10);
	a.print();
	b.print();
	c.afficher();
	d.affichec();
	cout << employe::totalsal();
}
