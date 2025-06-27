#include<iostream>
using namespace std;
int factNumbers(int n){
    if(n==0){
        return 1;
    }
    return n * factNumbers(n-1);
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"The factorial of the given number is: "<<factNumbers(n)<<endl;
    return 0;
}


