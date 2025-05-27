//Time complexity: O(n)

#include<iostream>

using namespace std;

int checkIsArraySorted(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        if(arr[i+1]<arr[i])
            return 0;
    }
    return 1;
}

int main()
{
    int arr[]={1,2,3,9,5};
    int n=5;

    int isArraySorted=checkIsArraySorted(arr, n);
    cout<<isArraySorted;

    return 0;
}
