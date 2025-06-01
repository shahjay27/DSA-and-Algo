//Time complexity: O(n^2)
// a[i]+a[b]+a[c]==sum

#include<iostream>

using namespace std;

bool isTripletInArray(int arr[], int n, int sum)
{
    for(int x=0; x<n-2; x++)
    {
        int newSum=sum-arr[x];
        int i=x+1, j=n-1;

        while(i<j)
        {
            if(arr[i]+arr[j]==newSum)
                return true;
            else if(arr[i]+arr[j]>newSum)
                j--;
            else
                i--;
        }
    }
    return false;
}

int main()
{
    int arr[]={2,3,4,8,9,20,40};
    int n=7;
    int sum=32;

    bool result=isTripletInArray(arr, n, sum);
    cout<<result;

    return 0;
}
