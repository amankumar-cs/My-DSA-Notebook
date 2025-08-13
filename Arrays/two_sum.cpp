#include<iostream>
using namespace std;
int main(){
    vector<int> arr = {2,6,5,8,11};
    int target = 19;
    int n = arr.size();
    int flag = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                cout<<"Required indices are: ("<<i<<","<<j<<")"<<endl;
                flag = 1;
                break;
            }
        }
    }
    if(flag==0){
        cout<<"No sum exist for the target!!";
    }
    return 0;
}