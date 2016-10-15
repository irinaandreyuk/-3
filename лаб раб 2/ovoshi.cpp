#include "stdafx.h"
#include <iostream>
#include "ovoshi.h"
using namespace std;
void ovoshi::setTsena(int i)
{
     tsena = i;
}
int ovoshi::getTsena(void)
{
	return tsena;
}
ovoshi::ovoshi()
{
	//cout << " онструктор овощей\n";

}
ovoshi::~ovoshi()
{
//	cout << "ƒеструктор овощей\n";
}
void ovoshi::luck::setKolich(int u)
{
	kolich = u;
}
int ovoshi::luck::getKolich(void)
{
	return kolich;
}
ovoshi::luck::luck()
{
	//cout << " онструктор вложенного лука\n";

}
ovoshi::luck::~luck()
{
//	cout << "ƒеструктор вложенного лука\n";
}
bool ovoshi::isLuck()
{
	return this->l.getKolich() > 0;
}
ovoshi ovoshi::luck::vegetable()
{
	ovoshi o;
	o.setkkal(20);
	o.setTsena(5000);
	cout << "цена овощей: " << o.getTsena() << endl;
	cout << "калории еды: " << o.getkkal() << endl;
	return o;
}
void ovoshi::show()
{
	cout << "калории еды" << this->getkkal() << endl;
	cout << "цена овощей " << this->getTsena() << endl;
}
ovoshi::ovoshi(const ovoshi& g)
{
	(dynamic_cast<eda*> (this))->setkkal(const_cast<ovoshi*>(&g)->getkkal());
	this->setTsena((const_cast<ovoshi*>(&g))->getTsena());
}
void ovoshi::toConsole()
{
	cout << typeid(this).name() << endl;
	this->show();
}