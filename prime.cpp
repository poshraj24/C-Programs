//wap to display prime  numbers from 1 to 100
#include<iostream>
using namespace std;
int main(){
	int num,i,j,k;
	cout<<"The prime numbers from 1 to 100 are"<<endl;
	 cout<<"Prime numbers till 100  are :2\t"<<endl;

    for(i=3;i<=100;i++)
    {
        k=1;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                k=0;
                break;
            }
        }
        if(k==1)
            cout<<i<<"\t";
    }
	
	return 0;
}
