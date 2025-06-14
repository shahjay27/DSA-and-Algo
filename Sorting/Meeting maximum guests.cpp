#include<iostream>
#include <bits/stdc++.h>

using namespace std;


int maxGusest(int arr[], int dept[], int n)
{

    sort(arr, arr+n);
    sort(dept, dept+n);

    int i=1, j=0, res=1, curr=1;

    while(i<n && j<n)
    {
        if(arr[i]<=dept[j])
        {
            curr++; i++;
        }
        else
        {
            curr--; j++;
        }
        res=max(res, curr);
    }

    return res;
}

int main()
{
    int arr[]={900, 600, 700};
    int dept[]={1000, 800, 730};
    int n=3;

    int res=maxGusest(arr, dept, n);
    cout<<res;

    return 0;
}
