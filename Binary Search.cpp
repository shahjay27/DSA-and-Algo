#include<bits/stdc++.h>

using namespace std;

int binarySearch(int a[], int n, int key){
    int st=0;
    int e=n-1;

    while(st<=e){
        ///int mid = (st+e)/2; -> overflow
        int mid = st + (e-st)/2;
        if(a[mid]==key){
            return mid;
        }
        else if(a[mid]>key){
            e=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    return -1;
}

int main(){

    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int key;
    cout<<"Enter key: ";
    cin>>key;

    sort(a,a+n);

    int pos = binarySearch(a, n, key);

    if(pos!= -1){
        cout<<"key found at index: "<<pos<<endl;
    }else{
        cout<<"key not found";
    }
}
