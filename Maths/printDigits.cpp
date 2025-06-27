#include<iostream>
using namespace std;
int main(){
    int num = 7789;
    cout<<"All the digits of the given number are: ";
    while(num>0){
        cout<<num % 10<<", ";
        num /= 10;
    }
    return 0;
}