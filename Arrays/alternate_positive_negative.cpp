#include<iostream>
using namespace std;
int main(){
    vector<int> nums = {3,1,-2,-5,2,-4};
    vector<int> arr(nums.size());
    int j=0, k=1;
    int n = nums.size();
    for(int i=0;i<n;i++){
        if(nums[i]>0){
            arr[j] = nums[i];
            j+=2;
        }
        else{
            arr[k] = nums[i];
            k+=2;
        }
    }
    cout<<"After rearrangement the resulting array becomes: [";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]"<<endl;
    return 0;
}