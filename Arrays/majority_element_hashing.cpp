#include<iostream>
#include<map>
using namespace std;
int main(){
    vector<int> nums = {7,7,5,7,5,1,5,7,5,5,7,7,5,5,5,5};
    map<int,int> mpp;
    int n = nums.size();
    int flag = 0;
    for(int i=0;i<n;i++){
        mpp[nums[i]]++;
    }
    for(auto it: mpp){
        if(it.second>(n/2)){
            cout<<"The majority element in this array is: "<<it.first<<endl;
            flag = 1;
            break;
        }
    }
    if(flag==0){
        cout<<"No majority element exists in the given array!!"<<endl;
    }
}