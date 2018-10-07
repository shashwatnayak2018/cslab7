//library
#include <iostream>
#include<math.h>
//namespace     
using namespace std;
//declaring the function
int reverseNumber(int num);
//write the main function     
int main()
{
	//declaring variables
	int num, reverse;
        // ask for a number
        cout<<"Enter any number: ";
        cin>>num;
        reverse = reverseNumber(num);
        //print the output
        cout<<"Reverse of number "<<num <<" is: "<<reverse;
        return 0;
}
     
//definining the revrseNumber function
int reverseNumber(int num)
{
        // total number of digits of the function
        int digit = (int) log10(num);
        //condition
        if(num == 0)
            return 0;
     
        return ((num%10 * pow(10, digit)) + reverseNumber(num/10));
}
