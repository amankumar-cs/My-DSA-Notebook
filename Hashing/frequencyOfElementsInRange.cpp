#include<iostream>
#include<map>
using namespace std;

vector<int> frequencyCount(vector<int>& arr) {
    // code here
    vector<int> nums(arr.size());
    map<int,int> mpp;
    for(int i=0;i<arr.size();i++){
        mpp[arr[i]]++;
    }
    for(auto it: mpp){
        nums[it.first-1] = it.second;
    }
    return nums;
}
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements in the range of 1 to "<<n<<": ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> nums = frequencyCount(arr);
    cout<<"The frequency count of elements from 1 to "<<n<<" is given as: [";
    for(int i=0;i<n;i++){
        if(i==n-1){
            cout<<nums[i];
            break;
        }
        cout<<nums[i]<<", ";
    }
    cout<<"]"<<endl;

    return 0;
}