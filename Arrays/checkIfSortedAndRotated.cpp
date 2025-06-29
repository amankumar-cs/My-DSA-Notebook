#include<iostream>
using namespace std;
bool check(vector<int>& nums) {
    int size = nums.size();
    for(int i=0;i<size;i++){
        int count = 0;
        int j = (i+1)%size;
        while(j!=i){
            if(nums[j]>nums[(j+1)%size]){
                break;
            }
            count++;
            j = (j+1)%size;
        }
        if(count==size-1){
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(check(arr)){
        cout<<"Yes the array is sorted and rotated!!"<<endl;
    }
    else{
        cout<<"No, the array is not sorted and rotated!!"<<endl;
    }
    return 0;
}