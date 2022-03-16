#include<iostream>
using namespace std;

int sum(int i)
{
	return i;
}

int sum(int i,int j)
{
	return i+j;
}

int sum(int i,int j,int k)
{
	return i+j+k;
}

int sum(int i=0,int j,int k)
{
	return i+j+k;
}

int main()
{
//int i=10
cout <<sum(1)<<endl;
cout <<sum(2,5)<<endl;
cout <<sum(13,3,5)<<endl;
return 0;
}
