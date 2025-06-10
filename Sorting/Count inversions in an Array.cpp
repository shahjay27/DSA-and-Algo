#include<iostream>

using namespace std;

int CountAndMerge(int arr[], int low, int mid, int high)
{
    int n1=mid-low+1, n2=high-mid;
    int left[n1], right[n2];

    for(int i=0; i<n1; i++) left[i]=arr[low+i];
    for(int i=0; i<n2; i++) right[i]=arr[mid+i+1];

    int res=0, i=0, j=0, k=low;

    while(i<n1 && j<n2)
    {
        if(left[i]<=right[j])
        {
            arr[k]=left[i]; i++;
        }
        else
        {
            arr[k]=right[j];
            j++;
            res=res+(n1-i);
        }
        k++;
    }

    while(i<n1)
    {
        arr[k]=left[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k]=right[j];
        j++;
        k++;
    }

    return res;
}

int CountInv(int arr[], int low, int high)
{
    int res=0;

    if(low<high)
    {
        int mid=low+(high-low)/2;

        res+=CountInv(arr, low, mid);
        res+=CountInv(arr, mid+1, high);
        res+=CountAndMerge(arr, low, mid, high);
    }

    return res;
}

int main()
{
    int arr[]={10, 5, 30, 15, 7};
    int l=0, r=4;

    int res=CountInv(arr, l, r);

    cout<<res;

    return 0;
}
