//Time complexity: (-)(n)
//Auxilary space complexity: (-)(1)

#include<iostream>

using namespace std;

void Reverse(int arr[], int low, int high)
{
    while(low<high)
    {
      int temp=arr[low];
      arr[low]=arr[high];
      arr[high]=temp;
      low++; high--;
    }
}

void LeftRotateByD(int arr[], int n, int d)
{
    Reverse(arr, 0, d-1);
    Reverse(arr, d, n-1);
    Reverse(arr, 0, n-1);
}

int main()
{
    int arr[]={1,2,3,4,5};
    int n=5;

    LeftRotateByD(arr, n, 2);

    for(int i=0; i<n; i++)
        cout<<arr[i];
}
