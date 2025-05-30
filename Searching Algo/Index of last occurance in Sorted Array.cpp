
#include<iostream>

using namespace std;

int getLastOccurance(int arr[], int low, int high, int searchValue)
{
    if(low>high)
        return -1;

    int mid=(low+high)/2;
    if(arr[mid]==searchValue)
    {
        if(mid==high || arr[mid+1]!=searchValue)
            return mid;
        else
            return getLastOccurance(arr, mid+1, high, searchValue);
    }
    else if(arr[mid]>searchValue)
        return getLastOccurance(arr, low, mid-1, searchValue);
    else
        return getLastOccurance(arr, mid+1, high, searchValue);
}

int main()
{
    int arr[]={5, 10, 10, 15, 20, 20, 20};
    int low=0, high=6;
    int searchValue=10;

    int lastOccurance=getLastOccurance(arr, low, high, searchValue);
    cout<<lastOccurance;

    return 0;
}
