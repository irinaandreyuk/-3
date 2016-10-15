// лаб раб 2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "eda.h"
#include "мясо.h"
#include "ovoshi.h"
#include "hleb.h"
#include "lunch.h"
#include "tost.h"
using namespace std;

class Printer
{
public:
	void iAmPrinting(abstract* gogi)
	{
		cout << typeid(gogi).name() << endl;
		gogi->toConsole();
	}
};
int _tmain(int argc, _TCHAR* argv[])
{
	setlocale (LC_ALL, "rus");
	/*{
		eda h;
		h.setkkal(228);
		cout << "кол-во калорий " << h.getkkal()<<endl;
	}
	cout << "---------------" << endl;
	{
		meat r;
		r.setVid("курица");
		r.setkkal(34);
		cout << "\nвид мяса " << r.getVid() << endl;
		cout << "кол-во калорий " << r.getkkal() << endl << endl;
	}
		cout << "---------------" << endl;
	{
		ovoshi q;
		q.setTsena(18);
		q.setkkal(50);
		q.l.setKolich(1);
		cout << "\nцена " << q.getTsena() << endl;
		cout << "Количество лука " << q.l.getKolich() << endl;
		cout << "кол-во калорий " << q.getkkal() << endl << endl;
	}
		cout << "---------------" << endl;
		{
			hleb z;
			z.setTip("черный");
			z.setkkal(130);
			cout << "\nтип  " << z.getTip() << endl;
			cout << "кол-во калорий " << z.getkkal() << endl << endl;
		}
		cout << "---------------" << endl;
		{
			hleb z;
			z.setTip("черный");
			z.setkkal(130);
			cout << "\nтип  " << z.getTip() << endl;
			cout << "кол-во калорий " << z.getkkal() << endl << endl;
		}
		cout << "---------------" << endl;
		{
			lunch z;
			z.setStoim(500);
			z.setTip("Черный");
			z.setTsena(30);
			z.setVid("Курица");
			z.l.setKolich(1);
			
			cout << "\nСтоимость ланча  " << z.getStoim() << endl;
			cout << "Цена овощей  " << z.getTsena() << endl;
			cout << "кол-во лука" << z.l.getKolich() << endl;
			cout << "тип хлеба " << z.getTip() << endl;
			cout << "вид мяса " << z.getVid() << endl<<endl;
			
		}
		cout << "---------------" << endl;
		lunch a(21);
		cout << "Стоимость ланча " << a.getStoim() << endl;
		cout << "---------------" << endl;*/
		ovoshi::luck::vegetable();
		lunch l;
		l.setkkal(2);
		l.setStoim(23);
		l.setTip("Tip");
		l.setTsena(32);
		l.setVid("Kuritca");
		l.show();
		baton b;
		b.setMyka("Пшеница");
		b.setVes(500);
		b.show();
		tost m;
	//	m.setTip();
		//m.setSirop("кленовый");
		m.setMyka("рожь");
		m.setVes(100);
		m.show();
		meat t;
		t.setkkal(250);
		t.setVid("курица"); 
		instectore ooo;
		ooo.iKnowAllAboutYou(t);
		iCanModify(t);
		t.show();
		meat one;
		{
			cout << "counter of meat " << meat::getcounter()<<endl;
			meat two;
			cout << "counter of meat" << meat::getcounter()<<endl;
		}
		cout << "counter of meat" << one.getcounter()<<endl;


		eda *uuu = new eda;
		Printer ppp;
		uuu->setkkal(44);
		ppp.iAmPrinting(uuu);
		delete uuu;


		const tost zzz;
		cout << "----------------------------------------" << endl;
		(const_cast <tost*> (&zzz))->setVes(43);
		(const_cast <tost*> (&zzz))->setMyka("pshenitsa");
		(const_cast<tost*>(&zzz))->toConsole();
		cout << "----------------------------------------" << endl;
		eda *jjj;
		hleb *kkk;
		ovoshi *fff;
		cout << "\nПонижающее преобразование\ndynamic_cast<hleb*>(eda*):\n" <<
			typeid(dynamic_cast<hleb*>(jjj)).name() << endl;//downcast B->P
		cout << "\nПовышающее преобразование\ndynamic_cast<eda*>(hleb*):\n" <<
			typeid(dynamic_cast<eda*>(kkk)).name() << endl;//upcast P->B
		cout << "\nПерекрестное преобразование\ndynamic_cast<hleb*>(ovoshi*):\n" <<
			typeid(dynamic_cast<hleb*>(fff)).name() << endl;//crosscast P1->P2
		cout << "\ndynamic_cast<ovoshia*>(hleb*):\n" <<
			typeid(dynamic_cast<ovoshi*>(kkk)).name() << endl;
		cout << "----------------------------------------" << endl;
		eda vv;
		ovoshi bb; 
		cout << "\nstatic_cast<eda*>(&ovoshi):\n" <<
			typeid(static_cast<eda*>(&bb)).name() << endl;
		cout << "\nstatic_cast<ovoshi*>(&eda):\n" <<
			typeid(static_cast<ovoshi*>(&vv)).name() << endl;
		int i = 3;
		cout << i << " " << typeid(static_cast<double>(i)).name() << endl;

		return 0;
			
}

