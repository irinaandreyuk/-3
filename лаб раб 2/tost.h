#pragma once
#include "hleb.h"

class baton :protected hleb
{
protected:
	int ves;
public:
	string myka;
	void setMyka(string);
	string getMyka(void);
	void setVes(int);
	int getVes(void);
	void show();
	void toConsole();
};
class tost: public baton
{
	const string sirop="��������";
public:
	//void setSirop(string);
	string getSirop(void) const { return sirop; };// � ����� ������� ������ ������ ���� ������
	void show();
	void toConsole();
};
