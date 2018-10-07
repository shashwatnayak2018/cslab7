// Write a C++ program to find sum of digits of a given number using recursion.
//library
#include<iostream>
//namespace 
using namespace std;
int sumdigits(int n)
{
	int c;
	if(n==0)
	{
		return 0;
	}
	else
	{
		c=(n%10)+sumdigits((int)n/10);
	}
	return c;
}
//write the main function
int main()
{
	//declaring variables
	int c,n;
	//ask for the value of n
	cout<<"Enter the number:"<<endl;
	cin>>n;
	c=sumdigits(n);
	cout<<"The sum of the digits of the given number is "<<c<<endl;
	return 0;
}
