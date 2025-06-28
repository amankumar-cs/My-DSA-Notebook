#include<iostream>
using namespace std;
long long sumOfDivisors(long long n) {
    // Code here
    long long sum = 0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i%j==0){
                sum += j;
            }
        }
    }
    return sum;
}

int main(){
    long long n;
    cout<<"Enter the number: ";
    cin>>n;
    long long sum = sumOfDivisors(n);
    cout<<"The required sum of all the divisors is: "<<sum<<endl;
    return 0;
}