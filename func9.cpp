#include<iostream>
using namespace std;

void max(int a,int b){
	if(a>b){
		cout<<a<<endl;
	}
	else{
		cout<<b<<endl;
	}
}

void max(double a,double b){
	if(a>b){
		cout<<a<<endl;
	}
	else{
		cout<<b<<endl;
	}
}

void max(string a,string b){
	if(a>b){
		cout<<a<<endl;
	}
	else{
		cout<<b<<endl;
	}
}

int main()
{
	max(1,2);
	max(1.1,2.2);
	max("sai","pavan");
}
