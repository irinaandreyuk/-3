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
	cout << "��� �����: " << this->getVes() << endl;
	cout << "����: " << this->getMyka() << endl;
}
void tost::show()
{
	cout << "�����: " << this->getSirop() << endl;
	cout << "��� �����: " << this->getVes() << endl;
	cout << "����: " << this->getMyka() << endl;
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