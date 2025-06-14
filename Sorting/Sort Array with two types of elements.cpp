
#include<iostream>

using namespace std;

void SegPosneg(int arr[], int n) //hoares partition
{
    int i=-1, j=n;

    while(true)
    {
        do
        {
            i++;
        }while(arr[i]<0);

        do
        {
            j--;
        }while(arr[j]>=0);

        if(i>=j)
            return;

        swap(arr[i], arr[j]);
    }
}

int main()
{
    int arr[]={-10, 8, -1, 4};
    int n=4;

    SegPosneg(arr, n);

    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";

    return 0;
}
