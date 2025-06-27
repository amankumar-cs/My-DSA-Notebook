#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int count = 0;
    int temp = n;
    while(temp>0){
        int rem = temp%10;
        if(rem!=0 && n%rem==0){
            count++;
        }
        temp /= 10;
    }
    cout<<count;
    return 0;
}