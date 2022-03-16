#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream fin;
	fin.open("demo.txt");
	int count=0;
	string word;
	if(!fin)
		cout<<"FIle didnot open"<<endl;
	else{
		while(getline(fin,word))
		{
			fin>>word;
			count++;
		
		}
		}
	cout<<"Total count:"<<count<<endl;
	fin.close();
return 0;
}
