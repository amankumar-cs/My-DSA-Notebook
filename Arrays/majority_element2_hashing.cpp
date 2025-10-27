#include<iostream>
using namespace std;
int main(){
    vector<int> nums = {1,1,1,3,3,2,2,2};
    unordered_map<int,int> mpp;
    vector<int> ans;
    int n = nums.size();
    for(int i=0;i<n;i++){
        mpp[nums[i]]++;
    }
    for(auto it: mpp){
        if(it.second>n/3){
            ans.push_back(it.first);
        }
    }
    sort(ans.begin(),ans.end());
    cout<<"The majority elements in the given array is: [";
    for(int i=0;i<ans.size()-1;i++){
        cout<<ans[i]<<", ";
    }
    cout<<ans[ans.size()-1]<<"]"<<endl;
    return 0;
}