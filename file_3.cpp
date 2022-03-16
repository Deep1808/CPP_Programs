#include<iostream>
#include<fstream>
using namespace std;


int main()
{
	fstream input;
	string str,str2;
	
	input.open("demo.txt");
	if(!input)
		cout<<"FIle is not opening"<<endl;
	else{
		while(!input.eof()){
			input>>str>>str2;
			cout<<str<<'\t'<<str2<<endl;
			}
		}
	input.close();
return 0;
}
	
