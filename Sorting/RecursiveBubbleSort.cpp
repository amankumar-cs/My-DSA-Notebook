#include<iostream>
using namespace std;
void BubbleSort(int arr[],int n){
    if(n==1){
        return;
    }
    int didSwap = 0;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
            didSwap = 1;
        }
    }
    if(didSwap==0){
        return;
    }
    return BubbleSort(arr,n-1);
}
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
    // Recursive Bubble Sort Code
    BubbleSort(arr,n);
    cout<<endl<<"The contents of the array after sorting: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}