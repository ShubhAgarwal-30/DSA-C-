#include <bits/stdc++.h>
using namespace std;

int prime(int n)
{
    int i,f=0;
    if(n==1||n==0)
    {
        cout<<"enter valid number:[";
        exit(0);
    }
    for (i=2;i<sqrt(n);i++)
        {
            if(n%i==0)
            return false;
        }
    return true;
}
int main()
{
    int val;
    cout<<"Enter a number to check prime or not";
    cin>>val;
    if(prime(val))
    cout<<val<<" is prime";
    else 
    cout<<" Not prime";
    return 0;
}