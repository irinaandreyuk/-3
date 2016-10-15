#pragma once
class abstract
{
public:
	abstract(){}
	virtual ~abstract(){}
	virtual void show() = 0;
	virtual void toConsole() = 0;

};

class eda:virtual public abstract
{
	int kkal;
public: 
	eda();
	~eda();
	void setkkal(int);
	int getkkal(void);
	void show();
	void toConsole();
};
