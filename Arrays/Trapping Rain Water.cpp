//Time complexity: (-)(n)
//Auxilary space complexity: (-)(n)

#include<iostream>

using namespace std;

int calCapacity(int arr[], int n)
{
    int capacity=0;
    int lmax[n], rmax[n];

    lmax[0]=arr[0];
    for(int i=1;i<n; i++)
        lmax[i]=max(arr[i], lmax[i-1]);

    rmax[n-1]=arr[n-1];
    for(int i=n-2; i>=0; i--)
        rmax[i]=max(arr[i],rmax[i+1]);

    for(int i=1; i<n-1; i++)
        capacity=capacity+(min(lmax[i], rmax[i])-arr[i]);

    return capacity;
}

int main()
{
    int arr[]={5,0,6,2,3};
    int n=5;

    int totalCapacity=calCapacity(arr, n);
    cout<<totalCapacity;

    return 0;
}
