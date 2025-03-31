#include<iostream>

using namespace std;

void selectionSort(int a[], int n){
    for(int i=0; i<n-1; i++){
        int smallest = i+1;
        for(int j=i+2; j<n; j++){
            if(a[smallest] > a[j]){
                smallest = j;
            }
        }

        if(a[i] > a[smallest]){
            swap(a[i], a[smallest]);
        }

    }
}

int main(){

    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    selectionSort(a, n);

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }

    return 0;
}
