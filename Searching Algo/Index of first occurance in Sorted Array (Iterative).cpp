
#include<iostream>

using namespace std;

int getFirstOccurance(int arr[], int n, int searchValue)
{
    int low=0, high=n-1;

    while(low<=high)
    {
        int mid=(low+high)/2;

        if(arr[mid]==searchValue)
        {
            if(mid==0 || arr[mid-1]!=searchValue)
                return mid;
            else
                high=mid-1;
        }
        else if(arr[mid]>searchValue)
            high=mid-1;
        else
            low=mid+1;
    }
    return -1;
}

int main()
{
    int arr[]={5, 10, 10, 15, 20, 20, 20};
    int n=6;
    int searchValue=20;

    int firstOccurance=getFirstOccurance(arr, n, searchValue);
    cout<<firstOccurance;

    return 0;
}
