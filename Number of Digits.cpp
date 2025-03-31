#include<iostream>

using namespace std;

int CountDigitsFor(int n){
    if(n<10){
        return 1;
    }

    return 1+CountDigitsFor(n/10);
}

int main(){
    int n;
    cin>>n;

    int noOfDigits = CountDigitsFor(n);
    cout<<"Number of digits: "<<noOfDigits<<endl;

    return 0;
}
