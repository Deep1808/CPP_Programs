#include<iostream>
using namespace std;

class student
{
int marks[3];
string name;
public:
	int roll_no;
void getData()	
	{
		cout<<"Enter the Roll No." << endl;
		cin >>roll_no;
		cout<<"Enter the Name" << endl;
		cin >>name;
		for(int i=0;i<3;i++)
		{
			cout << "Enter the "<<i<<"subject marks"<<endl;
			cin >> marks[i];		
		}		
	}
	void printData(){
		cout<<"Roll No.= "<<roll_no << endl;
		cout<<"Name= "<<name << endl;
		for(int i=0;i<3;i++)
		{
			cout<<""<<i<<"subject mark" << endl;
			cout<<marks[i]<<endl;		
		}
	}	
};

class derived: public student{
};

int main()
{
	derived d1;
	derived *ptr;
	ptr=&d1;
	ptr->getData();
	ptr->printData();
	return 0;	
}
