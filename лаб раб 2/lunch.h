#pragma once
#include "����.h"
#include "ovoshi.h"
#include "hleb.h"
#include "eda.h"
using namespace std;
class  lunch:public  meat,public hleb,public ovoshi
{	int stoim;
int kkal;
public:
	int getkkal();
	void setkkal(int);
	lunch();
	lunch(int a)
	{
		stoim = a;
		
			cout << "����������� � ����������\n";
		


	}
	~lunch();
	void setStoim(int);
	int getStoim(void);
	void show();
	void toConsole();
};