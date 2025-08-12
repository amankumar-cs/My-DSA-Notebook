#include<iostream>
using namespace std;
int main(){
    vector<int> arr = {1,1,0,1,1,1,0,1,1};
    int maxi = 0;
    int count = 0;
    for(int i=0;i<arr.size();i++){
        if(arr[i] == 1){
            count++;
            maxi = max(count,maxi);
        }
        else{
            count = 0;
        }
    }
    cout<<endl<<"The maximum consecutive ones is: "<<maxi<<endl<<endl;
    return 0;
}