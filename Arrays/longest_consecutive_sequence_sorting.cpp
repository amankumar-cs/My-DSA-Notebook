#include<iostream>
using namespace std;
int longestConsecutive(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int count = 1, maxCount = 1;
    int n = nums.size();
    if(n==0){
        return 0;
    }
    for(int i=1;i<n;i++){
        if(nums[i]==nums[i-1]+1){
            count++;
        }
        else if(nums[i]==nums[i-1]){
            continue;
        }
        else{
            maxCount = max(count,maxCount);
            count = 1;
        }
    }
    return max(count,maxCount);
}
int main(){
    vector<int> arr = {0,3,7,2,5,8,4,6,0,1};
    int res = longestConsecutive(arr);
    cout<<"The length of the longest consecutive elements sequence is: "<<res<<endl;

}