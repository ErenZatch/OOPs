#include<iostream>
using namespace std;
#include<map>
#include<string>

int main(){
	typedef map<string,int>statedb;
	statedb popmap;
	popmap.insert(pair<string,int>("maharashtra",61791));
	popmap.insert(pair<string,int>("goa",988));
	popmap.insert(pair<string,int>("jk",1279));
	string st_name;
	statedb::iterator iter;
	cout<<"pop of states:"<<endl;
	cout<<"enter the state:"<<endl;
	cin>>st_name;
	iter=popmap.find(st_name);
	if(iter!=popmap.end()){
		cout<<st_name<<" pop is"<<iter->second<<endl;
		
	}
	else{
		cout<<"not found";
	}
	popmap.clear();
	
	
}


















