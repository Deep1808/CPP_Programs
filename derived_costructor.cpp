#include<iostream>
using namespace std;

class Base{
	int x;
public:
	Base()
	{	
		cout<<"Base constructor"<<endl;	
	}
	~Base(){ cout <<"Destructor base"<<endl;}
	
};

class Derived:public Base{
	int y;
public:	
	Derived()
	{
		cout<<"Derived constructor"<<endl;
	}
	Derived(int i){cout<<"Parametrized constructor"<<endl;}

};

int main()
{
	Base b;
	Derived d1;
	Derived d2(20);
return 0;
}
