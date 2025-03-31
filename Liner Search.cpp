#include<bits/stdc++.h>

using namespace std;

int linearSearch(int a[], int n, int key){
    for(int i=0; i<n; i++){
        if(a[i]==key){
            return i;
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

    int pos = linearSearch(a, n, key);

    if(pos!= -1){
        cout<<"key found at endex: "<<pos<<endl;
    }else{
        cout<<"key not found";
    }

    return 0;
}
