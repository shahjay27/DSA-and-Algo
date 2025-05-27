#include<iostream>

using namespace std;

int deleteOperation(int arr[], int n, int valueToDelete)
{
    int indexToDelete;
    for(indexToDelete=0; indexToDelete<n; indexToDelete++)
    {
        if(arr[indexToDelete]==valueToDelete)
            break;
    }

    if(indexToDelete<n) //found the index
    {
        for(int i=indexToDelete;i<n-1;i++)
            arr[i]=arr[i+1];

        return n-1;
    }

    return n;
}

int main()
{
    int arr[]={1,2,3,4,5};
    int n=5;
    int valueToDelete=1;

    int newN = deleteOperation(arr, n, valueToDelete);

    for(int i=0; i<newN; i++)
       cout<<arr[i];

    return 1;
}
