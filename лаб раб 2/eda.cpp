#include "stdafx.h"
#include <iostream>
#include "eda.h"
using namespace std;
void eda::setkkal(int k)
{
	kkal = k;
}
int eda::getkkal(void)
{
	return kkal;
}
eda::eda()
{
	//cout << "����������� ���\n";

}
eda::~eda()
{
	//cout << "���������� ���\n";
}
void eda::show()
{
	cout << "������� " << this->getkkal() << endl; 

}
void eda::toConsole()
{
	cout << typeid(this).name() << endl;
	this->show();
}