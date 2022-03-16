#include<iostream>
using namespace std;

int main(){
	int *pt = new int;
	*pt =55;	

	cout <<"Value" <<*pt<<endl;
	cout <<"Address of int " <<pt<<endl;
	cout <<"Size of vairable" <<sizeof(*pt)<<endl;
	cout <<"Size of pointer" <<sizeof(pt)<<endl;
return 0;
}
