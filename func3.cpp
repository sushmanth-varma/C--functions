#include<iostream>
using namespace std;

double fact(double num){
	double su = 1.1;
	for(double i=1;i<=num;i++){
		su*=i;
	}
	cout<<su;
}

int fact(int num){
	int sum = 1;
	for(int i=1;i<=num;i++){
		sum*=i;
	}
	cout<<sum;
}



int main()
{
	int a = 5;
	double b =5.2;
	fact(b);
	cout<<endl;
	fact(a);
}
