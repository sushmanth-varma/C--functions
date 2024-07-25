#include<iostream>
using namespace std;

void op(int arr[],int size){
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			if(arr[i]<arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
			}
		}
		for(int i=0;i<size;i++){
			cout<<arr[i]<<" ";
		}
}

void op(double arr[],int size){
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			if(arr[i]<arr[j]){
				double temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
			}
		}
		for(int i=0;i<size;i++){
			cout<<arr[i]<<" ";
		}
}

int main()
{
	int p[] = {4,3,2,1,4,9};
	double p1[] = {4.1,3.1,2.1,1.1,4.1,9.1};
	int siz = sizeof(p1)/sizeof(p1[0]); 
	double si = sizeof(p)/sizeof(p[0]);
	op(p,si);
	cout<<endl;
	op(p1,si);
}
