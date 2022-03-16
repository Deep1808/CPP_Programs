#include<iostream>
using namespace std;

class Test{
		int x;
public:
	void read()
		{	
		cout<<"Enter a number=";
		cin>>x;
		}

class EVEN{
int i;
};
class ODD{};

void check()
{
if(x%2==0)
		throw EVEN{};
else
		throw ODD{};
}
};

int main()
{
	Test t;
	t.read();
	try{
		t.check();
	}
	catch(Test ::EVEN)
	{
		cout<<"Number is even"<<endl;
	}
	catch(Test ::ODD)
	{
		cout<<"Number is Odd"<<endl;
	}
return 0;
}
