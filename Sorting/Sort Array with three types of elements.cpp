// Dutch National Flag Algorithm
//Time: (-)(n)
//Space: (-)(1)

#include<iostream>

using namespace std;

void ThreeTypeEleSort(int arr[], int n)
{
    int low=0, high=n-1, mid=0;

    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1)
            mid++;
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main()
{
    int arr[]={0, 1, 2, 1, 1, 2};
    int n=6;

    ThreeTypeEleSort(arr, n);

    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";

    return 0;
}
