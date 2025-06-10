//Time complexity: O(m+n)

#include<iostream>

using namespace std;

void PrintUnion(int arr1[], int n1, int arr2[], int n2)
{
    int i=0, j=0;

    while(i<n1 && j<n2)
    {
        if(i>0 && arr1[i]==arr1[i-1])
            i++;
        else if(j>0 && arr2[j]==arr2[j-1])
            j++;
        else if(arr1[i]==arr2[j])
        {
            cout<<arr1[i]<<" ";
            i++;j++;
        }
        else if(arr1[i]<arr2[j])
        {
            cout<<arr1[i]<<" ";
            i++;
        }
        else
        {
            cout<<arr2[j]<<" ";
            j++;
        }
    }

    while(i<n1)
    {
        if(i>0 && arr1[i]!=arr1[i-1])
            cout<<arr1[i]<<" ";
        i++;
    }

    while(j<n2)
    {
        if(j>0 && arr2[j]!=arr2[j-1])
            cout<<arr2[j]<<" ";
        j++;
    }
}

int main()
{
    int arr1[]={2, 3, 3, 3, 4, 7};
    int n1=6;

    int arr2[]={4, 4, 5};
    int n2=3;

    PrintUnion(arr1, n1, arr2, n2);

    return 0;
}
