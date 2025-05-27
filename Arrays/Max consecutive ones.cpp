//Time complexity: (-)(n)
//Auxilary space complexity: (-)(1)

#include<iostream>

using namespace std;

int maxConsecutiveOnes(bool arr[], int n)
{
    int temp_count=0, max_count=0;

    for(int i=0; i<n; i++)
    {
        if(arr[i]==0)
            temp_count=0;
        else
        {
            temp_count++;
            max_count=max(max_count, temp_count);
        }
    }

    return max_count;
}

int main()
{
    bool arr[]={0,0,0,1,1,1,1};
    int n=7;

    int result=maxConsecutiveOnes(arr, n);
    cout<<result;

    return 0;
}
