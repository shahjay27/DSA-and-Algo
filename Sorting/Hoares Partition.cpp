
#include<iostream>

using namespace std;

int Partition(int arr[], int l, int h)
{
    int pivot=arr[l];
    int i=l-1, j=h+1;

    while(true)
    {
        do
        {
            i++;
        } while(arr[i]<pivot);

        do
        {
            j--;
        } while(arr[j]>pivot);

        if(i>=j) return j;

        swap(arr[i], arr[j]);
    }
}

int main()
{
    int arr[]={70, 80, 30, 90, 40, 50, 10};
    int index=6;

    int partitionIndex=Partition(arr, 0, index);

    cout<<partitionIndex<<endl;
    for(int i=0; i<=index; i++)
        cout<<arr[i]<<" ";

    return 0;
}
