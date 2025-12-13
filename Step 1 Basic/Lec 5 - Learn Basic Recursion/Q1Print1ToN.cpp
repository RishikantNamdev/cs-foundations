//Print 1 to N using Recursion

#include <iostream>
using namespace std;
//prints in every function call. Time complexity O(N).
void Print(int i, int n)
{
    if(i > n)
        return;
    cout<<i<<" ";
    Print(i+1,n);
}

//Backtracking approach.
void Printing(int i)
{
    if(i <= 0)
        return;
    Printing(i-1);
    cout<<i<<" ";
}

int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    
    cout<<"Printing 1 to N usig recursion forward approach ( prints in every function before calling another)"<<endl;
    Print(1,n);

    cout<<endl<<"Printing 1 to N usig recursion backtracking ( prints every time when the nth function call ends and return to its parent)"<<endl;
    Printing(n);
    return 0;
}