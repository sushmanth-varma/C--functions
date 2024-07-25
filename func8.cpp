#include<iostream>
using namespace std;

void con(string a, string b){
	cout<<a+b<<endl;
}

void con(char a,char b){
	cout<<a;
	cout<<b;
}

int main(){
	con("sai","pavan");
	con('a','b');
}
