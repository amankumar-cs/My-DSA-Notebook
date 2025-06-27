#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=2;
    int isPrime=1;
    while(i<=n/2){
        if(n%i==0){
            isPrime=0;
            break;
        }
        i = i+1;
    }
    if(isPrime && n>1){
        cout<<n<<" is a Prime Number!!"<<endl;
    }
    else{
        cout<<n<<" is not a Prime Number!!"<<endl;
    }
}