#include<iostream>
using namespace std;

void demo()throw(int,double)
{
int a=1;
	if(a==1)
throw a;
	else if(a==2)
throw 'A';
	else if(a==3)
throw 4.5;
}

int main()
{
try{
	demo();
}
	catch(int n)
	{
		cout<<"Exception caught"<<endl;
	}
	catch(float n)
	{
		cout<<"Exception caught"<<endl;
	}
		cout<<"End of program"<<endl;

return 0;
}
