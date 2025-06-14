// Time complexity: O(n)
// Aux Space: O(n)

#include<iostream>

using namespace std;

void Partition(int arr[], int low, int high, int pointerIndex)
{
    int temp[high-low+1], index=0;

    for(int i=low; i<=high; i++)
    {
        if(arr[i]<=arr[pointerIndex] && i!=pointerIndex)
        {
            temp[index]=arr[i];
            index++;
        }
    }

    temp[index++]=arr[pointerIndex];

    for(int i=low; i<=high; i++)
    {
        if(arr[i]>arr[pointerIndex] )
        {
            temp[index]=arr[i];
            index++;
        }
    }

    for(int i=low; i<=high; i++)
    {
        arr[i]=temp[i];
    }

}

int main()
{
    int arr[]={10, 5, 30, 15, 7};
    int l=0, r=4, p=4;

    Partition(arr, l, r, p);

    for(int i=l; i<=r; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
