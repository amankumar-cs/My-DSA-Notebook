#include<iostream>
using namespace std;
int main(){
    vector<int> original = {3,9,6};
    vector<int>&nums = original;
    // for(int i=0;i<nums.capacity();i++){
    //     cout<<nums.at(i)<<" ";
    // }
    // cout<<endl;
    // cout<<nums[2]<<endl;
    // sort(nums.begin(),nums.end());
    for(auto it: nums){
        cout<<it<<" ";
    }
    // cout<<endl<<nums.capacity()<<endl;
    // int k = 2;
    // sort(nums.begin(),nums.end());
    //     int arr[nums.size()-1];
    //     for(int i=0;i<nums.size()-1;i++){
    //         arr[i] = nums.at(i+1) - nums.at(i);
    //     }
    //     int size = sizeof(arr) / sizeof(arr[0]);
    //     int freqCount = 1;
    //     for(int i=size-2;i>=0;i--){
    //         arr[i] = arr[i] + arr[i+1];
    //     }
    //     int j = size-1;
    //     while(k>=arr[j]){
    //         freqCount++;
    //         k = k - arr[j];
    //         j--;
    //         if(j<0){
    //             break;
    //         }
    //     }
    //     cout<<freqCount<<endl;

    int arr[] = {2,3,4,5,6,8};
    
    return 0;
}