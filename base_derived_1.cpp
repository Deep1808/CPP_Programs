#include<iostream>
using namespace std;

class Base{
public:
	int b;
	void show(){
	cout<<"BASE!!\n";
}
};

class Derived1:public Base{
public:
	int d;
	void show(){
	cout<<"Derv -1\n";
	}
};

class Derived2:public Base{
public:
	void show(){
	cout<<"Derv -2 \n";
	}
};

int main()
{
	Derived1 dv1;
	Derived2 dv2;
	Base *ptr;
	ptr=&dv1;
	ptr=&dv2;
	ptr->show();
ptr=&dv1;
	ptr->show();
	ptr->show();
	return 0;
}
