#include<iostream>
using namespace std;
int main(){
    vector<int> arr = {1,2,3,1,1,1,1,4,2,3};
    int k = 3;
    int left = 0,right = 0;
    long long sum = arr[0];
    int maxLen = 0;
    int n = arr.size();
    while(right<n){
        while(left<=right && sum>k){
            sum = sum - arr[left];
            left++;
        }
        if(sum==k){
            maxLen = max(maxLen, right-left+1);
        }
        right++;
        if(right<n){
            sum += arr[right];
        }
    }
    cout<<"The longest subarray with sum k is: "<<maxLen<<endl;
    return 0;
}