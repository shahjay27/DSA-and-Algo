//Time complexity: (-)(n)
//Aux space: O(n)

#include<iostream>
#include<unordered_map>

using namespace std;

void PrintFreq(int arr[], int n)
{
    unordered_map<int, int> m;

    for(int i=0; i<n; i++)
        m[arr[i]]++;

    for(auto e: m)
        cout<<e.first<<" "<<e.second<<endl;
}

int main()
{
    int arr[]={10, 20, 10, 20, 30};
    int n=5;

    PrintFreq(arr, n);

    return 0;
}
