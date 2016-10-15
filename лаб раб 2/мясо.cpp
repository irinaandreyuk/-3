#include "stdafx.h"
#include <iostream>
#include "мясо.h"
using namespace std;
int meat::counter = 0;
void iCanModify(meat&h)
{
	h.setkkal(78);
	h.vid = "modify";
}
void meat::setVid(string n)
{
	vid = n;
}
string meat::getVid(void)
{
	return vid;
}
meat::meat()
{
	counter ++;
//	cout << "Конструктор мяса\n";

}
meat::~meat()
{
	counter --;
	//cout << "Деструктор мяса\n";
}
void meat::show()
{
	cout << "калории еды " << this->getkkal() << endl;
	cout << "вид мяса " << this->getVid() << endl;
}
void meat::toConsole()
{
	cout << typeid(this).name() << endl;
	this->show();
}

