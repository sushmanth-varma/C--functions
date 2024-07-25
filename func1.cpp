#include<iostream>
using namespace std;

void power(int a, int b){
	int sum = 1;
	for(int i=1;i<=b;i++){
		sum*=a;
	}
	cout<<sum;
}

void power(double a, double b){
	float su = 1.0;
	for(int i=1;i<=b;i++){
		su*=a;
	}
	cout<<su;
}

int main(){
	power(5,2);
	cout<<endl;
	power(5.1,2.0);
}
