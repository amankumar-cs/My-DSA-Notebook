#include<iostream>
using namespace std;
int main(){
    vector<int> arr = {1,2,4,5};
    int xor1 = 0, xor2 = 0;
    int N = 5;
    for(int i=0;i<N-1;i++){
        xor2 = xor2 ^ arr[i];
        xor1 = xor1 ^ (i+1);
    }
    xor1 = xor1 ^ N;
    cout<<"The missing number is: "<<(xor1 ^ xor2)<<endl;
}