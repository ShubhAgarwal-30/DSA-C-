#include<bits/stdc++.h>
using namespace std;

void print_sorted_array(int arr[],int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<< " ";
    }
}
void selection_sort(int arr[],int n)
{
    int temp;
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j <n; j++)
        {
            if(arr[j] < arr[i])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    print_sorted_array(arr,n);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    selection_sort(arr,n);
}