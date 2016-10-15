#include "stdafx.h"
#include <iostream>
#include "lunch.h"
using namespace std;
void lunch::setStoim(int k)
{
	stoim = k;
}
int lunch::getStoim(void)
{
	return stoim;
}
lunch::lunch()
{
//	cout << "Конструктор ланча\n";

}
lunch::~lunch()
{
//	cout << "Деструктор ланча\n";
}
void lunch::show()
{
	cout << "калории еды " << this->getkkal() << endl;
	cout << "тип хлеба " << this->getTip() << endl;
	cout << "стоимость ланча " << this->getStoim() << endl;
	cout << "цена овощей " << this->getTsena() << endl;
	cout << "вид мяса " << this->getVid() << endl;

}
int lunch::getkkal()
{
	return kkal;
}
void lunch::setkkal(int k)
{
	kkal = k;
}
void lunch::toConsole()
{
	cout << typeid(this).name() << endl;
	this->show();
}