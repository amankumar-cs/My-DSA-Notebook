#include<iostream>
using namespace std;
int main(){
    vector<int> arr = {-2,-3,4,-1,-2,1,5,-3};
    int maxSum = INT_MIN;
    int sum = 0;
    int ansStart = -1;
    int ansEnd = -1;
    int start = 0;
    int n = arr.size();
    for(int i=0;i<n;i++){
        sum += arr[i];
        if(sum>maxSum){
            maxSum = sum;
            ansStart = start;
            ansEnd = i; 
        }
        if(sum<0){
            sum = 0;
            start = i+1;
        }
    }
    cout<<"The maximum sum among all possible subarray is: "<<maxSum<<endl;
    cout<<"The subarray which gives us the maximum sum is: [";
    int i;
    for(i=ansStart;i<ansEnd;i++){
        cout<<arr[i]<<",";
    } 
    cout<<arr[i]<<"]"<<endl;
    return 0;
}