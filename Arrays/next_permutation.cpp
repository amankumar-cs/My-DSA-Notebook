#include<iostream>
using namespace std;
void nextPermutation(vector<int> nums){
    int n = nums.size();
    int i = n-2;
    while(i>=0 && nums[i]>=nums[i+1]){
        i--;
    }
    if(i==-1){
        reverse(nums.begin(),nums.end());
        return;
    }
    int item = nums[i];
    for(int j=n-1;j>i;j--){
        if(nums[j]>item){
            swap(nums[i],nums[j]);
            break;
        }
    }
    reverse(nums.begin()+i+1,nums.end());
    cout<<"The next permutation of the given array is: [";
    for(int i=0;i<n;i++){
        cout<<nums[i];
        if(i<n-1){
            cout<<" ";
        }
    }
    cout<<"]"<<endl;
}
int main(){
    vector<int> nums = {1,2,3};
    nextPermutation(nums);
    return 0;
}
