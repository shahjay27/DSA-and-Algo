
#include<iostream>

using namespace std;

int getCountof1s(int arr[], int n)
{
    int low=0, high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==1)
        {
            if(mid==0 || arr[mid-1]==0)
                return n-mid;
            else
                high=mid-1;
        }
        else //arr[mid]!=1
            low=mid+1;
    }
    return -1;
}

int main()
{
    int arr[]={0,0,1,1,1,1,1};
    int n=7;

    int noOf1s=getCountof1s(arr, n);
    cout<<noOf1s;

    return 0;
}
