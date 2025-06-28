#include<iostream>
using namespace std;
int maxFrequency(vector<int>& nums, int k) {
    sort(nums.begin(),nums.end());
    int l=0;
    long long total = 0;
    int res = 0;
    for(int r=0;r<nums.size();r++){
        total += nums[r];
        while((long long)nums[r]*(r-l+1)-total > k){
            total = total - nums[l];
            l++;
        }
        res = max(res,r-l+1);
    }
    return res;
}

int main(){
    int n,k;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the value of k: ";
    cin>>k;
    int res = maxFrequency(arr,k);
    cout<<"Maximum possible frequency of an element after performing at most k operations is: "<<res<<endl;
    return 0;
}