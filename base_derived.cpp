#include<iostream>
using namespace std;

class Base{
public:
	int b;
	void show(){
	cout<<"\nb="<<b;
}
};

class Derived:public Base{
public:
	int d;
	void show(){
	cout<<"\nb="<<b<<"\nd="<<d;
	}
};

int main()
{
	Base B1;
	Derived D1;
	Base *bptr;
	bptr=&B1;
	cout<<"Base class pointer assign address of base class object";
	bptr->b=100;
	bptr->show();
	bptr=&D1;
	bptr->b=200;
	cout<<"BASE CLASS";
	bptr->show();
	Derived *dptr;
	dptr=&D1;
	dptr->d=300;
	dptr->show();
return 0;
}

