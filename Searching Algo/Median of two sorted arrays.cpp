
#include <iomanip>
#include <iostream>

using namespace std;

double getMedianOfTwoArrays(int arr1[], int n1, int arr2[], int n2)
{
    int pos=0, i=0, j=0;
    int median1, median2;

    while((n1+n2)/2>=pos)
    {
        median2=median1;
        if(arr1[i]<=arr2[j])
        {
            median1=arr1[i];
            i++;

        }
        else
        {
            median1=arr2[j];
            j++;
        }

        pos++;
    }


    if((n1+n2)%2==0)
        return (double)(median1+median2)/2;
    else
        return median1;
}

int main()
{
    int arr1[]={10,20,30,99};
    int n1=4;
    int arr2[]={5,15,25,35,45};
    int n2=5;

    double median=getMedianOfTwoArrays(arr1, n1, arr2, n2);
    cout<<setprecision(3)<<median;
}
