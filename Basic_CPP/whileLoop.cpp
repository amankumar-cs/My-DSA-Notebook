#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    int sum=0;
    // while(i<=n){
    //     //cout<<i<<" ";
    //     sum += i;
    //     i = i+1;
    // }
    // cout<<"Sum of first "<<n<<" natural number is: "<<sum<<endl;

    // Sum of all even numbers from 1 to N
    while(i<=n){
        if(i%2==0){
            sum = sum+i;
        }
        i = i+1;
    }
    cout<<"Sum of all even numbers from 1 to "<<n<<" is: "<<sum<<endl;
}