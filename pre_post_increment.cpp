#include<iostream>
using namespace std;

class demo{
int m;
public:
	demo(){m=0;}
	demo(int x){
		m=x;
		}

	demo operator ++(){
		++m;
		cout <<"Pre-Increment :"<<m<<endl;
			}

	demo operator ++(int){
		demo temp;
		temp.m++;
		cout <<"Post-Incement :"<<m<<endl;
		return temp;		

		}

	demo operator --(){
		--m;
		cout <<"Pre-Decrement :"<<m<<endl;
			}

	demo operator --(int){
		demo temp;
		temp.m--;
		cout <<"Post-Decrement :"<<m<<endl;
		return temp;		
		}
};


int main()
{
	demo d1(5),d2(5),d3(5),d4(5),d5;
	++d1;
	d5=d2++;
	--d3;
	d5=d4--;
	
	return 0;
}
 
