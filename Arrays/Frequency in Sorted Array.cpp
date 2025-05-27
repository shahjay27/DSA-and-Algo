//Time complexity: (-)(n)
//Auxilary space complexity: (-)(1)

#include<iostream>

using namespace std;

void printFrequency(int arr[], int n)
{
    int countElement=0;

    for(int i=0; i<n; i++)
    {
        if(arr[i]==arr[i+1])
            countElement++;
        else
        {
            cout<<"Element "<<arr[i]<<" frequency:"<<countElement+1<<endl;
            countElement=0;
        }
    }
}

int main()
{
    int arr[]={40};
    int n=1;

    printFrequency(arr, n);

    return 0;
}
