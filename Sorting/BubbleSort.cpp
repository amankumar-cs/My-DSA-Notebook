#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    cout<<"Enter the contents of the array are: "<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The original contents of the array are: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //Sorting Code
    for(int i=0;i<n-1;i++){
        int didSwap = 0;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>=arr[j+1]){
                swap(arr[j],arr[j+1]);
                didSwap = 1;
            }
        }
        if(didSwap==0){ // This is to check whether it swaps atleast once in every iteration
            break; 
        }
        cout<<"runs"<<endl;
    }
    cout<<endl<<"The contents of the array after sorting: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}