#include<iostream>
using namespace std;
int prime(int n)
{  
	for(int i=2;i<=n;i++){
		if (n%i==0){
			int count+=1;
			return 1;
		}
	}
if(count==1)
return 0;
}
int main(){
	int n=3;
		int count=0;
	cout<<"prime";
}
