#include<iostream>
#
using namespace std;



class demo{//blueprint for the class no memory allocation
	public:
		int a;
		string str;//attributes,data members 
		float b;
		
	void display();//functions declared in a class is called a method
	
	
	
};
	void demo::display(){
		cout<<"hello from outsite function"<<endl;
		cout<<a<<endl;
		cout<<str<<endl;
		cout<<b;
	}




int main(){
	
	demo ob1;
	ob1.a=1;
	ob1.str="wuihfwuif";
	ob1.b=0.44;
	ob1.display();
	
	
	
	
	
	
}
