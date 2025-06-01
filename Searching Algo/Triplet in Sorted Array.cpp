
#include<iostream>

using namespace std;

bool isTriplrInArry(int arr[], int n, int sum)
{
    int i=0,j=n-1;

    while(arr[i]+arr[j]>sum)
        j--;

    while(i<j && j-i>1)
    {
        int m=(i+j)/2;

        if(arr[i]+arr[m]+arr[j]==sum)
        {
            cout<<i<<" "<<m<<" "<<j;
            return true;
        }

        else if(arr[i]+arr[m]+arr[j]<sum)
        {
            m++;
            while(m<j)
            {
                if(arr[i]+arr[m]+arr[j]==sum)
                {
                    cout<<i<<" "<<m<<" "<<j;
                    return true;
                }
                else if(arr[i]+arr[m]+arr[j]>sum)
                    break;
                m++;
            }
            i++;
        }
        else
        {
            m--;
            while(m>i)
            {
                if(arr[i]+arr[m]+arr[j]==sum)
                {
                    cout<<i<<" "<<m<<" "<<j;
                    return true;
                }
                else if(arr[i]+arr[m]+arr[j]<sum)
                    break;
                m--;
            }
            j--;
        }
    }
    return false;
}

int main()
{
    int arr[]= {2,3,4,8,9,20,40};
    int n=7;
    int sum=10;

    int result=isTriplrInArry(arr, n, sum);
    cout<<result;

    return 0;
}
