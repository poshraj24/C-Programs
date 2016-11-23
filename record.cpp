#include<iostream>
using namespace std;
char name(char[]);
int roll(int);
char faculty(char[]);
int sem(int);
int main(){
	int rolll,semm;
	char n[10],fac[10];
	cout<<"Enter student's details"<<endl;
	cout<<"Name"<<endl;
	cin>>n;
	cout<<"Faculty"<<endl;
	cin>>fac;
	cout<<"Semester"<<endl;
	cin>>semm;
	cout<<"Roll"<<endl;
	cin>>rolll;
	name(n);
	faculty( fac);
	sem(semm); 
	roll(rolll);
	return 0;
}
char name(char n[]){
	cout<<"Name:\t"<<n<<endl;
	return 0;
}
char faculty( char fac[]){
	cout<<"Faculty: \t"<<fac<<endl;
	return 0;
}
int sem(int semm){
	cout<<"Semester: \t"<<semm<<endl;
	return 0;
	}
	int roll(int rolll){
		cout<<"ROll no:\t"<<rolll<<endl;
		return 0;
	}

