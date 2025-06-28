#include<iostream>
using namespace std;
bool isArmstrong(int n) {
    int res = 0;
    int dup = n;
    while(n!=0){
        int pop = n%10;
        res = res + (pop*pop*pop);
        n /= 10;
    }
    if(dup==res){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if(isArmstrong(n)){
        cout<<"The given number is Armstrong Number"<<endl;
    }
    else{
        cout<<"The given number is not a Armstrong Number"<<endl; 
    }
    return 0;
}