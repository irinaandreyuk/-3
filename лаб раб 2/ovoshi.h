#pragma once
#include "eda.h"
#include "мясо.h"
class ovoshi :public eda
{
	int tsena; 
public:
	class luck
	{
		int kolich;
	public:
		luck();
		~luck();
		void setKolich(int);
		int getKolich(void);
		static ovoshi vegetable();
	}l;
	ovoshi();
	~ovoshi();
	ovoshi(const ovoshi&);
	void setTsena(int);
	int getTsena(void);
	bool isLuck();
	void show();
	void toConsole();
};