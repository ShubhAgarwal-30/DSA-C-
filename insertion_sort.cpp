#include<bits/stdc++.h>
using namespace std;

void printArr(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
}

void insertion_sort(int a[],int n)
{
    for(int i = 0; i < n; i++)
    {
        int current = a[i];
        int j=i-1;

        while(a[j]>current && j>=0)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=current;
        
    }
    printArr(a,n);
}

int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    insertion_sort(a,n);
}