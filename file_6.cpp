#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	fstream fin,fout;
	fin.open("demo.txt");
	fout.open("data.txt");
	char ch;
	while(!fin.eof()){
		fin.get(ch);
		fout<<ch;
	}
	cout<<"Copy DONE!!"<<endl;
	fin.close();
	fout.close();
return 0;
}
