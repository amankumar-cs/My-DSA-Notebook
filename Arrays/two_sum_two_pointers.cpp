#include<iostream>
using namespace std;
int main(){
    vector<int> arr = {2,6,5,8,11};
    int target = 14;
    int n = arr.size();
    int left = 0;
    int right = n-1;
    sort(arr.begin(),arr.end());
    while(left<right){
        if(arr[left]+arr[right]==target){
            cout<<"Yes the target sum is possible by adding the two number!!"<<endl;
            break;
        }
        else if(arr[left]+arr[right] > target){
            right--;
        }
        else{
            left++;
        }
    }
    if(left==right){
        cout<<"No the target sum not possible by adding the two numbers!!"<<endl;
    }
    
    return 0;
}