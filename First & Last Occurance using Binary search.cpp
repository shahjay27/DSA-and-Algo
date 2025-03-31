#include<iostream>
#include <vector>

using namespace std;

int GetFirstOccurance(vector<int>& nums, int target){
    int s=0;
    int e=nums.size()-1;
    int ans=-1;

    while(s<=e){
        int mid=s+(e-s)/2;

        if(nums[mid]==target){
            ans=mid;
            e=mid-1;
        }
        else if(nums[mid]>target){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
}

int GetLastOccurance(vector<int>& nums, int target){
    int s=0;
    int e=nums.size()-1;
    int ans=-1;

    while(s<=e){
        int mid=s+(e-s)/2;

        if(nums[mid]==target){
            ans=mid;
            s=mid+1;
        }
        else if(nums[mid]>target){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
}

int main(){

    vector<int> a={5, 7, 7, 8, 8, 10};
    int target=8;

    int firstOccurance = GetFirstOccurance(a, target);
    int lastOccurance = GetLastOccurance(a, target);

    cout<<"First occurance: "<<firstOccurance<<endl;
    cout<<"Last occurance: "<<lastOccurance<<endl;

    return 0;
}
