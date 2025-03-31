#include<iostream>
#include <vector>

using namespace std;

int FindMajorityElement(vector<int>& a){
    int majorityElement = a[0];
    int count=1;
    for(int i=1; i<a.size(); i++){
        if(a[i]==majorityElement){
            count++;
        }
        else{
            count--;
            if(count==0){
                majorityElement=a[i];
                count=1;
            }
        }
    }
    return majorityElement;
}


int main(){
    vector<int> a={4,7,4,4,7,4,4,9,4,3};
    int majorityElement = FindMajorityElement(a);
    cout<<majorityElement;
    return 0;
}
