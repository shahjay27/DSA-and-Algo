#include<iostream>

using namespace std;

void CycleSortDisinct(int arr[], int n)
{
    for(int cs=0; cs<n-1; cs++)
    {
        int item=arr[cs];
        int pos=cs;

        for(int i=cs+1; i<n; i++)
        {
            if(item>arr[i])
                pos++;
        }
        swap(item, arr[pos]);

        while(pos!=cs)
        {
            pos=cs;
            for(int i=cs+1; i<n; i++)
            {
                if(item>arr[i])
                    pos++;
            }
            swap(item, arr[pos]);
        }

    }
}

int main()
{
    int arr[]={10, 20, 50, 40, 30};
    int n=5;

    CycleSortDisinct(arr, n);

    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";

    return 0;
}
