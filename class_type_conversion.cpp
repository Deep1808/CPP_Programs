#include<iostream>
using namespace std;

class Time{
	int hour,min;
	
public:
	Time(int x){
		cout <<"Inside the time Parameterized cons\n";
		
		hour = x/60;
		min = x % 60;
	}
	
	Time(float x){
		cout<<"Inside float Parametrized\n";
	int a;
		a=x;
		hour=a;
			
	float a1;
		a1=(x-a)*100;		
		min=a1;

	}

	void display(){
		cout <<"HOUR :"<<hour<<"	MINUTE :"<<min<<endl;
	}

	void operator=(int x){
		cout <<"Inside Overload\n";
		hour = x/60;
		min = x % 60;
	}

};

int main()
{
	int x=130;
	float a=1.54;
	Time T1(x);
	Time T2(a);
//	T1=x;
	T1.display();
	T2.display();
return 0;
}
