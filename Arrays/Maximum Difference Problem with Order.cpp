//Time complexity: (-)(n)
//Auxilary space complexity: (-)(1)

#include<iostream>

using namespace std;


//Maximum value of arr[j]-arr[i] such that j>i
int maxDiff(int arr[], int n)
{
    int result=arr[1]-arr[0], minValue=arr[0];

    for(int j=1; j<n; j++)
    {
        result = result>(arr[j]-minValue)?result:(arr[j]-minValue);
        minValue=minValue<arr[j]?minValue:arr[j];
    }
    return result;
}

int main()
{
    int arr[]={2,3,10,6,4,8,1};
    int n=7;

    int result=maxDiff(arr, n);
    cout<<result;

    return 0;
}
