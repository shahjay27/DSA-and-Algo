//Time complexity: (-)(n)
//Auxilary space complexity: (-)(1)

#include<iostream>

using namespace std;

void PrintLeaders(int arr[], int n)
{
    int curr_leader=arr[n-1]; //last element is always a leader
    cout<<curr_leader;

    for(int i=n-2; i>=0; i--)
    {
        if(arr[i]>curr_leader)
        {
            cout<<" "<<arr[i];
            curr_leader=arr[i];
        }
    }
}

int main()
{
    int arr[]={7, 10, 4, 10, 6, 5, 2};
    int n=7;

    PrintLeaders(arr, n);

    return 0;
}
