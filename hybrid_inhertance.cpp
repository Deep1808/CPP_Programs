#include<iostream>
using namespace std;

class A{
public:
	int x;
};

class B:virtual public A{
public:
	int z;
};

class C:virtual public A{
public:
	int y;
};

class D:public B,public C{
public:
int sum;
};

int main()
{
	D obj1;
	obj1.x=10;
	obj1.y=20;
	obj1.z=30;

obj1.sum=obj1.x+obj1.y+obj1.z;
cout<<obj1.sum;
	
return 0;
}
