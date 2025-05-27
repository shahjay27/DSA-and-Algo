//Time complexity - O(n)
//Time complexity (Insert at the end) - O(1)
//Time complexity (Insert at the beginning) - ϴ(n)

#include<iostream>

using namespace std;

int insert(int arr[], int n, int insertValue, int arrayCapacity, int insertIndex)
{
    if(n==arrayCapacity)
        return -1;

    for(int i=n-1; i>=insertIndex; i--)
        arr[i+1]=arr[i];

    arr[insertIndex]=insertValue;

    for(int i=0; i<n+1; i++)
        cout<<arr[i];

    return 1;
}

int main()
{
    int arr[5]={1,3,4,5};
    int n=4;
    int capacity=5;
    int insertValue=2;
    int insertIndex=1;

    int result = insert(arr, n, insertValue, capacity, insertIndex);

    return result;
}
