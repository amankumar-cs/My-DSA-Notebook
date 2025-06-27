#include<iostream>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    cout<<endl;
    i=1;
    int count=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<count<<" ";
            j++;
            count++;
        }
        i++;
        cout<<endl;
    }
}