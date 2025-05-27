
#include<iostream>

using namespace std;

int calMaxSumofSubArray(int arr[], int n)
{
   int result=arr[0], maxEnding=arr[0];

   for(int i=1; i<n; i++)
   {
       maxEnding=max(maxEnding+arr[i], arr[i]);
       result=max(result, maxEnding);
   }

   return result;
}

int main()
{
    int arr[]={-3,8,-2,4,-5,6};
    int n=6;

    int result=calMaxSumofSubArray(arr, n);
    cout<<result;

    return 0;
}
