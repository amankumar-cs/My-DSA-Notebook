#include<iostream>
using namespace std;


void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    // 1-D Array
    // int arr[5];
    // cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    // cout<<arr[3];
    
    // String Implementation

    // string s = "Striver";
    // s[s.size()-1] = 'z';
    // cout<<s;
    
    // Function Implementaation
    // for(int i=1;i<=10;i++){
    //     cout<<"Striver\n";
    // }
    
    // string name1;
    // string name2;
    // cin>>name1>>name2;
    // printName(name1);
    // printName(name2);

    // int num1,num2;
    // cin>>num1>>num2;
    // cout<<max(num1,num2)<<endl;
    // cout<<min(num1,num2);

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    printArray(arr,n);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }


    return 0;
}

