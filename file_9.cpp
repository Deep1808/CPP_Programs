#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream outfile;
	outfile.open("seek.txt");
	outfile<<"THis is my file";
	long pos=outfile.tellp();
	outfile.seekp(pos-6);
	outfile<<"Again in file";
	outfile.close();
	cout<<"Done!!";
return 0;
}
