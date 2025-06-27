#include<iostream>
using namespace std;
int sumNnumbers(int n){
    if(n==0){
        return 0;
    }
    return n + sumNnumbers(n-1);
}
int main(){
    int n;
    cout<<"Enter the number N: ";
    cin>>n;
    int sum = sumNnumbers(n);
    cout<<"The sum of first N numbers is: "<<sum<<endl;
    return 0;
}