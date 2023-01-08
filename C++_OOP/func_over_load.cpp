#include<iostream>
using namespace std;

class poly{
	private:
		int num;
		string name;
		int number;
	public:
		void getinfo(){
		cout<<"enter the ID of the person:";
		cin>>num;
		cout<<"enter the name of the person:";
		cin>>name;
		}
		void getinfo(){
			cout<<"enter the number of the person:";
			cin>>number;
		}
//		void displayinfo(){
//		cout<<num<<" is the ID of the person"<<endl;
//		cout<<name<<" is the name of the person"<<endl;	
//		}
	
};

int main(){
	poly p1;
	p1.getinfo();
	
	
	
	
	
}
