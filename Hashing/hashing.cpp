#include<iostream>
#include<map>
using namespace std;
int main(){
    int arr[] = {1,2,3,1,3,2,12,1,15,12,2,1,3,15,15,16,17,4,3,2};
    unordered_map<int,int> mpp;
    int sizeOfArray = sizeof(arr) / sizeof(arr[0]);
    // mpp.insert({1,5});
    // mpp.insert({3,8});
    for(int i=0;i<sizeOfArray;i++){
        // if(mpp.count(arr[i])>0)
        // mpp.insert({arr[i],mpp[arr[i]]++});
        // else
        // mpp.insert({arr[i],1});
        mpp[arr[i]]++;
    }
    for(auto it: mpp){
        cout<<it.first<<" -> "<<it.second<<endl;
    }
    
}