#include<iostream>
using namespace std;

class location{
	int lon,lat;
	public:
		location(){
			lon=0;
			lat=0;
		cout <<"Default Con"<<endl;		
	}
		
		location(int a,int b){
			lon=a;
			lat=b;
		cout <<"Parametrized"<<endl;		
	}

		void display(){
		cout <<"Co-ordinates are LONGITUDE:" <<lon <<"LATITUDE:" <<lat<<endl;
		}

	void *operator new(size_t byte){
		void *ptr;
		cout <<"Inside overloading NEW"<<endl;
		ptr = malloc (byte);
		if(ptr==NULL){
			cout <<"Could not allocate memory\n";
			return 0;
		}
		return ptr;
	}
	
	void operator delete(void *ptr){
		cout <<"Inside overloading DELETE"<<endl;
		free(ptr);
		}
	
};

int main(){
	location l1,l2(10,15);
	l2.display();

	location *loc = new location(2,2);
	loc->display();
	delete loc;
		loc->display();		
return 0;
}







