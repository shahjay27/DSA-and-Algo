//Time complexity: (-)(NlogN)
//Aux space: (-)(N)

#include<iostream>

using namespace std;

void Merge(int arr[], int l, int mid, int r)
{
    int n1=(mid-l)+1;
    int n2=r-mid;
    int arr1[n1], arr2[n2];

    for(int i=0; i<n1; i++)
        arr1[i]=arr[l+i];

    for(int i=0; i<n2; i++)
        arr2[i]=arr[mid+i+1];

    int i=0, j=0;

    while(i<n1 && j<n2)
    {
        if(arr1[i]<=arr2[j])
        {
            arr[l]=arr1[i];
            i++;
        }
        else
        {
            arr[l]=arr2[j];
            j++;
        }
        l++;
    }
    while(i<n1)
    {
        arr[l]=arr1[i];
        l++;
        i++;
    }

    while(j<n2)
    {
        arr[l]=arr2[j];
        l++;
        j++;
    }
}

void MergeSort(int arr[], int l, int r)
{
    if(l<r)
    {
        int mid=l+(r-l)/2;
        MergeSort(arr, l, mid);
        MergeSort(arr, mid+1, r);
        Merge(arr, l, mid, r);
    }
}

int main()
{
    int arr[]={10, 5, 30, 15, 7};
    int l=0, r=4;

    MergeSort(arr, l, r);

    for(int i=0; i<=r; i++)
        cout<<arr[i]<<" ";

    return 0;
}
