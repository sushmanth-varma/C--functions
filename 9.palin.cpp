#include<iostream>
#include<string>
using namespace std;
bool is_palin(const string &s){
	
	int n=s.size();
	for(int i=0;i<n/2;++i){
		if(s[i]!=s[n - i - 1])
		return false;
		
	}
	return true;
}
int main()
{
	cout<<boolalpha<<"is palindrome"<<" "<<is_palin("dad")<<endl;
	cout<<is_palin("hello")<<endl;
	return 0;
}


