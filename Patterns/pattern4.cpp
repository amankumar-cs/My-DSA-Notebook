#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    int j=0;
    while(i<=n){
        do{
            j++;
          cout<<j<<" ";
        }while(j%n!=0);
        cout<<endl;
        i++;
    }
}