#include<iostream>

using namespace std;

const int N=4;

void Transpose(int arr[N][N])
{
    for(int i=0; i<N; i++)
    {
        for(int j=i+1; j<N; j++)
            swap(arr[i][j],arr[j][i]);
    }
}

int main()
{
    int arr[N][N]={{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};

    Transpose(arr);

    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}
