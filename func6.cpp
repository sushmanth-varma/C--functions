#include<iostream>
using namespace std;

void op(int arr[2][2],int arr2[2][2]){
	int res[2][2];
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			res[i][j] = arr[i][j]+arr2[i][j];
		}
	}
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<res[i][j]<<" ";
		}
		cout<<endl;
	}
}

void op(double arr[2][2],double arr2[2][2]){
	double res[2][2];
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			res[i][j] = arr[i][j]+arr2[i][j];
		}
	}
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<res[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main()
{
	int arr[2][2] = {{1,2},{1,2}};
	int arr2[2][2] = {{1,2},{1,2}};
	double a1[2][2] = {{1.1,2.2},{1.1,2.2}};
	double a2[2][2] = {{1.1,2.2},{1.1,2.2}};
	op(arr,arr2);
	op(a1,a2);
}
