#include<iostream>
using namespace std;
double c_t_f(double c){
	return (c*9.0/5.0)+32.0;
}
double f_t_c(double f){
	return (f-32.0)*5.0/9.0;
}
int main()
{
	cout<<c_t_f(0)<<endl;
	cout<<f_t_c(32)<<endl;
	return 0;
}

