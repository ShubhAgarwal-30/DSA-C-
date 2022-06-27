#include<bits/stdc++.h>
using namespace std;

int kadane(int a[],int n)
{
    int sum=0;
    int maxsum=INT_MIN;

    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        if(sum<0)
        sum=0;
        maxsum=max(maxsum,sum);
    }
    return maxsum;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    cin>>a[i];
    int wrapsum,sum;
    sum=kadane(a,n);
    int tsum=0;
    for(int i=0; i<n; i++)
    {
        tsum+=a[i];
        a[i]= -a[i];
    }
    wrapsum=kadane(a,n)+tsum;

    cout<<max(wrapsum,sum)<<"\n";


}