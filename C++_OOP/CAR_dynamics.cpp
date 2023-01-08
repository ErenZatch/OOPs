#include<iostream>
using namespace std;

class CAR{
	public:
		string name,color;
		float speed,price;
		
	void display(){
		cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;
		
		cout<<name<<endl;
		cout<<color<<endl;
		cout<<speed<<" is the top speed in km."<<endl;
		cout<<price<<" in crores."<<endl;
		cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;
	}
	
	
};

int main(){
	int num;
	float speed,price;
	string name,color;
	
	CAR C[30];
	cout<<"how many car info u want:";
	cin>>num;
	
	for(int i=1;i<=num;i++){
		cout<<"\nenter the name\n";
		cin>>name;
		cout<<"\nenter the color\n";
		cin>>color;
		cout<<"\n enter the speed\n";
		cin>>speed;
		cout<<"enter the price\n";
		cin>>price;
		
		C[i].name=name;
		C[i].color=color;
		C[i].speed=speed;
		C[i].price=price;
		C[i].display();
	}
	
//	for(int i=1;i<=num;i++){
//		C[i].display();
//	}
//	
	

}

