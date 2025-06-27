#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int k=i;
        for(int j=1;j<=2*n;j++){
            if(j<=i){
                cout<<j;
            }
            else if(j>=2*n-(i-1)){
                cout<<k;
                k--;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}