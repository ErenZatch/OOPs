#include<iostream>
using namespace std;
class Time{
	public:
		int hrs,min,sec;
	
	void showtime(int hrs,int min,int sec){
		cout<<hrs<<" hrs-"<<min<<"min-"<<sec<<"sec"<<endl;
	}
	
	void addtime(int hrs,int min,int sec){
		int choice;
		cout<<"what u want to add (1 for hrs,2 for min,3 for sec):"<<endl;
		cin>>choice;
		if(choice==1){
			int hrsADD;
			cout<<"how much u want to add:"<<endl;
			cin>>hrsADD;
			hrs=hrs+hrsADD;
			
		}
		else if(choice==2){
			int minADD;
			cout<<"how much u want to add:"<<endl;
			cin>>minADD;
			min=min+minADD;
			
		}
		else if(choice==3){
			int secADD;
			cout<<"how much u want to add:"<<endl;
			cin>>secADD;
			sec=sec+secADD;
			
		}
		else{
		}
		cout<<hrs<<" hrs-"<<min<<"min-"<<sec<<"sec"<<endl;
	}
	
	
};

int main(){
	int hrs,min,sec;

	cout<<"enter hrs(not more than 12):"<<endl;
	cin>>hrs;
	cout<<"enter min:(not more than 60):"<<endl;
	cin>>min;
	cout<<"enter sec(not more than 60):"<<endl;
	cin>>sec;
	
	
	Time T;
	
	T.showtime(hrs,min,sec);
	T.addtime(hrs,min,sec);

	
	
	
	
	
	
	
}
