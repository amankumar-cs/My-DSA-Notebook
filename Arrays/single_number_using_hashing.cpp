#include<iostream>
using namespace std;
int main(){
    vector<int> arr = {1,1,2,2,5,3,3,4,4};
    int singleElement;
    int maxElement = arr[0];
    for(int i=1;i<arr.size();i++){
        if(arr[i]>maxElement){
            maxElement = arr[i];
        }
    }
    vector<int> hash(maxElement+1,0);
    for(int i=0;i<arr.size();i++){
        hash[arr[i]]++;
    }
    for(int i=0;i<arr.size();i++){
        if(hash[arr[i]]==1){
            singleElement = arr[i];
            break;
        }
    }
    cout<<"The single element in the above array is: "<<singleElement<<endl;
    return 0;
}