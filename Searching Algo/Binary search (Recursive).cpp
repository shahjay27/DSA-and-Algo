//Time complexity: O(logN)
//Aux Space complexity: O(logN)

#include<iostream>

using namespace std;

int BinarySearch(int arr[], int low, int high, int searchValue)
{
    if(low>high)
        return -1;

    int mid=(low+high)/2;

    if(arr[mid]==searchValue)
        return mid;
    else if(arr[mid]>searchValue)
        return BinarySearch(arr, low, mid-1, searchValue);
    else
        return BinarySearch(arr, mid+1, high, searchValue);
}

int main()
{
    int arr[]= {5,10,15,25,35};
    int low=0, high=5;
    int searchValue=15;

    int result=BinarySearch(arr, low, high, searchValue);
    cout<<result;
}
