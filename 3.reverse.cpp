
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string reverse_string(const string &s){
	return string(s.rbegin(),s.rend() );
}
int main()
{
	cout<<reverse_string("hello");
	return 0;
}

