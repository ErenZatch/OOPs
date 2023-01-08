#include<iostream>
using namespace std;



void add(int x, int y ){
	int sum =x+y;
	cout<<sum<<endl;
	
}
void add(float x,float y){
	float sum_fl=x+y;
	cout<<sum_fl<<endl;
}

void sub(int x, int y){
	int minus=x-y;
	cout<<minus<<endl;
	
}
void sub(float x,float y){
	float minus_fl=x-y;
	cout<<minus_fl<<endl;	
}
int main(){
	int a=5;
	int b=8;
	float c=8.52;
	float d=12.33;
	add(a,b);
	add(c,d);
	sub(a,b);
	sub(c,d);
	
	
	
	
}
