//Time complexity: O(n)
//Aux space: O(n)

#include<iostream>
#include<unordered_set>

using namespace std;

bool isSumPair(int arr[], int n, int sum)
{
    unordered_set<int> h;

    for(int i=0; i<n; i++)
    {
        if(h.find(sum-arr[i])!=h.end())
            return true;
        else
            h.insert(arr[i]);
    }
    return false;
}

int main()
{
    int arr[]={8, 3, 4, 2, 5};
    int n=5;
    int sum=6;

    bool result=isSumPair(arr, n, sum);
    cout<<result;

    return 0;
}
