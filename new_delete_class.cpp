#include<iostream>
using namespace std;

class A{
public :
	int i,j;
	A(){
		cout <<"Inside constructor"<<endl;
	i=0;
	j=10;	
	}
	
	~A(){
		cout <<"Inside Destructor"<<endl;
	}

};
int main()
{
	int *p1,*p2,sum;
	A a1,*a2;	
	p1=new int;
	p2=new int;

	//a2= new A [5];
	a2=(in *)malloc(sizeof(in)*5);
	//a2=new A;
	cout <<"Enter first number:";
	cin >>*p1;
	cout <<"Enter second number:";
	cin >>*p2;

	sum=*p1 + *p2;
	cout <<"Sum of pointer variables =" <<sum<<endl;

	delete p1;
	delete p2;
	delete [] a2;
return 0;
}	
