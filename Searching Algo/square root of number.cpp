//Time complexity: O(logN)

#include<iostream>

using namespace std;

int getIntSqRoot(int n)
{
    int low=0, high=n/2, result=-1;

    while(low<=high)
    {
        int mid=(low+high)/2;
        if(mid*mid==n)
            return mid;
        else if(mid*mid>n)
            high=mid-1;
        else
        {
            result=mid;
            low=mid+1;
        }
    }
    return result;
}

int main()
{
    int n=101;

    int sqRoot=getIntSqRoot(n);
    cout<<sqRoot;

    return 0;
}
