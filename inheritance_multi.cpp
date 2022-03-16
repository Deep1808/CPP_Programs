#include<iostream>
using namespace std;

class liquid
{
public:
void liq()
	{
		cout<<"Liquid can take shpae of container it is in!!!"<<endl;
	}
};

class fuel
{
public:
void f()
	{
		cout<<"Fuel can be from fossils minerals"<<endl;
	}
};

class petrol:public liquid,public fuel
{
public:
void p()
{
	cout<<"PETROL is too costly around 100 rupees"<<endl;
}
};

int main()
{
	petrol p1;
	p1.p();
	p1.f();
	p1.liq();

return 0;
}
