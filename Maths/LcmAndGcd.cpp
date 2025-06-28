#include<iostream>
using namespace std;
vector<int> lcmAndGcd(int a, int b) {
        // code here
        int gcd,lcm;
        int n=a,m=b;
        while(a!=0 && b!=0){
            if(a<b){
                b = b % a;
            }
            else if(a>b){
                a = a % b;
            }
        }
        if(a==0){
            gcd = b;
        }
        if(b==0){
            gcd = a;
        }
        lcm = gcd * (n/gcd) * (m/gcd);
        vector<int> arr;
        arr.push_back(lcm);
        arr.push_back(gcd);
        return arr;
}

int main(){
    int a,b;
    cout<<"Enter the two numbers: ";
    cin>>a;
    cin>>b;
    vector<int> arr = lcmAndGcd(a,b);
    cout<<"The LCM of given two number is: "<<arr[0]<<endl;
    cout<<"The GCD of given two number is: "<<arr[1]<<endl;
    return 0;
}