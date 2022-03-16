#include<iostream>
using namespace std;

class convert
{
public:
	double var1;
	double var2;

	convert(double i)
	{
		var1=i;
	}
	double getconv(){return var2; }
	double getinit(){return val1; }
virtual void compute()=0;
};

class l_to_g:public convert{
public:
	l_to_g(double i):covert(i){}
	void compute(){
	val2=var1/3.7854;
	}
};

class f_to_c:public convert{
public:
	f_to_c(double i):covert(i){}
	void compute(){
	val2=(var1-32)/1.8;
	}
};

int main()
{
	convert *p;
	l_to_g lgob(4);
	f_to_c fcob(78);

p=&lgob;
cout<<p->getinit()<<"Liters is ";<<p->compute();
cout<<p->getconv()<<"Gallons\n";
p=&fcob;
cout<<p->getinit()<<"In farenheit ";<<p->compute();
cout<<p->getconv()<<"Celcius\n";

return 0;
}



