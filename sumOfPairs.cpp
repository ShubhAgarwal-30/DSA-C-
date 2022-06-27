#include<bits/stdc++.h>
using namespace std;

int check(int a[],int n,int ab)
{
    int front=0,end=n-1;
    while(front<=end)
    {
        if(a[front]+a[end]<ab)
        front++;
        else
        if(a[front]+a[end]>ab)
        end--;
        else 
        if(a[front]+a[end]==ab){
        cout<<front<<" "<<end<<endl;
        return true;}

    }
    return false;
}

int main()
{
    int n,ab;
    cin>>n>>ab;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    cout<<check(a,n,ab);

}