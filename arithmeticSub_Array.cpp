#include <bits/stdc++.h>
using namespace std;



int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int maax=2;
    int pd=a[1]-a[0];
    int cur=2;
    int i=2;

    while(i<n)
    {
        if(pd==a[i]-a[i-1])
        {
            cur++;
        }
        else
        if(pd!=a[i]-a[i-1])
        {
            pd=a[i]-a[i-1];
            cur=2;
        }
        maax=max(maax,cur);
        i++;
    }
    cout<<maax<<endl;

}