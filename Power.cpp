#include<iostream>

using namespace std;

int CalPower(int n, int m){
    if(m==1){
        return n;
    }

    return n*CalPower(n, m-1);
}

int main(){
    int n,m; ///n^m
    cin>>n;
    cin>>m;

    int result = CalPower(n, m);
    cout<<"Result: "<<result<<endl;

    return 0;
}
