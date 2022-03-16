#include<iostream>
#include<string>
using namespace std;

class student{
public:
	int rolNo;
	string name;
	void studentinfo(){
		cout<<"roll no. is:"<<rolNo<<endl<<"name is:"<<name<<endl;
	}
};

class test{
public:
	int marks[5];
	void displaymarks(){
		cout<<"marks are: ";
		for(int i=0;i<5;i++){
			cout<<marks[i]<<" ";
		}
		cout<<endl;
	}
};

class result : public test,public student{
public:
	int total=0;
	float percent;

	void tot(){
		for(int i=0;i<5;i++){
			total+=marks[i];
		}
		cout<<"total is:"<<total<<endl;
	}

	void perce(){
		percent=(float)total/5;
		cout<<"percentage is:"<<percent<<endl;
	}
};

int main(){
	student s1;
	test t1;
	result r1;
	int arr[5];
	cout<<"Enter your roll number:";
	cin>>r1.rolNo;
	cout<<"Enter your name :";
	cin>>r1.name;
	for (int j=0;j<5;j++){
	    cout<<"Enter "<<j+1<<" subject marks:";
		cin>>arr[j];
	}
	for (int j=0;j<5;j++){
		r1.marks[j]=arr[j];
	}
	r1.studentinfo();
	r1.displaymarks();
	r1.tot();
	r1.perce();
	return 0;
}
