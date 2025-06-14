#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int getMinDiff(int arr[], int n)
{
    sort(arr, arr+n);

    int res=INT_MAX;

    for(int i=1; i<n; i++)
        res=min(res, arr[i]-arr[i-1]);

    return res;
}

int main()
{
    int arr[]={10, 8, 1, 4};
    int miniDiff=getMinDiff(arr, 4);
    cout<<miniDiff;

    return 0;
}
