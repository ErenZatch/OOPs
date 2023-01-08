#include<iostream>
#include<graphics.h>
using namespace std;

class point{
	public:
	int x,y;
};

class poly{
	public:
		point p[20];
		int inter[20],x,y;
		int v,xmin,xmax,ymin,ymax;
	
		int c;
		void read();
		void cal();
		void sort(float);
		void display();
		void init(float);
};

void poly::read(){
	int i;
	cout<<"enter number of vertices:"<<endl;
	cin>>v;
	if(v>2){
		for(i=0;i<v;i++){
			cout<<"enter the coordiates"<<endl;
			cout<"enter x=";
			cin>>p[i].x;
			cout<"enter y=";
			cin>>p[i].y;
			
		}
		p[i].x=p[0].x;
		p[i].y=p[0].y;
		xmin=xmax=p[0].x;
		ymin=ymax=p[0].y;
	}
	else{
		cout<<"enter valid input(more than 2 vertices)";
	}
}

void poly::cal(){
	for(int i=0;i<v;i++){
		if(xmin>p[i].x){
			xmin=p[i].x;
		}
		if(xmin<p[i].x){
			xmax=p[i].x;
		}
		if(ymin>p[i].y){
			ymin=p[i].y;
		}
		if(ymax<p[i].y){
			ymax=p[i].y;
		}
		
	}
}

void poly::sort(float z){
	int x1,x2,y1,y2,temp;
	c=0;
	for(int i=0;i<v;i++){
		x1=p[i].x;
		y1=p[i].y;
		x2=p[i+1].x;
		y2=p[i+1].y;
		if(y1>y2){
			temp=x1;
			x1=x2;
			x2=temp;
			temp=y1;
			y1=y2;
			y2=temp;
		}
		if(z<=y2 && z>=y1){
			if((y1-y2)==0){
				x=x1;
			}
			else{
				x=((x2-x1)*(z-y1)/(y2-y1));
				x=x+x1;
			}
			if(x<=xmax && x>= xmin)
			inter[c++]=x;
		}
	}
}


void poly::init(float z){
	int temp,i;
	for(i=0;i<v;i++){
		line(p[i].x,p[i].y,p[i+1].x,p[i+1].y);
		delay(50);
	}
	delay(50);
	for(i=0;i<c;i++){
		delay(100);
		line(inter[i],z,inter[i+1],z);
	}
	
}

void poly::display(){
	int ch1;
	char ch='y';
	float s,s2;
	s=ymin+0.01;
	delay(50);
	cleardevice();
	while(s<=ymax){
		sort(s);
		init(s);
		s++;
	}
	
}

int main(){
	int cl;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"NULL");
	cleardevice();
	poly x;
	x.read();
	x.cal();
	cleardevice();
	cout<<"enter colour:";
	cin>>cl;
	setcolor(cl);
	x.display();
	closegraph();
	getch();
	return 0;
	
}


















 
