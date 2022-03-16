#include<iostream>
using namespace std;

class A
{
public:
void displayA()
{cout<<"A";}
};

class B:public A
{
public:
void displayB()
{cout<<"B";}
};

class C:public B
{
public:
void displayC()
{cout<<"C";}
};

class D:public B,public C
{
public:
void displayD()
{cout<<"D";}
};

//class E:public D,public C
//{
//public:
//void displayE()
//{cout<<"E";}
//};

/*class F:public E
{
public:
void displayF()
{cout<<"F";}
};
*/
int main()
{
A a;
B b;
C c;
D d;
E e;
F f;

b.displayD();

return 0;
}	
