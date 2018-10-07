//Write a C++ program to find GCD (HCF) of two numbers using recursion.
//library
#include <iostream>
//namespcae
using namespace std;
//write main function
int hcf(int a, int b);

int main()
{
   int a, b;

   cout << "Enter two positive integers: ";
   cin >> a >> b;

   cout << "H.C.F of " << a << " and " <<  b << " is: " << hcf(a, b);

   return 0;
}

int hcf(int a, int b)
{
    if (b != 0)
       return hcf(b, a%b);
    else 
       return a;
}
	
