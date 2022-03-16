#include<iostream>

using namespace std;

class Measure{
public:
	int input1;
	int input2;
	int input3;
void setInput(int a,int b,int c){
	input1=a;
	input2=b;
	input3=c;
	}

	int area(){
	return (2*(input1*input2+input2*input3+input3*input1));
	}

	int volume(){
	return input1*input2*input3;
	}
	
	Measure add(Measure obj1,Measure obj2)
	{
		Measure obj3;
		obj3.input1=obj1.input1+obj2.input1;
		obj3.input2=obj1.input2+obj2.input2;
		obj3.input3=obj1.input3+obj2.input3;
		return obj3;
	}
};

int main(){
	Measure obj1;	
	Measure obj2;
	Measure obj3;

	obj1.setInput(2,3,5);
	cout <<"Area of 2,3,5 is " <<obj1.area();
	cout <<"	Volume of 2,3,5 is " <<obj1.volume()<<endl;

	obj2.setInput(4,8,10);
	cout <<"Area of 4,8,10 is " <<obj2.area();
	cout <<"	Volume of 4,8,10 is " <<obj2.volume()<<endl;
	
	obj3=obj1.add(obj1,obj2);
	cout<<"The sum of length :"<<obj3.input1<<endl;
	cout<<"The sum of breath :"<<obj3.input2<<endl;
	cout<<"The sum of height :"<<obj3.input3<<endl;

	return 0;
}
