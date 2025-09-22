#include<iostream>
using namespace std;
int main(){
    vector<int> nums = {1,2,2,3,1,4};
    unordered_map<int,int> mpp;
    int max = 0;
    int count = 0;
    int n = nums.size();
    for(int i=0;i<n;i++){
        mpp[nums[i]]++;
    }
    for(auto it: mpp){
        if(it.second>max){
            max = it.second;
            count = it.second;
        }
        else if(it.second==max){
            count+=it.second;
        }
    }
    cout<<"The number of elements in the array with maximum frequency is: "<<count<<endl;
    return 0;
}