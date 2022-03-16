#include<iostream>
#include<fstream>
using namespace std;

int main()
{
ifstream input;
string str;
input.open("demo.txt");
if(!input)
	cout<<"File is unable to OPEN !!"<<endl;
else{

	while(!input.eof()){
		input>>str;
		cout<<str;
		}
	}
}
