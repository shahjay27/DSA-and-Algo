#include<iostream>

using namespace std;

int LomutoPartition(int arr[], int low, int high)
{
    int i=low-1;

    while(low<high)
    {
        if(arr[low]<=arr[high])
        {
            i++;
            swap(arr[low],arr[i]);
        }
        low++;
    }
    swap(arr[i+1],arr[high]);

    return i+1;
}

void QuickSort(int arr[], int low, int high)
{
    if(low<high)
    {
        int p=LomutoPartition(arr, low, high);
        QuickSort(arr, low, p-1);
        QuickSort(arr, p+1, high);
    }
}

int main()
{
    int arr[]={10, 5, 30, 15, 7};
    int l=0, r=4;

    QuickSort(arr, l, r);

    for(int i=l; i<=r; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}

