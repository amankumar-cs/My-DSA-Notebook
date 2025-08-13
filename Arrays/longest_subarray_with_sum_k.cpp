#include<iostream>
using namespace std;
int main(){
    int len = 0;
    vector<int> arr = {1,2,3,1,1,1,1,4,2,3};
    int k = 3;
    int n = arr.size();
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=i;j<n;j++){
            sum += arr[j];
            if(sum==k){
                len = max(len,j-i+1);
            }
        }
    }
    cout<<"The longest subarray with sum k is: "<<len<<endl;
    return 0;
}