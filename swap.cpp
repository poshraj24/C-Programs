//wap to swap 2 numbers using pass by value and reference
#include<iostream>
using namespace std;
//pass by value
int swap(int,int);
int main(){
	int a,b;
	cout<<"Enter the 2 numbers"<<endl;
	cin>>a>>b;
	swap(a,b);
	return 0;
}
int swap(int a,int b){
	int temp;
	temp=a;
	a=b;
	b=temp;
	cout<<"The values after swapping\t"<<"a="<<a<<"\tb="<<b<<endl;
	return 0;
}

