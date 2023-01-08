#include<iostream>
#include<fstream>
using namespace std;

class emp{
	private:
		string name;
		int id;
	public:
		void getdata(){
			cout<<"enter name:";
			cin>>name;
			cout<<"enter the ID:";
			cin>>id;
		}
		void disdata(){
			cout<<"name:"<<name<<endl;
			cout<<"ID:"<<id<<endl;
		}
	
};


int main(){
	emp e[5];
	fstream f;
	int num;
	cout<<"how many emp data u want:"<<endl;
	cin>>num;
	f.open("output.txt");
	for(int i=0;i<num;i++){
		e[i].getdata();
		f.write((char*)&e[i],sizeof(e[i]));
	}
	f.close();
	
	cout<<"the data of employees are:"<<endl;
	f.open("output.txt");
	for(int i=0;i<num;i++){
		e[i].disdata();
		f.write((char*)&e[i],sizeof(e[i]));
	}
	
	f.close();
}
