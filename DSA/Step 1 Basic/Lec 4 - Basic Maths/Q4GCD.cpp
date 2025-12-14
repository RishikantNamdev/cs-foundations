/*
Q4. Problem Statement: Given two integers N1 and N2, find their greatest common divisor.
The Greatest Common Divisor of any two integers is the largest number that divides both integers.

  Example 1:
                Input:N1 = 9, N2 = 12
                
                
                Output:3
                Explanation:Factors of 9: 1, 3 and 9
                Factors of 12: 1, 2, 3, 4, 6, 12
                Common Factors: 1, 3 out of which 3 is the greatest hence it is the GCD.
*/

#include <iostream>
#include <algorithm>
using namespace std;
int GCD(int n1,int n2)
{
    // Iterate from the minimum of
    // n1 and n2 down to 1
    // Start from the minimum of n1 and n2
    // because the GCD cannot
    // exceed the smaller number
    for(int i = min(n1,n2); i > 0; i--)
    {
        // Check if i is a common
        // factor of both n1 and n2
        if(n1%i == 0 && n2%i == 0){
            // If i is a common factor,
            // return it as the GCD
            return i;
        }
    }
    // If no common factors are found,
    // return 1 (as 1 is always a
    // divisor of any number)
    return 1;
}

// Optimal approach with euclidean algo.
int GCD_Euclidean(int n1, int n2)
{
    while(n1 > 0 && n2 > 0)
    {
        if(n1 > n2)
            n1 %= n2;
        else
            n2 %= n1;
    }
    if(n1==0)
        return n2;
    return n1;
}

int main()
{
    int x;
    cout<<"Enter 1st number : ";
    cin>>x;

    int y;
    cout<<"Enter 2nd number : ";
    cin>>y;

    cout<<"The GCD of "<<x<<" and "<<y<<" : "<<GCD(x,y)<<endl;
    cout<<"The GCD of "<<x<<" and "<<y<<" using Euclidean algo : "<<GCD_Euclidean(x,y)<<endl;
    return 0;
}

