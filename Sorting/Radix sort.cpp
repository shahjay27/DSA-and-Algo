#include<iostream>

using namespace std;

void CountingSort(int arr[], int n, int exp)
{
    int countEle[10], output[n];

    for(int i=0; i<10; i++)
        countEle[i]=0;
    for(int i=0; i<n; i++)
        countEle[(arr[i]/exp)%10]++;

    for(int i=0; i<10; i++)
        countEle[i]=countEle[i]+countEle[i-1];

    for(int i=n-1; i>=0; i--)
    {
        output[countEle[(arr[i]/exp)%10]-1]=arr[i];
        countEle[(arr[i]/exp)%10]--;
    }
    for(int i=0; i<n; i++)
        arr[i]=output[i];
}

void RadixSort(int arr[], int n)
{
    int maxEle=arr[0];

    for(int i=1; i<n; i++)
    {
        if(arr[i]>maxEle)
            maxEle=arr[i];
    }

    for(int exp=1; maxEle/exp >0; exp=exp*10)
        CountingSort(arr, n, exp);
}

int main()
{
    int arr[]={319, 212, 6, 8, 100, 50};
    int n=6;

    RadixSort(arr, n);

    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";

    return 0;
}
