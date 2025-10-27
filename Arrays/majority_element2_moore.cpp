#include<iostream>
using namespace std;
int main(){
    vector<int> nums = {1,1,1,3,3,2,2,2};
    vector<int> ans;
    int n = nums.size();
    int count1=0, count2=0;
    int element1, element2;
    for(int i=0;i<n;i++){
        if(count1==0 && nums[i]!=element2){
            count1 = 1;
            element1 = nums[i];
        }
        else if(count2==0 && nums[i]!=element1){
            count2 = 1;
            element2 = nums[i];
        }
        else if(nums[i]==element1){
            count1++;
        }
        else if(nums[i]==element2){
            count2++;
        }

        else{
            count1--;
            count2--;
        }
    }
    count1=0;
    count2=0;
    for(int i=0;i<n;i++){
        if(nums[i]==element1){
            count1++;
        }
        else if(nums[i]==element2){
            count2++;
        }
    }
    if(count1>n/3){
        ans.push_back(element1);
    }
    if(count2>n/3){
        ans.push_back(element2);
    }
    if(ans.size()==0){
        cout<<"There is no majority elements are there in the array!!"<<endl;
        exit(0);
    }
    sort(ans.begin(),ans.end());
    cout<<"The majority elements in the given array is: [";
    for(int i=0;i<ans.size()-1;i++){
        cout<<ans[i]<<", ";
    }
    cout<<ans[ans.size()-1]<<"]"<<endl;
    return 0;
}