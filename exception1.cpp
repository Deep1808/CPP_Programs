#include<iostream>
using namespace std;

int main()
{
int x,ans,number;
number =10;
cin>>x;
//ans=number/x;
//cout<<"Result:"<<ans;

try{
if(x==0)
	throw ans;
else{
	ans=1;
	cout<<ans;
}

catch(int x){
	cout<<"Cannot divide by :"<<x;
	}
return 0;

}
