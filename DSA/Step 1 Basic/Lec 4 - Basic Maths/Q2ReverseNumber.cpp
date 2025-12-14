//Q2. Problem Statement: Given an integer N return the reverse of the given number.

#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    // logic for reversing the number.
    int temp = n, reverse = 0; // r stores the reversed number.

    while(temp != 0)
    {
        // Extract the last digit of 'n'.
        int pop = temp%10;

        // Remove the last digit from 'n'.
        temp /= 10;

        if(reverse > INT_MAX/10 || (reverse == INT_MAX/10 && pop > 7))
        {
            return 0;
        }
        if(reverse < INT_MIN/10 || (reverse == INT_MIN/10 && pop < -8))
        {
            return 0;
        }
        reverse = reverse*10 + pop;

    }

    // Print the reversed number.
    cout<<"Reversed number : "<<reverse;
    return 0;
}