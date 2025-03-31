#include<iostream>

using namespace std;


int countFibonacci(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return countFibonacci(n-1)+countFibonacci(n-2);
}

int main(){
    int n;
    cin>>n;

    int nthFiboNum = countFibonacci(n);
    cout<<"Result: "<<nthFiboNum<<endl;

    return 0;
}
