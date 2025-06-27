#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n-1;j++){
            if(j<i){
                cout<<(k--)<<" ";
            }
            else if(j>=i && j<=2*n-i){
                cout<<k<<" ";
            }
            else{
                cout<<(++k)<<" ";
            }
        }
        cout<<endl;
    }
    int temp = 3;
    for(int i=0;i<n-1;i++){
        for(int j=1;j<=n-i-2;j++){
            cout<<(k--)<<" ";
        }
        for(int j=1;j<=temp;j++){
            cout<<k<<" ";
        }
        for(int j=n-i-1+temp;j<=2*n-1;j++){
            cout<<(++k)<<" ";
        }
        temp+=2;
        cout<<endl;
    }
    return 0;
}