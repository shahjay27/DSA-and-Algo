
#include<iostream>
using namespace std;

int Partition(int a[], int s, int e){
    int i=s;
    int pivot=a[e];
    for(int j=s; j<=e-1; j++){
        if(a[j]<pivot){
            swap(a[i], a[j]);
            i++;
        }
    }
    swap(a[i],a[e]);
    return i;

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
