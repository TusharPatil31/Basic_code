// Rama has a wonderful house. She can reach to her bedroom using one staircase. 
// She used to climb either one or 2 stairs at a time.
// On considering all the possible combinations of climbing , in how many ways rama can reach to her bedroom ?

// Write the code to implement the same.

// Input format:
// An integer denoting the umber of stairs in the staircase.
// If the number of stairs beyond 24, the output should give "Wrong Input".

// Output format:
// The number of ways rama can climb the staircase.

// Examples -
// Input:
// 5
// Ouptput
// 8

// Input:
// 26
// Ouptput
// Wrong Input


#include<iostream>
using namespace std;

int numofways(int i)
{
    if(i<=1)
    {
        return 1;
    }
    else{
        return numofways(i-1)+ numofways(i-2);
    }
}

int main(){
    int n;
    cout<<"Enter a number"<<endl;;
    cin>>n;
    int ways;

    if(n>0 && n<25)
    {
        ways=numofways(n);
        cout<<ways<<endl;
    }
    else
    {
        cout<<"Wrong input";
    }

    return 0;
}