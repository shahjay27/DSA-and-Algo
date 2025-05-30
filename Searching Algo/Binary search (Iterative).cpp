//Time complexity: O(logN)
//Space complexity: O(1)

#include<iostream>

using namespace std;

int BinarySearch(int arr[], int n, int searchValue)
{
    int low=0, high=n-1;

    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==searchValue)
            return mid;
        else if(arr[mid]>searchValue)
            high=mid-1;
        else
            low=mid+1;
    }
    return -1;
}

int main()
{
    int arr[]={5,10,15,25,35};
    int n=5;
    int searchValue=20;

    int result=BinarySearch(arr, n, searchValue);
    cout<<result;
}
