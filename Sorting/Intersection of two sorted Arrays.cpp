#include<iostream>

using namespace std;

void CommonElements(int arr1[], int n1, int arr2[], int n2)
{
    int i=0, j=0, lastPrintedEle;

    while(i<n1 && j<n2)
    {
        if(arr1[i]==arr2[j] && arr1[i]!=lastPrintedEle)
        {
            cout<<arr1[i]<<" ";
            lastPrintedEle=arr1[i];
            i++;j++;
        }
        else if(arr1[i]<arr2[j])
            i++;
        else
            j++;
    }
}

int main()
{
    int arr1[]={3, 5, 10, 10, 10, 15, 15, 20};
    int n1=8;

    int arr2[]={5, 10, 10, 15, 30};
    int n2=5;

    CommonElements(arr1, n1, arr2, n2);

    return 0;
}
