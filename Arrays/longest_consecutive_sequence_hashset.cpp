#include<iostream>
#include<unordered_set>
using namespace std;

int longestConsecutive(vector<int>& nums) {
    unordered_set<int> st;
    int n = nums.size();
    int maxCount = 1;

    if(nums.empty()){
        return 0;
    }
    for(int i=0;i<n;i++){
        st.insert(nums[i]);
    }
    for(auto it: st){
        if(st.find(it-1)==st.end()){
            int count = 0, cur = it;
            while(st.find(cur)!=st.end()){
                count++;
                cur++;
            }
            maxCount = max(count,maxCount);
        }
    }
    return maxCount;
}
int main(){
    vector<int> arr = {0,3,7,2,5,8,4,6,0,1};
    int res = longestConsecutive(arr);
    cout<<"The length of the longest consecutive elements sequence is: "<<res<<endl;
    return 0;
}