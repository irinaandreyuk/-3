#include "stdafx.h"
#include <iostream>
#include "hleb.h"
#include "tost.h"

void baton::setVes(int z)
{
	ves = z;
}

int baton::getVes(void)
{
	return ves;
}

void baton::setMyka(string x)
{
	myka = x;
}

string baton::getMyka(void)
{
	return myka;
}

/*void tost::setSirop(string v)
{
	//this->setTip("typ");
	sirop = v;
}

string tost::getSirop(void)
{
	return sirop;
}*/

void baton::show()
{
	cout << "Вес хлеба: " << this->getVes() << endl;
	cout << "мука: " << this->getMyka() << endl;
}
void tost::show()
{
	cout << "Сироп: " << this->getSirop() << endl;
	cout << "Вес хлеба: " << this->getVes() << endl;
	cout << "мука: " << this->getMyka() << endl;
}
void baton::toConsole()
{
	cout << typeid(this).name() << endl;
	this->show();
}
void tost::toConsole()
{
	cout << typeid(this).name() << endl;
	this->show();
}