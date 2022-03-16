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
	
	friend Complex operator +(Complex ob1, Complex ob2);
	friend Complex operator -(Complex ob1, Complex ob2);
	friend Complex operator *(Complex ob1, Complex ob2);
	friend Complex operator /(Complex ob1, Complex ob2);
	friend Complex operator %(Complex ob1, Complex ob2);
	friend Complex operator >=(Complex ob1, Complex ob2);
	friend Complex operator <=(Complex ob1, Complex ob2);
	friend Complex operator !=(Complex ob1, Complex ob2);
	friend Complex operator --(Complex ob1);
	friend Complex operator ++(Complex ob1);

};
Complex operator + (Complex ob1,Complex ob2)
	{
		Complex temp;
		temp.real = ob1.real + ob2.real;
		temp.img = ob1.img + ob2.img;
		return temp;
	}

Complex operator - (Complex ob1,Complex ob2)
	{
		Complex temp;
		temp.real = ob1.real - ob2.real;
		temp.img = ob1.img - ob2.img;
		return temp;
	}

Complex operator * (Complex ob1,Complex ob2)
	{
		Complex temp;
		temp.real = ob1.real * ob2.real;
		temp.img = ob1.img * ob2.img;
		return temp;
	}

Complex operator / (Complex ob1,Complex ob2)
	{
		Complex temp;
		temp.real = ob1.real / ob2.real;
		temp.img = ob1.img / ob2.img;
		return temp;
	}

Complex operator % (Complex ob1,Complex ob2)
	{
		Complex temp;
		temp.real = ob1.real % ob2.real;
		temp.img = ob1.img % ob2.img;
		return temp;
	}

Complex operator >= (Complex ob1,Complex ob2)
	{
		Complex temp;
	if(ob1.real > ob2.real && ob1.img > ob2.img)
		{
		temp.real = ob1.real;
		temp.img = ob1.img;
		return temp;		
		}
	else {
		temp.real = ob2.real;
		temp.img = ob2.img;
		return temp;		
	     }
	}
Complex operator <= (Complex ob1,Complex ob2)
	{
		Complex temp;
	if(ob1.real < ob2.real && ob1.img < ob2.img)
		{
		temp.real = ob1.real;
		temp.img = ob1.img;
		return temp;		
		}
	else {
		temp.real = ob2.real;
		temp.img = ob2.img;
		return temp;		
	     }
	}

Complex operator != (Complex ob1,Complex ob2)
	{
		Complex temp;
	if(ob1.real == ob2.real && ob1.img == ob2.img)
		{
		cout <<"Both objects are EQUAL !!"<<endl;
		return temp;		
		}
	else {
		cout <<"Both objects are not equal !!"<<endl;	
		return temp;		
	     }
	}

Complex operator --(Complex ob1)
	{
		Complex temp;
		temp.real=ob1.real--;
		temp.img=ob1.img--;
	return temp;	
	}

Complex operator ++(Complex ob1)
	{
		Complex temp;
		temp.real=ob1.real++;
		temp.img=ob1.img++;
	return temp;
	}

int main()
{
	Complex c1(15,20),c2(15,20);
	Complex c3(1,1),c4,c5,c6,c7,c8,c9,c10,c11,c12,c13;

	c1.display();
	c2.display();
	c4=c1 + c2;
	c5=c1 - c2;
	c6=c1 * c2;
	c7=c1 / c2;
	c8=c1 % c2;
	c9=c1 >= c2;
	c10=c1 <= c2;
	c11=c1 != c2;
	c12=--c1;
	c13=++c1;

	cout <<"RESULT" <<endl;
	c4.display();
	c5.display();
	c6.display();
	c7.display();	
	c8.display();	
	cout <<"Between Object 1 and Object 2 .Object with larger value :"<<endl; 	
	c9.display();
	cout <<"Between Object 1 and Object 2 .Object with smaller value :"<<endl; 	
	c10.display();
	c11.display();
	c12.display();
	c13.display();

return 0;
}

