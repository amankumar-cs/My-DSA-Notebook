#include<iostream>
using namespace std;
int main(){
    vector<int> arr = {1,1,2,2,5,3,3,4,4};
    int xor1 = 0;
    for(int i=0;i<arr.size();i++){
        xor1 = xor1 ^ arr[i];
    }
    cout<<"The single element in the given array is: "<<xor1<<endl;
    return 0;
}