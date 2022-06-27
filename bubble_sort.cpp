#include <bits/stdc++.h>
using namespace std;

void print_arr(int a[],int n,int c)
{
    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n "<<c;
}

void bubble_sort(int a[], int n)
{
    int c=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            c++;
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    print_arr(a,n,c);
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    bubble_sort(a, n);
}