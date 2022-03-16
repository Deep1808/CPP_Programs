#include<iostream>
using namespace std;

class Calculator{
public:
	int input1;		
	int input2;
	
	void setInput(int a,int b){
	input1=a;
	input2=b;
	}

	int add();

	int sub(){
		return input1-input2;
	}

	int mul(){
		return input1*input2;
	}
	
	int div(){
		return input1/input2;
	}
};

int Calculator :: add(){
			return input1+input2;
		}

int main(){
	Calculator obj1;
	int ch;
	int a,b;
	cout<<"Enter 2 numbers:"<<endl;
	cin>>a;
	cin>>b; 
	obj1.setInput(a,b);
	cout<<"The inputs:"<<obj1.input1<<" "<<obj1.input2<<endl;

	cout<<"MENU"<<endl;
	cout<<"Press 1 for ADDITION"<<endl;
	cout<<"Press 2 for SUBTRACTION"<<endl;
	cout<<"Press 3 for MULTIPLICATION"<<endl;
	cout<<"Press 4 for DIVISION"<<endl;
	cin>>ch;
	switch (ch){
	case 1:	
		cout<<"The sum : "<<obj1.add()<<endl;
	break;
	case 2:
		cout<<"The subtraction :"<<obj1.sub()<<endl;
	break;
	case 3:
		cout<<"The multiplication :"<<obj1.mul()<<endl;
	break;
	case 4:
		cout<<"The division :"<<obj1.div()<<endl;
	break;
	}
return 0;
}
