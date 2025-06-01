// Array is sorted.
// Time  complexity: O(N)

#include<iostream>

using namespace std;

bool isArrayHasPairOfSum(int arr[], int n, int sum)
{
    int i=0, j=n-1;

    while(i<j)
    {
        if(arr[i]+arr[j]==sum)
            return true;
        else if(arr[i]+arr[j]>sum)
            j--;
        else
            i++;
    }

    return false;
}

int main()
{
    int arr[]={2,4,8,9,11,12,20,30};
    int n=8;
    int sum=12;

    bool result=isArrayHasPairOfSum(arr, n, sum);
    cout<<result;

    return 0;
}
