//Time complexity: (-)(n)
//Auxilary space complexity: (-)(1)

#include<iostream>

using namespace std;

void LeftRotateByOne(int arr[], int n)
{
    int firstElement=arr[0];
    for(int i=1; i<n; i++)
        arr[i-1]=arr[i];
    arr[n-1]=firstElement;
}

int main()
{
    int arr[]={1,2,3,4,5};
    int n=5;

    LeftRotateByOne(arr, n);

    for(int i=0; i<n; i++)
        cout<<arr[i];
}
