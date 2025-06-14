#include<iostream>

using namespace std;

void Heapify(int arr[], int n, int i)
{
    int largest=i, left=i*2+1, right=i*2+2;

    if(left<n && arr[largest]<arr[left])
        largest=left;
    if(right<n && arr[largest]<arr[right])
        largest=right;

    if(largest!=i)
    {
        swap(arr[i], arr[largest]);
        Heapify(arr, n, largest);
    }
}

void BuildMaxHeap(int arr[], int n)
{
    for(int i=(n-2)/2; i>=0; i--)
        Heapify(arr, n, i);
}

void HeapSort(int arr[], int n)
{
    BuildMaxHeap(arr, n);

    for(int i=n-1; i>0; i--)
    {
        swap(arr[0], arr[i]);
        Heapify(arr, i, 0);
    }
}

int main()
{
    int arr[]={10, 15, 50, 4, 20};
    int n=5;

    HeapSort(arr, n);

    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";

    return 0;
}
