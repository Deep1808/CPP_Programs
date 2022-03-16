#include<iostream>
using namespace std;

int main()
{
	int a=2;
	try{
		if(a==1)
			throw a;
	else if(a==2)
			throw'A';
	else if(a==3)
			throw 4.5;
	}
	
catch(int)
{cout<<"A=1...exection";}
catch(char)
{cout<<"A=2....so 'A' is exection ";}
catch(float)
{cout<<"A=3......so float 4.5";}
return 0;
}
