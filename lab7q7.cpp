//library
#include <iostream>
#include <math.h>
//namespace
using namespace std;
     
// declaring the functions used in the main function
int reverseNumber(int a);
int Palindrome(int a);
//write the main function     
int main()
{
	int a;
        // asking for the number
        cout<<"Enter any number: ";
        cin>>a;
        if(Palindrome(a) == 1)
        {
            cout<<a<<" is palindrome number";
        }
        else
        {
            cout<<a<<" is NOT palindrome number";
        }
     
        return 0;
}
     
//defining palindrome function     
int Palindrome(int a)
{
     
        if(a == reverseNumber(a))
        {
            return 1;
        }
     
        return 0;
}
//defining reverse number function     
int reverseNumber(int a)
{
        // Finding number of digits in num
        int digit = (int)log10(a);
     
     
        if(a == 0)
            return 0;
     
        return ((a%10 * pow(10, digit)) + reverseNumber(a/10));
}
