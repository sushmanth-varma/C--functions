#include<iostream>
using namespace std;

void sub(int a, int b){
	cout<<a-b<<endl;
}

void sub(double a, double b){
	cout<<a-b;
}

int main(){
	sub(1,2);
	sub(1.1,2.2);
}
