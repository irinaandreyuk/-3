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
	//cout << "����������� ������\n";

}
ovoshi::~ovoshi()
{
//	cout << "���������� ������\n";
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
	//cout << "����������� ���������� ����\n";

}
ovoshi::luck::~luck()
{
//	cout << "���������� ���������� ����\n";
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
	cout << "���� ������: " << o.getTsena() << endl;
	cout << "������� ���: " << o.getkkal() << endl;
	return o;
}
void ovoshi::show()
{
	cout << "������� ���" << this->getkkal() << endl;
	cout << "���� ������ " << this->getTsena() << endl;
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