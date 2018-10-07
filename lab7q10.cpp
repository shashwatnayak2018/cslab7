//Write a C++ program to generate nth Fibonacci term using recursion.
//library
#include<iostream>
//namespace
using namespace std;
//function to generate nth fabonacci
int fibonacci(int n)
{
        if((n==0)||(n==1))
        {
            return(n);
        }
        else
        {
            return(fibonacci(n-1)+fibonacci(n-2));
        }
}
//write the main function     
int main()
{
        int n,c;
        cout<<"Enter the value of n:";
        cin>>n;
	c=fibonacci(n);
        cout<<"The nth fibonacci term is "<<c<<endl;
        return 0;
}


