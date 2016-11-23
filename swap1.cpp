#include<iostream>
using namespace std;
//pass by address
int swap(int &,int &);
int main(){
	int a,b;
	cout<<"Enter the two numbers"<<endl;
	cin>>a>>b;
	swap(a,b);
	return 0;
}
int swap(int &a, int &b){
	int temp;
	temp=a;
	a=b;
	b=temp;
	cout<<"Values are"<<a<<"and"<<b<<endl;
	return 0;
}
