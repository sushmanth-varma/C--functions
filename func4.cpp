#include<iostream>
using namespace std;

void abs(int num){
	if(num<0){
		num = -num;
	}
	cout<<num;
	cout<<endl;
}

void abs(double num){
	if(num<0){
		num = -num;
	}
	cout<<num;
}

int main()
{
	abs(-5);
	abs(-5.2);
}
