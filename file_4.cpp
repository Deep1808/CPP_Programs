#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	fstream fin;
	fin.open("demo.txt");
	int count=0;
	char word[30];
	if(!fin)
		cout<<"FIle didnot open"<<endl;
	else{
		while(!fin.eof())
		{
			fin>>word;
			count++;
		
		}
		}
	cout<<"Total count:"<<count<<endl;
	fin.close();
return 0;
}
