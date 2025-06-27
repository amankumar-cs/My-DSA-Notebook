#include<iostream>
#include<set>
using namespace std;
int main(){
    vector<int> arr1 = {1,1,2,3,4,5,5,5,5,6,6,7,7,8,8,9};
    vector<int> arr2 = {2,3,4,4,5,6,6,10,12,12,15,16};
    set<int> st;
    for(int i=0;i<arr1.size();i++){ 
        st.insert(arr1[i]);
    }
    for(int i=0;i<arr2.size();i++){
        st.insert(arr2[i]);
    }
    vector<int> arr;
    for(auto it: st){
        arr.push_back(it);
        //cout<<it<<" ";
    }
    cout<<"The union of the array is given as: ";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}