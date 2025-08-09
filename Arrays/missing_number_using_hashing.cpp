#include<iostream>
using namespace std;
int main(){
    int N = 5;
    vector<int> arr = {1,2,4,5};
    vector<int> hash(N+1,0);
    for(int i=0;i<N;i++){
        hash[arr[i]] = 1;
    }
    for(int i=1;i<=N;i++){
        if(hash[i] == 0){
            cout<<"Missing number is: "<<i<<endl;
            break;
        }
    }
    cout<<endl;
    return 0;
}