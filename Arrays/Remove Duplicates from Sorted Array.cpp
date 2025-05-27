//Time complexity: (-)(n)
//Auxilary space complexity: (-)(1)

#include<iostream>

using namespace std;

int removeDuplicates(int arr[], int n)
{
    int arrayPos=0;

    for(int i=1; i<n;i++)
    {
        if(arr[i]!=arr[arrayPos])
        {
            arrayPos++;
            arr[arrayPos]=arr[i];
        }
    }
    return arrayPos+1;
}

int main()
{
    int arr[]={1,2,2,2,3,3,4,4,4,5};
    int n=10;

    int newArrayLenght=removeDuplicates(arr, n);

    for(int i=0; i<newArrayLenght; i++)
        cout<<arr[i];

    return 0;
}
