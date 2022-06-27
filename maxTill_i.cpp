#include<bits/stdc++.h>
using namespace std;

// void print_max(int cur_max) {
//     if()
//     cout<<"---------"<<cur_max<<"-------";
// }

void find_max(int a[], int n)
{
    int cur_max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        cur_max=max(cur_max,a[i]);
        cout<<cur_max<<" ";
    }
    // print_max(cur_max);

}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    // int c;
    // cin>>c;
    find_max(a,n);
}