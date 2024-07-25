#include<iostream>
using namespace std;

void add(int a, int b){
	cout<<a+b<<endl;
}

void add(double a, double b){
	cout<<a+b;
}

int main(){
	add(1,2);
	add(1.1,2.2);
}
