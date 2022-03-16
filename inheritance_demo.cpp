#include<iostream>
using namespace std;

class person{
public:
	void walk()
	{
		cout<<"Walking"<<endl;
	}
	void talk()
	{
		cout<<"Talking "<<endl;
	}
	void eat()
	{
		cout<<"Eating"<<endl;
	}
};

class Student:public person
{
public:
	void std()
	{
		cout<<"I am student"<<endl;
	}
};

class ITStudent:public Student
{public:
	void itstd()
	{	
		cout<<"I am IT related student"<<endl;
	}

};


class doctor:public person
{

public:
void surgury()
	{	
		cout<<"Doing Surgury"<<endl;
	} 
};

class footballer:public person
{
public:
void play()
	{	
		cout<<"Playing football"<<endl;
	} 
};		

class businessman:public person
{
public:
void doing_business()
	{	
		cout<<"Doing Business"<<endl;
	} 
};

int main()
{
	person p1;
	doctor d1;
	footballer f1;
	businessman b1;
	ITStudent it1;
	it1.walk();
	it1.std();
	it1.itstd();


	b1.walk();
	b1.talk();
	b1.eat();
	b1.doing_business();

	f1.walk();
	f1.talk();
	f1.eat();
	f1.play();

	d1.walk();
	d1.talk();
	d1.eat();
	d1.surgury();

	
	return 0;

}


		
	
