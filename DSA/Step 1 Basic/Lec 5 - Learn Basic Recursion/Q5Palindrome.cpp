/*
Q5. Check if the given String is Palindrome or not

A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters,
it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

 

Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
Example 3:

Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.
*/

#include<bits/stdc++.h>

using namespace std;
//recursive method.
bool palindrome(int i, string& s){
    
    // Base Condition
    // If i exceeds half of the string means all the elements 
    // are compared, we return true.
    if(i>=s.length()/2) return true;
    
    // If the start is not equal to the end, not the palindrome.
    if(s[i]!=s[s.length()-i-1]) return false;
    
    // If both characters are the same, increment i and check start+1 and end-1.
    return palindrome(i+1,s);
}

bool isPalindrome(string s) {

    int left = 0, right = s.length()-1;
    while(left<right)
    {
        if(!isalnum(s[left])) 
            left++;
        else if(!isalnum(s[right])) 
            right--;
        else if(tolower(s[left])!=tolower(s[right])) 
            return false;
        else {
            left++; 
            right--;
        }
    }
    return true;

}
int main() {

  string str = "ABCDCBA";
  bool ans = isPalindrome(str);
  bool answer = palindrome(0,str);

  if (ans == true) {
    cout << "Palindrome by normal approach"<<endl;
  } else {
    cout << "Not Palindrome by normal approach"<<endl;
  }

  if (answer == true) {
    cout << "Palindrome by Recursive approach"<<endl;
  } else {
    cout << "Not Palindrome by Recursive approach"<<endl;
  }
  return 0;
}