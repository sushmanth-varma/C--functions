#include<iostream>
using namespace std;

void area(int s, int s1){
	cout<<s*s1<<endl;
}

void area(double l, double b){
	cout<<l*b<<endl;
}

void area(int r){
	cout<<3.14*r*r<<endl;
}

int main()
{
	area(2,3);
	area(2.2,3.3);
	area(3);
}
