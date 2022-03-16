#include<iostream>
using namespace std;

int main()
{
int n1,n2, x,div;
cin>>n1;
cin>>n2;


try{
	if(n2!=n1){
			float div=(float)n1/n2;
	if(div<0)
		throw 'e';
	cout<<"n1/n2="<<div;
	}
else{
	throw n2;
}
}
catch(int e)
{
	cout<<"Exception:Division by zero";
}
catch(char st)
{
	cout<<"YOU entered character";
}
catch(...)
{
	cout<<"Exception for C++ codes";
}

return 0;

}

