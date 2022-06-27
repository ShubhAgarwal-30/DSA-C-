#include <bits/stdc++.h>
using namespace std;

void sum_subarray(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            // for (int k = i; k <=j; k++)
            // {
            sum += a[j];
            // }
            cout << sum << " ";
        }
        sum = 0;
        cout << endl;
    }
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
    sum_subarray(a, n);
    return 0;
}