#include<iostream>
using namespace std;
int main(){
    vector<int> arr1 = {1,2,2,3,3,4,5,6};
    vector<int> arr2 = {2,3,3,5,6,6,7};
    vector<int> arr;
    int i=0,j=0,k=0;
    while(i<arr1.size() && j<arr2.size()){
        if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr1[i]==arr2[j]){
            if(k==0){
                arr.push_back(arr1[i]);
                i++;
                j++;
                k++;
            }
            else if(k>0 && arr[k-1]!=arr1[i]){
                arr.push_back(arr1[i]);
                i++;j++;k++;
            }
            else if(k>0 && arr[k-1]==arr1[i]){
                i++;
                j++;
            }
        }
        else{
            j++;
        }
    }
    //cout<<arr.size()<<endl;
    cout<<"The intersection of the given arrays: ";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}