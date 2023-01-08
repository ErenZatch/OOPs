#include<iostream>
using namespace std;

class animal{
	private:
		string colour;
		int legs;
	public:
		
	animal(string c,int l)
	{
		legs=l;
		colour=c;
	}
	
	void display(){
		
		cout<<legs<<endl;
		cout<<colour;
		
	}


	
};


int main(){
	string colour;
	int legs;
	
	animal dog("brown", 6);
	dog.display();
	
	
	
	
}
