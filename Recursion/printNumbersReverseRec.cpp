#include<iostream>
using namespace std;
void printNumbersRev(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    printNumbersRev(n-1);
}
int main(){
    int n;
    cout<<"Enter the number from which you want to print in reverse order: ";
    cin>>n;
    printNumbersRev(n);
    return 0;
}