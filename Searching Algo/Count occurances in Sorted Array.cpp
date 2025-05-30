//Time complexity: O(logN)

#include<iostream>

using namespace std;

int getFirstOccurance(int arr[], int n, int lookupValue)
{
    int low=0, high=n-1;

    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==lookupValue)
        {
            if(mid==0 || arr[mid-1]!=lookupValue)
                return mid;
            else
                high=mid-1;
        }
        else if(arr[mid]>lookupValue)
            high=mid-1;
        else
            low=mid+1;
    }
    return -1;
}

int getLastOccurance(int arr[], int n, int lookupValue)
{
    int low=0, high=n-1;

    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==lookupValue)
        {
            if(mid==high || arr[mid+1]!=lookupValue)
                return mid;
            else
                low=mid+1;
        }
        else if(arr[mid]>lookupValue)
            high=mid-1;
        else
            low=mid+1;
    }
    return -1;
}

int getNoOfOccurances(int arr[], int n, int lookupValue)
{
    int firstOccurance=getFirstOccurance(arr, n, lookupValue);

    if(firstOccurance==-1)
        return -1;

    int lastOccurance=getLastOccurance(arr, n, lookupValue);

    return (lastOccurance-firstOccurance)+1;

}

int main()
{
    int arr[]={10,20,20,20,40,40};
    int n=6;
    int lookupValue=10;

    int totalOccurances=getNoOfOccurances(arr, n, lookupValue);
    cout<<totalOccurances;

    return 0;
}
