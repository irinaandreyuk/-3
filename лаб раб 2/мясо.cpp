#include "stdafx.h"
#include <iostream>
#include "����.h"
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
//	cout << "����������� ����\n";

}
meat::~meat()
{
	counter --;
	//cout << "���������� ����\n";
}
void meat::show()
{
	cout << "������� ��� " << this->getkkal() << endl;
	cout << "��� ���� " << this->getVid() << endl;
}
void meat::toConsole()
{
	cout << typeid(this).name() << endl;
	this->show();
}

