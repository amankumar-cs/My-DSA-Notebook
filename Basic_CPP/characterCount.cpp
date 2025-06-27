#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    int arr[256] = {0};
    for(char ch: s){
        arr[ch]++;
    }
    for(int i=0;i<256;i++){
        if(arr[i]!=0){
            cout<<char(i)<<" appears: "<<arr[i]<<" times"<<endl;
        }
    }
}