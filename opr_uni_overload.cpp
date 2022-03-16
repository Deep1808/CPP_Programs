#include<iostream>
using namespace std;

class Complex{

int real, img;
public:
	Complex(){
	real = 0;
	img = 0;
	}

	Complex(int x,int y){
	real = x;
	img = y;
	}
	
	void display(){
	cout <<"The value for real part: "<< real <<" and Img.part :" << img<< endl;
	}
	friend Complex operator --(Complex ob1);
	friend Complex operator ++(Complex ob1);


};

Complex operator --(Complex ob1)
	{
		Complex temp;
		temp.real=--ob1.real;
		temp.img=--ob1.img;
	return temp;	
	}

Complex operator ++(Complex ob1)
	{
		Complex temp;
		temp.real=++ob1.real;
		temp.img=++ob1.img;
	return temp;
	}

int main()
{
	Complex c1(15,20),c2(15,20);
	Complex c3,c4;

	c1=++c1;
	c1.display();
	c2=--c2;
	c2.display();
	
return 0;
}
