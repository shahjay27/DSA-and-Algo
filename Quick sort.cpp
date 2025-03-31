#include<iostream>
using namespace std;

int Partition(int a[], int s, int e){
    int pivotElement = a[e];

    int pivotIndex=s;
    for(int i=s; i<=e; i++){
        if(a[i]<a[e]){
            pivotIndex++;
        }
    }

    swap(a[pivotIndex], a[e]);

    int i=s;
    int j=e;
    while(i<pivotIndex || j>pivotIndex){
        if(a[i]>pivotElement && a[j]<pivotElement){
            swap(a[i], a[j]);
            i++;
            j--;
        }
        else if(a[i]<pivotElement){
            i++;
        }
        else if(a[j]>pivotElement){
            j--;
        }
    }

    return pivotIndex;

}

void QuickSort(int a[], int s, int e){
    if(s>=e){
        return;
    }
    int p=Partition(a, s, e);
    QuickSort(a, s, p-1);
    QuickSort(a, p+1, e);
}


int main(){

    int a[]={1,2,3,4,5,6,7,-1,-5,10};
    QuickSort(a,0,9);

    for(int i; i<=9; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
