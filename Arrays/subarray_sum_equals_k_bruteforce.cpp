#include<iostream>
using namespace std;
int main(){
    vector<int> nums = {1,2,3,-3,1,1,1,4,2,-3};
    int k = 3;
    int count = 0;
    int n = nums.size();
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=i;j<n;j++){
            sum+=nums[j];
            if(sum==k){
                count++;
            }
        }
    }
    cout<<"The total number of subarrays whose sum equals to k is: "<<count<<endl;
}