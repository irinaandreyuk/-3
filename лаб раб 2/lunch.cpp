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
//	cout << "����������� �����\n";

}
lunch::~lunch()
{
//	cout << "���������� �����\n";
}
void lunch::show()
{
	cout << "������� ��� " << this->getkkal() << endl;
	cout << "��� ����� " << this->getTip() << endl;
	cout << "��������� ����� " << this->getStoim() << endl;
	cout << "���� ������ " << this->getTsena() << endl;
	cout << "��� ���� " << this->getVid() << endl;

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