//Sum of first N Natural Numbers
/*
Problem statement: Given a number ‘N’, find out the sum of the first N natural numbers.

Examples:

Example 1:
Input: N=5
Output: 15
Explanation: 1+2+3+4+5=15

Example 2:
Input: N=6
Output: 21
Explanation: 1+2+3+4+5+6=15
*/

#include <iostream>
using namespace std;

// Using Formula n(n+1)/2. TC = O(N).
void Formula(int n){
    cout<<"The sum of first "<<n<<" numbers using formula n(n+1)/2 is : "<<(n*(n+1))/2<<endl;
}

//Using recursion.
/*
Recursive way of calculating the sum of first N Natural Numbers:

1.Parameterized Way
2.Functional Way
*/

//1.Parameterized Way.
void func(int i, int sum){
   
   // Base Condition.
   if(i<1)
   {
       cout<<"Sum of first n numbers using Parameterized Way recursion : "<<sum<<endl;
       return;
   }

   // Function call to increment sum by i till i decrements to 1.
   func(i-1,sum+i);

}

//2.Functional Way.
int Sum(int n)
{
    if(n < 1) return 0;
    return (Sum(n-1)+n);
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    Formula(n);
    func(n,0);
    cout<<"The sum of first "<<n<<" numbers using Functional Way of recursion is : "<<Sum(n);
    return 0;
}