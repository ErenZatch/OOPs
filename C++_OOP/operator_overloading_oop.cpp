#include<iostream>
using namespace std;
class complex{
	float r,i;
	public:
		complex(){
			r=0;
			i=0;
		}
	complex operator+(complex);
	complex operator*(complex);
	friend istream & operator>>(istream & input,complex &t){
		cout<<"enter real part:";
		input>>t.r;
		cout<<"enter imaginary part:";
		input>>t.i;
		return input;
	}
	friend ostream &operator<<(ostream & output,complex &t){
		output<<t.r<<"+"<<t.i<<"i";
		return output;
	}
};


complex complex::operator+(complex c){
	complex temp;
	temp.r=r+c.r;
	temp.i=i+c.i;
	return(temp);
}

complex complex::operator*(complex c){
	complex temp2;
	temp2.r=(r*c.r)-(i*c.i);
	temp2.i=(r*c.i)-(i*c.r);
	return(temp2);
}

int main(){
	complex c1,c2,c3,c4;
	cout<<"enter 1st num:"<<endl;
	cin>>c1;
	cout<<"enter 2nd number:"<<endl;
	cin>>c2;
	c3=c1+c2;
	c4=c1*c2;
	cout<<" 1st"<<c1<<endl;
	cout<<" 2nd"<<c2<<endl;
	cout<<"add="<<c3<<endl;
	cout<<"mul="<<c4;
	
}
