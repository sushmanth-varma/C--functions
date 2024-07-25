#include<iostream>
using namespace std;

void print(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void print(double arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void print(string arr[],int size){
for(int i=0;i<size;i++){
	cout<<arr[i]<<" ";
	}
}

int main(){
	int a1[] = {1,2,3,4,5};
	double a2[] = {1.1,2.1,3.1,4.2,5.4};
	string a3[] = {"a","b","c"};
	print(a1,5);
	print(a2,5);
	print(a3,3);
}
