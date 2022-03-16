#include<iostream>
#include<fstream>
using namespace std;

class student
{
public:
	int roll;
	char name[25];
	float marks;
	void getdata()
	{
		cout<<"Enter roll call 12and name"<<endl;
		cin>>roll>>name;
		cout<<"ENter marks"<<endl;
		cin>>marks;
	}
	
	void Addrecord()
	{
		fstream f;
		student stu;
		f.open("Student_Data.dat",ios::app|ios::binary);
		stu.getdata();
		f.write((char *) &stu,sizeof(stu));
		f.close();
	}
	void display()
	{
		fstream f;
		student s;
		f.open("Student_Data.dat",ios::in|ios::binary);
		do
		{
		f.read((char*) &s,sizeof(s));
		
		cout<<"Roll "<<s.roll<<endl;
		cout<<"Name "<<s.name<<endl;
		cout<<"Marks "<<s.marks<<endl;
		}while(!f.eof());
		f.close();
		
	}
	
};

int main()
{
	student s1,s2;
	char ch='n';
	do{
		s.Addrecord();
		cout<<"Want ot add MORE ??(Y/N)"<<endl;
		cin>>ch;
	}while(ch=='y'||ch=='Y');
	cout<<"Updated DATA"<<endl;
	s.display();
return 0;
}
