//Time complexity: (-)(n)
//Auxilary space complexity: (-)(1)

#include<iostream>

using namespace std;

//Initial Solution
/*void countProfit(int arr[], int n)
{
    int buy=-1, profit=0;

    for(int i=0; i<n; i++)
    {
        if(arr[i]<arr[i+1] && buy==-1)
            buy=arr[i];
        else if(arr[i]>arr[i+1] && buy!=-1)
        {
            profit=profit+(arr[i]-buy);
            buy=-1;
        }
    }
    if(buy!=-1)
        profit = profit+(arr[n-1]-buy);

    cout<<profit;
}*/

//Better solution
void countProfit(int arr[], int n)
{
    int profit=0;

    for(int i=1; i<n; i++)
    {
        if(arr[i]>arr[i-1])
            profit+=(arr[i]-arr[i-1]);
    }

    cout<<profit;
}

int main()
{
    int arr[]={1,5,3,8,12};
    int n=5;

    countProfit(arr, n);

    return 0;
}
