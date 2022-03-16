#include<iostream>
using namespace std;

class space
{
	int x,y,z;
	public:
		space()
		{
			x=y=z=1;
		}
		space(int a,int b,int c)

		{
			x=a;
			y=b;
			z=c;
		}
		void display(){	
		cout <<"x="<<x<<",y="<<y<<",z="<<z<<endl;
			}
		void operator -();
};

void space ::operator-()
{
	x=-x;
	y=-y;
	z=-z;
}

int main()
{
	space s(2,3,5);
	s.display();
	-s;
	s.display();

	return 0;
}
