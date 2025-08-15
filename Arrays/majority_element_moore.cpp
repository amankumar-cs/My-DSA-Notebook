#include<iostream>
#include<map>
using namespace std;
int main(){
    vector<int> nums = {7,7,5,7,5,1,5,7,5,5,7,7,5,5,5,5};
    map<int,int> mpp;
    int n = nums.size();
    int element = nums[0];
    int count = 0;
    for(int i=0;i<n;i++){
        if(nums[i]==element){
            count++;
        }
        else{
            if(count>0){
                count--;
            }
            else{
                element = nums[i];
                count++;
            }
        }
    }
    count = 0;
    for(int i=0;i<n;i++){
        if(nums[i]==element){
            count++;
        }
    }
    if(count>(n/2)){
        cout<<"The majority element in this array is: "<<element<<endl;
    }
    else{
        cout<<"No majority element exists in the given array!!"<<endl;
    }
}