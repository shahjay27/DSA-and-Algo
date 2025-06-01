// NOT smaller than neighbour

//Time Complexity: O(log N)

#include<iostream>

using namespace std;


int FindPeakElement(int arr[], int n)
{
    int low=0, high=n-1;

    while(low<=high)
    {
        int mid=(low+high)/2;

        //if(mid==0 || mid==n-1 || (arr[mid+1]<=arr[mid] && arr[mid-1]<=arr[mid]))
        if((mid==0 || arr[mid-1]<=arr[mid]) &&
            (mid==n-1 || arr[mid+1]<=arr[mid]))
            return mid;
        else if(arr[mid-1]>=arr[mid])
            high=mid-1;
        else
            low=mid+1;
    }

    return -1;
}

int main()
{
    int arr[]={1,2,20,30,40,1};
    int n=7;

    int peakEleIndex=FindPeakElement(arr, n);
    cout<<arr[peakEleIndex];

    return 0;
}
