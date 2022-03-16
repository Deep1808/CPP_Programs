#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	fstream fp;
	char buf[100];
	int pos;
	fp.open("Read_write.txt",ios::out|ios::ate);
	cout<<"Writing to a file"<<endl;
	fp<<"First line"<<endl;
	fp<<"Second line"<<endl;
	pos=fp.tellp();
	cout<<"Current position:"<<pos<<endl;
	fp.seekp(-7,ios::cur);
	fp<<endl<<"Random data";
	fp.seekp(7,ios::beg);
	fp<<"Hello world";
	fp.close();
	cout<<"Done writting"<<endl;
	fp.open("Read_write.txt");
	cout<<"Reading the file"<<endl;
	fp.seekp(0);
	while(fp.getline(buf,100))
		cout<<buf<<endl;
	pos=fp.tellg();
	cout<<"Pos pointer is at "<<pos<<endl;
return 0;
}
