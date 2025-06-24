//Time complexity: O(n)
//Aux space: O(n)

#include<iostream>
#include<unordered_set>

using namespace std;

bool isSubarray(int arr[], int n)
{
    unordered_set<int> h;
    int sum=0;

    for(int i=0; i<n; i++)
    {
        sum+=arr[i];
        if(h.find(sum)!=h.end())
            return true;
        if(sum==0)
            return true;

        h.insert(sum);
    }
    return false;
}

int main()
{
    int arr[]={-3, 4,-3,-1, 1};
    int n=5;

    bool result=isSubarray(arr, n);
    cout<<result;

    return 0;
}
