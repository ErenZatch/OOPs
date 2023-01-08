#include<iostream>
using namespace std;
const int size=10;
template<class T>
void sel(T A[size]){
	int min,n,i,j;
	T temp;
	for(i=0;i<n;i++)
	{min=i;
		for(j;j<n;j++){
			if(A[j]<A[min]){
				min=j;
			}
		
			
		}
		temp=A[i];
		A[i]=A[min];
		A[min]=temp;	
		
	}
	cout<<endl<<"sorted array:"<<endl;
	for(i=0;i<n;i++){
		cout<<A[i];
	}
}

int main(){
	int A[size];
	float B[size];
	int n,i;
	cout<<"enter total elements:";
	cin>>n;
	cout<<"enter elements:"<<endl;
	for(i=0;i<n;i++){
		cin>>A[i];
	}
	sel(A);
	cout<<"for float:"<<endl;
	cout<<"enter total elements:";
	cin>>n; 
	cout<<"enter elements:"<<endl;
	for(i=0;i<n;i++){
		cin>>B[i];
	}
	sel(B);
	return 0;
	
}
