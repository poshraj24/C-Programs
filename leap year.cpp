//wap to display the leap year from 1990 to 2000
#include<iostream>
using namespace std;
int main(){
	int year,i,j;
	cout<<"The leap years are"<<endl;
	for(i=1900;i<=2000;i++){
		year=i%4;
		if(year==0){
			cout<<i<<"\t";
		}
	}
	return 0;
}
