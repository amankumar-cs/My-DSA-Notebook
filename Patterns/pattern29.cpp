#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n;j++){
            if((j>=1 && j<=n-(i-1)) || (j>=n+i && j<=2*n)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n;j++){
            if((j<=i) || (j>=2*n-(i-1) && j<=2*n)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}