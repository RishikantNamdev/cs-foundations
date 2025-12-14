/*
Q7. Check if a number is prime or not
Problem Statement: Given an integer N, check whether it is prime or not. 
A prime number is a number that is only divisible by 1 and itself and the total number of divisors is 2.

 Example 1:
                Input:N = 2
               
                Output:True
                
                Explanation: 2 is a prime number because it has two divisors: 1 and 2 (the number itself).
*/

//my logic of prime no.
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n == 1) {
        return false;
    }

    int count = 0;

    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            count++;
            return false;
        }
    }

    if (count == 0)
        return true;
    else
        return false;
}

//Optimal approach to tind prime no.
bool Prime(int n)
{
    if (n == 1) {
        return false;
    }

    int count = 0;
    
    for(int i = 1; i <= sqrt(n) ; i++)
    {
        if(n%i == 0){
            count++;

            if(n / i != i){
                count++;
            }
        }
    }

    return (count == 2);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPrime(n))
        cout << n << " is a prime number using brute force."<<endl;
    else
        cout << n << " is not a prime number using brute force."<<endl;

    if (Prime(n))
        cout << n << " is a prime number using optimal approach.";
    else
        cout << n << " is not a prime number using optimal approach.";
    return 0;
}
