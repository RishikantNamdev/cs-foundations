//Print N to 1 using Recursion
#include <iostream>
using namespace std;

//recursive function to print N to 1. prints in every function call. Time complexity O(N).
void Printing(int i)
{
    if(i < 1)
        return;
    cout<<i<<" ";
    Printing(i-1);
}

//Backtracking approach. TC = O(N).
void Print(int i, int n)
{
    if(i > n)
        return;
    Print(i+1,n);
    cout<<i<<" ";
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    
    cout<<"Printing N to 1 usig recursion forward approach ( prints in every function before calling another)"<<endl;
    Printing(n);

    cout<<endl<<"Printing N to 1 usig recursion backtracking ( prints every time when the nth function call ends and return to its parent)"<<endl;
    Print(1,n);
    return 0;
}