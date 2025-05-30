
#include<iostream>

using namespace std;

int getFirstOccurance(int arr[], int low, int high, int searchValue)
{
    if(low>high)
        return -1;

    int mid=(low+high)/2;
    if(arr[mid]==searchValue)
    {
        if(mid==0 || arr[mid-1]!=searchValue)
            return mid;
        else
            return getFirstOccurance(arr, low, mid-1, searchValue);
    }
    else if(arr[mid]>searchValue)
        return getFirstOccurance(arr, low, mid-1, searchValue);
    else
        return getFirstOccurance(arr, mid+1, high, searchValue);
}

int main()
{
    int arr[]={5, 10, 10, 15, 20, 20, 20};
    int low=0, high=6;
    int searchValue=20;

    int firstOccurance=getFirstOccurance(arr, low, high, searchValue);
    cout<<firstOccurance;

    return 0;
}
