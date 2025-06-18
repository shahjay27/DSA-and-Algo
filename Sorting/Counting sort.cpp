#include<iostream>

using namespace std;

void CountSort(int arr[], int n, int k)
{
    int countPlace[k];

    for(int i=0; i<k; i++)
        countPlace[i]=0;
    for(int i=0; i<n; i++)
        countPlace[arr[i]]++;

    for(int i=1; i<k; i++)
        countPlace[i]=countPlace[i-1]+countPlace[i];

    int output[n];

    for(int i=n-1; i>=0; i--)
    {
        output[countPlace[arr[i]]-1]=arr[i];
        countPlace[arr[i]]--;
    }

    for(int i=0; i<n; i++)
        arr[i]=output[i];
}

int main()
{
    int arr[]={1,4,4,1,0,1};
    int n=6;
    int k=5;

    CountSort(arr, n, k);

    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";

    return 0;
}
