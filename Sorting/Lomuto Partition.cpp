// Time complexity: O(n)
// Aux Space: O(1)

#include<iostream>

using namespace std;

void LomutoPartition(int arr[], int index) //partition on last index value
{
    int i=-1;

    for(int j=0; j<index; j++) //don't care about last index as it is pivot
    {
        if(arr[j]<=arr[index])
        {
            i++;
            swap(arr[j], arr[i]);
        }
    }
    swap(arr[i+1], arr[index]);
}

int main()
{
    int arr[]={10, 80, 30, 90, 40, 50, 70};
    int index=6;

    LomutoPartition(arr, index);

    for(int i=0; i<=index; i++)
        cout<<arr[i]<<" ";

    return 0;
}
