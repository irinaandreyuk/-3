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
//	cout << "����������� �����\n";

}
hleb::~hleb()
{
//	cout << "���������� �����\n";
}
void hleb::show()
{
	cout << "������� ��� " << this->getkkal() << endl;
	cout << "��� ����� " << this->getTip() << endl;

}
void hleb::toConsole()
{
	cout << typeid(this).name() << endl;
	this->show();
}