//Factorial of a Number : Iterative and Recursive.

/*
Problem Statement: Given a number X,  print its factorial.

To obtain the factorial of a number, it has to be multiplied by all the whole numbers preceding it. More precisely X! = X*(X-1)*(X-2) … 1.

Note: X  is always a positive number. 

Examples
Example 1:
Input: X = 5
Output: 120
Explanation: 5! = 5*4*3*2*1
*/

#include <iostream>
using namespace std;

//iterative solution
void Fact(int n)
{
    int fact = 1;
    int temp = n;
    while(n != 0){
        fact *= n;
        n--;
    }
    cout<<"The factorial of "<<temp<<" is : "<<fact<<endl;
}

//Recursive Solution.
int RecurFact(int n){
    if(n == 0)      //factorial of 0! = 1.
        return 1;
    return (RecurFact(n-1)*n);
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    Fact(n);

    cout<<"The factorial of "<<n<<" using recursion : "<<RecurFact(n);

}