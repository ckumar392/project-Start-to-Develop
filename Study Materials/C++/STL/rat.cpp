#include<iostream>

using namespace std;

int f(int &x,int c)
{
	c=c-1;
	if(c==0) return 1;
	x=x+1;
	cout<<x<<" "<<c<<endl;
	return f(x,c)*x;
}
int main()
{
	int a=5;
	cout<<f(a,5);
}