#include<iostream>
using namespace std;

bool isPalindrome(int x) {
        int rev = 0;
        if(x<0 || (x % 10 == 0 && x!=0)){
            return false;
        }
        int temp = x;
        while(x!=0){
            int pop = x % 10;
            if(rev>INT_MAX/10 || (rev==INT_MAX/10 && pop>7)){
                return 0;
            }
            rev = rev*10 + pop;
            x = x/10;
        }
        if(rev==temp){
            return true;
        }
        else{
            return false;
        }
}

int main(){
    int x;
    cout<<"Enter the number: ";
    cin>>x;
    if(isPalindrome(x)){
        cout<<x<<" is valid Palindrome"<<endl;
    }
    else{
        cout<<x<<" is not a valid Palindrome"<<endl;
    }
    return 0;
}