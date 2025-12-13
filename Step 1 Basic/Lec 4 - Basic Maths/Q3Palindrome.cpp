// Q3 Palindrome Number
// Given an integer x, return true if x is a palindrome, and false otherwise.

// Example 1:
// Input: x = 121
// Output: true
// Explanation: 121 reads as 121 from left to right and from right to left.

// Example 2:
// Input: x = -121
// Output: false
// Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

// Example 3:
// Input: x = 10
// Output: false
// Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
 

// Constraints:

// -231 <= x <= 231 - 1
#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    int temp = x;
    if (x < 0)
        return false;
    long long int r = 0;
    while (temp != 0) {
            r = (r * 10) + temp % 10;
            temp /= 10;
        }
    return (r == x);
}

int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    cout<<"The number is palindrome : "<<isPalindrome(n);
}