//Time complexity: (-)(n)
//Aux space: O(n)

#include<iostream>
#include<unordered_set>

using namespace std;

int CountDistinct(int arr[], int n)
{
    unordered_set<int> s;

    for(int i=0; i<n; i++)
        s.insert(arr[i]);

    return s.size();
}

int main()
{
    int arr[]={10, 20, 10, 20, 30};
    int n=5;

    int distinct=CountDistinct(arr, n);
    cout<<distinct;

    return 0;
}
