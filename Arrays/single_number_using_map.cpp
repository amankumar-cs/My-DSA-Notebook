#include<iostream>
#include<map>
using namespace std;
int main(){
    map<long long,int> mpp;
    vector<int> arr = {1,1,2,2,5,3,3,4,4};
    int n = arr.size();
    int singleElement;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    for(auto it: mpp){
        if(it.second==1){
            singleElement = it.first;
            break;
        }
    }
    cout<<"The single element in the given array is: "<<singleElement<<endl;
    return 0;
}