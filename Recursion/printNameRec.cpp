#include<iostream>
using namespace std;
void printName(int n){
    if(n==0){
        return;
    }
    cout<<"Aman!"<<endl;
    n = n - 1;
    printName(n);
}
int main(){
    int n;
    cout<<"Enter the number of times you want to print your name: ";
    cin>>n;
    printName(n);
    return 0;
}
