//Time complexity: ϴ(n)

#include<iostream>

using namespace std;

int largestElement(int arr[], int n)
{
    int largestEleIndex=0;

    for(int i=1; i<n; i++)
    {
        if(arr[i]>arr[largestEleIndex])
            largestEleIndex=i;
    }

    return largestEleIndex;
}

int main()
{
    int arr[]={1,2,3,4,5};
    int n=5;

    int largestEleIndex=largestElement(arr, n);

    cout<<largestEleIndex;

    return 0;
}
