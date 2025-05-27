//Time complexity: (-)(n)
//Auxilary space complexity: (-)(1)

#include<iostream>

using namespace std;

void moveZerosToEnd(int arr[], int n)
{
    int countNZero=0;

    for(int i=0; i<n; i++)
    {
        if(arr[i]!=0)
        {
            int temp=arr[i];
            arr[i]=arr[countNZero];
            arr[countNZero]=temp;
            countNZero++;
        }
    }
}

int main()
{
    int arr[]= {8, 5, 0, 10, 0, 20};
    int n=6;

    moveZerosToEnd(arr, n);

    for(int i=0; i<n; i++)
        cout<<arr[i];

    return 0;
}
