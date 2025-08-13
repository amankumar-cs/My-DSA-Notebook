#include<iostream>
#include<map>
using namespace std;
int main(){
    vector<int> arr = {2,6,5,8,11};
    int target = 10;
    int n = arr.size();
    int flag = 0;
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        int curr = arr[i];
        int rem = target-curr;
        if(mpp.find(rem)!=mpp.end()){
            cout<<"The required indices are: ("<<mpp[rem]<<","<<i<<")"<<endl;
            flag = 1;
            break;
        }
        mpp[curr] = i;
    }
    cout<<"No sum exists for the given target!!"<<endl;
    return 0;
}