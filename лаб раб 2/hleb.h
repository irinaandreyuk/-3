#pragma once
#include "eda.h"
#include <string>
using namespace std;
class  hleb :public eda
{
	string tip;
public:
	hleb();
	~hleb();
	void setTip(string);
	string getTip(void);
	void show();
	void toConsole();
};