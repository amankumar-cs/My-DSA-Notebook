#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    int x;
    cin>>x;
    int reverseNum = 0;
    while(x!=0){
        int n = x % 10;
        if (reverseNum > INT_MAX / 10 || (reverseNum == INT_MAX / 10 && n > 7))
            return 0;
            if (reverseNum < INT_MIN / 10 || (reverseNum == INT_MIN / 10 && n < -8))
            return 0;
        reverseNum = (reverseNum * 10) + n;
        x /= 10;
    }
    cout<<"The reverse of the given number is: "<<reverseNum<<endl; 
}