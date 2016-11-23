//wap to input 10 ineger array and display them
#include<iostream>
using namespace std;
int main(){
	int a[10],i;
	cout<<"Enter the 10 numbers"<<endl;
	for(i=0;i<10;i++){
		cin>>a[i];
	}
	cout<<"The entered numbers are"<<endl;
	for(i=0;i<10;i++){
		cout<<"\t"<<a[i];
	}
	return 0;
	
}
