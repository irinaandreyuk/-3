#include "stdafx.h"
#include <iostream>
#include "hleb.h"
using namespace std;
void hleb::setTip(string p)
{
	tip = p;
}
string hleb::getTip(void)
{
	return tip;
}
hleb::hleb()
{
//	cout << "Конструктор хлеба\n";

}
hleb::~hleb()
{
//	cout << "Деструктор хлеба\n";
}
void hleb::show()
{
	cout << "калории еды " << this->getkkal() << endl;
	cout << "тип хлеба " << this->getTip() << endl;

}
void hleb::toConsole()
{
	cout << typeid(this).name() << endl;
	this->show();
}