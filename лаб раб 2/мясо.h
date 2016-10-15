#pragma once
#include "eda.h"
#include <string>
#include<iostream>
using namespace std;
class instectore;
class meat;
/*class curator{
	void iCanModify(meat&h)
	{
		h.setkkal(78);
		h.vid = "modify";
	}
};*/
void iCanModify(meat&h);
class  meat :public eda
{
	string vid;
private:
	static int counter;
	friend void iCanModify(meat& h);
public:
	meat(int a)
	{

	}
	meat();
	~meat();
	static int getcounter()
	{
		return counter;
	}

	void setVid(string);
	string getVid(void);
	void show();
	friend instectore;
	//friend void curator::iCanModify(meat&);
	
	void toConsole();
};

class instectore
{
public:
	void iKnowAllAboutYou(meat& h)
	{
		cout << " вызов функции iKnowAllAboutYou клвсса инспектор " << endl;
		cout <<"вид мяса " << h.vid << endl;
		cout << "калории еды" << h.getkkal() << endl;

	}
};