#include<iostream>

using namespace std;

class Distance
{
int feet,inches;
public:
	Distance(int a,int b)
	{
	feet =a;
	inches=b;
	cout<<"Contructor CALLED !!!"<<endl;
	}
	Distance(Distance &obj1){
	cout<<"Inside copy constructor"<<endl;
	}

	void add(Distance ob,Distance obj2){
	cout<<"Inside the ADD()"<<endl;

	~Distance()
	{
	cout<<"In destuctor"<<endl;
	}
};

int main()
{	
	//Distance obj1;
	//Distance obj2 = obj1;
	//obj1.add(obj1,obj2);
	int f,i;
	cin>>f>>i;
	Distance(f,i);
	return 0;
}
