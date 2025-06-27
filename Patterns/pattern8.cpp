#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    cout<<endl;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<char('A'+i-1)<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }
    
}

