/*
Q6.Print all Divisors of a given Number
Problem Statement: Given an integer N, return all divisors of N.
A divisor of an integer N is a positive integer that divides N without leaving a remainder. 
In other words, if N is divisible by another integer without any remainder, then that integer is considered a divisor of N.

 Example 1:
                Input:N = 36
               
                Output:[1, 2, 3, 4, 6, 9, 12, 18, 36]
                
                Explanation: The divisors of 36 are 1, 2, 3, 4, 6, 9, 12, 18, 36.
*/

#include <iostream>
#include <vector>
using namespace std;

//Brute force approach.
vector<int>PrintDivisor(int n){
    vector<int> divisors;
    for(int i = 1; i <= n ; i++)
    {
        if(n%i == 0){
            divisors.push_back(i);
        }
    }
    return divisors;
}

//Optimal approach.     it takes O(sqrt(n))
vector<int>OptimalDivisor(int n){
    vector<int> divisors;
    for(int i = 1; i*i <= n ; i++)
    {
        if(n%i == 0){
            divisors.push_back(i);
            if(n/i != i)
                divisors.push_back(n/i);
        }
    }
    return divisors;
}

int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    vector<int>divisor = PrintDivisor(n);
    vector<int> OptDivisor = OptimalDivisor(n);
    cout<<" The divisor of "<<n<<" using brute force approach are : ";
    for( int d : divisor)
    {
        cout<<d<<" ";
    }

    cout<<endl<<" The divisor of "<<n<<" using Optimal approach are : ";
    for( int d : OptDivisor)
    {
        cout<<d<<" ";
    }

    return 0;
}