#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>   n;
    int a[n];
    for (int i=0; i<n; i++)
    {
        cin>>a[i];

    }
    int arr[n+1];
    arr[0]=0;
    for(int i=1; i<n; i++)
    {
        arr[i] =arr[i-1]+a[i];
    }

    int cursum=INT_MIN;

    for(int i=0; i<n; i++)
    {
        int sum=0;
        for(int j=0; j<i; j++)
        {
            sum=arr[i]-arr[j];
            cursum=max(sum,cursum);
        }
    }
    cout<<cursum<<endl;
}