#include<iostream>

using namespace std;

const int R=4, C=4;

void SearchInMatrix(int arr[R][C], int x)
{
    int i=0, j=C-1;

    while(i<R && j>=0)
    {
        if(arr[i][j]==x)
        {
            cout<<"Found at: "<<i<<", "<<j;
            return;
        }
        else if(arr[i][j]>x)
            j--;
        else
            i++;
    }
    cout<<"Not found";
    return;
}

int main()
{
    int arr[R][C]={{10,20,30,40}, {15,25,35,45}, {27,29,37,48}, {32,33,39,50}};

    SearchInMatrix(arr, 29);

    return 0;
}

