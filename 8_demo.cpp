#include<iostream>
using namespace std;

class base{
public:
	int i,j;
	void set(int a,int b)
	{
		i=a;
		j=b;
	}

	void show()
	{
		cout<<i<<""<<j;
	}
};

class derived1 :public base{
	int k;
public:
	void setk(){k=i*j;}
	void showk()
	{
		cout<<k<<"\n";
	}
};

class derived2 :public derived1{
	int m;
public:
	void setm(){ m=i-j;}
	void showm(){ cout<<m<<"\n";}
};


int main()
{
	base *ptr;
	base b;
	derived1 d;
	ptr=&b;
	cout<<ptr;
	ptr=&d;
	//cout<<d;	
	derived1 ob1;
	derived2 ob2;
	ob1.set(1,2);
	ob1.show();
	ob2.set(3,4);
	ob2.show();
	
return 0;
}
