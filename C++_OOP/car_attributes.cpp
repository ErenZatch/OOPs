//class car atributes name sound color speed and price,write method inside class whnever caleed will display the sound naame and price of the car
#include<iostream>
using namespace std;

class CAR{
	public:
		string name,color;
		float speed,price;
		
	void display(){
		
		cout<<name<<endl;
		cout<<color<<endl;
		cout<<speed<<" is the top speed in km."<<endl;
		cout<<price<<" in crores."<<endl;
		cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;
	}
	
	
};





int main()
{
	int car_num;
	cout<<"how many car u want";
	cin>>car_num;
	
	
	CAR c1,c2,c3,C;
	c1.name="audi";
	c1.color="black";
	c1.speed=200;
	c1.price=1;
	
	c2.name="ferrari";
	c2.color="red";
	c2.speed=260;
	c2.price=2;
	
	c3.name="supra";
	c3.color="yello";
	c3.speed=3000;
	c3.price=3;
	
	
	int A[car_num];
	for(int i=0;i<car_num;i++){
		A[i]=c1.display()
		
		
	}
}
