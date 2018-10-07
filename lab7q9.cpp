//Write a C++ program to find factorial of any number using recursion.
//library
#include<iostream>
//namespace
using namespace std;
//write the function which finds the factorial of a number
int factorial(int n)
{
	if(n>1)
	{
		return n*factorial(n-1);
	}
	else
	{
		return 1;
	}
}
//write the main function
int main()
{
	//declaring variables
	int c,n;
	//ask for the value of n
	cout<<"Enter a number:"<<endl;
	cin>>n;
	c=factorial(n);
	cout<<"The factorial of the given number is "<<c<<endl;
	return 0;
}
