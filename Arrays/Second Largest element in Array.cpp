//Time complexity: ϴ(n)

#include<iostream>

using namespace std;

int largestElement(int arr[], int n)
{
    int largestEleIndex=0;
    int secondLargestEleIndex=-1;

    for(int i=1; i<n; i++)
    {
        if(arr[i]>arr[largestEleIndex])
        {
            secondLargestEleIndex=largestEleIndex;
            largestEleIndex=i;
        }
        else if(arr[i]>arr[secondLargestEleIndex] && arr[i]!=arr[largestEleIndex])
            secondLargestEleIndex=i;

    }

    return secondLargestEleIndex;
}

int main()
{
    int arr[]={1,10,3,9,5};
    int n=5;

    int largestEleIndex=largestElement(arr, n);
    cout<<largestEleIndex;

    return 0;
}
