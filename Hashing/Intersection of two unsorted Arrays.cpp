//Time complexity: (-)(m+n)
//Auz space: (-)(n)

#include<iostream>
#include<unordered_set>

using namespace std;

void Print_IntersectionofTwoArrays(int arr1[], int n1, int arr2[], int n2)
{
    unordered_set<int> s(arr2, arr2+n2);

    for(int i=0; i<n1; i++)
    {
        if(s.count(arr1[i])>0)
            cout<<arr1[i]<<" ";
    }

}

int main()
{
    int arr1[]={10, 20, 30};
    int n1=3;

    int arr2[]={30, 10};
    int n2=2;

    Print_IntersectionofTwoArrays(arr1, n1, arr2, n2);

    return 0;
}
