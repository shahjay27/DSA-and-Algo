//Complexity same as Quick sort

#include<iostream>

using namespace std;

int doLomutoPartition(int arr[], int low, int high)
{
    int i=low-1;

    for(int j=low; j<high; j++)
    {
        if(arr[j]<=arr[high])
        {
            i++;
            swap(arr[j],arr[i]);
        }
    }
    swap(arr[high], arr[i+1]);

    return i+1;
}

int getKthElement(int arr[], int n, int k)
{
    int low=0, high=n-1;
    while(low<=high)
    {
        int p=doLomutoPartition(arr, low, high);

        if(p==k-1)
            return arr[p];
        else if(p<k-1)
            low=p+1;
        else
            high=p-1;
    }

    return -1;
}

int main()
{
    int arr[]={10, 4, 5, 8, 11, 6, 26};
    int n=7;

    int elem=getKthElement(arr, n, 5);
    cout<<elem;

    return 0;
}
