#include<iostream>
using namespace std;

class A{
	private:
		int i=1;
	public:
		A(){
		cout<<"Inside Copy-1"<<endl;	
		}
		A(A &obj1){
		cout<<"Insode copy -2"<<endl;
	}
	
	void add(A obj1,A obj2){
	cout<<"Inside ADD()"<<endl;	
	}

};

int main()
{
	A obj1,obj2;
	obj2=obj1;
	obj1.add(obj1,obj2);

	return 0;
}

