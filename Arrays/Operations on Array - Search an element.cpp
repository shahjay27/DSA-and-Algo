//Time complexity (unsorted array) - O(n)

#include<iostream>

using namespace std;

int search(int arr[], int n, int x)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i] == x)
            return i;
    }

    return -1;
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,19};
    int searchValue=10;

    int result = search(arr, 10, searchValue);

    cout<<result;

    return 0;
}


