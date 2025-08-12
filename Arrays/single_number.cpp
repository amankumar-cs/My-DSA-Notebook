#include<iostream>
using namespace std;
int main(){
    vector<int> arr = {1,1,2,2,5,3,3,4,4};
    int num;
    for(int i=0;i<arr.size();i++){
        num = arr[i];
        int count = 0;
        for(int j=0;j<arr.size();j++){
            if(arr[j]==num){
                count++;
            }
        }
        if(count==1){
            break;
        }
    }
    cout<<"The single element in the given array is: "<<num<<endl;
    return 0;
}