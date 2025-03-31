#include<iostream>

using namespace std;

bool IsArraySorted(int a[], int n){
    if(n==1){
        return true;
    }
    if(a[0]>a[1]){
        return false;
    }
    return IsArraySorted(a+1,n-1);
}

int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    bool result = IsArraySorted(a, n);
    cout<<"Is Array sorted? "<<result<<endl;

    return 0;
}
