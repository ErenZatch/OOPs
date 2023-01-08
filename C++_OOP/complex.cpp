#include<iostream>
using namespace std;

class complex{
	private:
		int real;
		int img;
	public:
		complex();
		complex(int,int);
		void display();
};

complex::complex(){
	real=0;
	img=0;
}

complex::complex(int r,int i){
	real=r;
	img=i;
	
}

void complex::display(){
	cout<<real<<" + "<<img<<"i"<<endl;
}
int main(){
	complex c1;
	complex c2(12,24);
	c1.display();
	c2.display();
	return 0;
	
	
	
}






