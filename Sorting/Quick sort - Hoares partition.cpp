#include<iostream>

using namespace std;

int HoaresPartition(int arr[], int low, int high)
{
    int i=low-1, j=high+1;
    int pivot=arr[low];

    while(true)
    {
        do
        {
            i++;
        }while(arr[i]<pivot);

        do
        {
            j--;
        }while(arr[j]>pivot);

        if(i>=j) return j;

        swap(arr[i], arr[j]);
    }
}

void QuickSort(int arr[], int low, int high)
{
    if(low<high)
    {
        int p=HoaresPartition(arr, low, high);
        QuickSort(arr, low, p);
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
