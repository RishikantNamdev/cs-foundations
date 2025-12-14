/*
Q5. Problem Statement: Given an integer N, return true it is an Armstrong number otherwise return false.
An Amrstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.
*/
#include <iostream>
using namespace std;

// Function for calculating power.
int power(int base, int exp) {
    int result = 1;
    while(exp--) {
        result *= base;
    }
    return result;
}

// Function to count the number of digits in the number.
int Counts(int n)
{
    int count = 0;
    while(n != 0)
    {
        count++;
        n /= 10;
    }
    return count;
}

bool Armstrong(int n)
{
    int count = Counts(n);
    int temp = n;
    int r = 0;

    while(temp > 0)
    {
        int pop = temp%10;
        r += power(pop,count);
        temp /= 10;
    }

    return r == n;
}

int main()
{
    int x;
    cout<<"Enter 1st number : ";
    cin>>x;

    if(Armstrong(x))
        cout<<x<<" is an Armstrong number";
    else
        cout<<x<<" is not an Armstrong number";
    return 0;
}
