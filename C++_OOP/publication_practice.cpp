#include<iostream>
using namespace std;

class publication{
	public:
		char title[20];
		float price;
	public:
		void getdata(){
			cout<<"enter the title->";
			cin>>title;
			cout<<"enter the price->";
			cin>>price;
		}
		void displaydata(){
			cout<<"the title is:"<<title<<endl;
			cout<<"the price is:"<<price<<endl;
		}
};

class book:public publication{
	private:
		float page_count;
	public:
		void getdata1(){
		cout<<"enter information for the book:"<<endl;
		getdata();
		cout<<"enter page count of the book->";
		cin>>page_count;
		try{
			if(title[0]==' ' or price==0 or page_count==0){
				throw(title);
				throw(price);
				throw(page_count);
			}
			
		}
		catch(...){
			title[20]='0';
			price=0;
			page_count=0;
		}
	}
	void display(){
		displaydata();
		
			cout<<"the page count is:"<<page_count<<endl;
		
	}
};
class CD:public publication{
	private:
		float mins;
	public:
		void getdata2(){
		cout<<"enter information for the CD:"<<endl;
		getdata();
		cout<<"enter minutes count of the CD->";
		cin>>mins;
		try{
			if(title[0]==' ' or price==0 or mins==0){
				throw(title);
				throw(price);
				throw(mins);
			}
			
		}
		catch(...){
			title[20]='0';
			price=0;
			mins=0;
		}
	}
	void display2(){
		displaydata();
		
			cout<<"the minute count is:"<<mins<<endl;
		
	}
		
		
		
	
	
};

int main(){
	book b;
	CD cd;
	b.getdata1();
	b.display();
	cout<<"------------"<<endl;
	cd.getdata2();
	cd.display2();
}
