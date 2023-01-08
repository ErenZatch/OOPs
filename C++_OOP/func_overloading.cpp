#include<iostream>
using namespace std;

int add(int a,int b){
		
	return a+b;
	
}

double add(double x,double y)
{
	return x+y;
}

int main(){
	int add_int;
	add_int=add(3,6);
	
	double add_float;  
	
	add_float=add(4.3,8.2);

	cout<<add_int<<endl;
	cout<<add_float;
}
