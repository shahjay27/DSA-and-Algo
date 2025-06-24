//Time complexity: (-)(m+n)
//Aux space: O(m+n)

#include<iostream>
#include<unordered_set>

using namespace std;

int Count_UnionElements(int arr1[], int n1, int arr2[], int n2)
{
    unordered_set<int> s(arr1, arr1+n1);

    s.insert(arr2, arr2+n2);

    return s.size();
}


int main()
{
    int arr1[]={10, 20, 30};
    int n1=3;

    int arr2[]={30, 10, 40};
    int n2=3;

    int NoOfelements=Count_UnionElements(arr1, n1, arr2, n2);
    cout<<NoOfelements;

    return 0;
}

