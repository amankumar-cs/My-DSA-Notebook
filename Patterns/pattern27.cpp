#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int k=0;
        for(int j=1;j<=2*n-1;j++){
            if(j>=n-(i-1) && j<=n){
                k++;
                cout<<char('A'+k-1);
            }
            else if(j>n && j<=n+(i-1)){
                k--;
                cout<<char('A'+k-1);
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}