#include<iostream>
using namespace std;

void InsertionSort(int arr[],int size,int n){
    if(n==size){
        return;
    }
    int item = arr[n];
    int i = n-1;
    while(i>=0){
        if(arr[i]<item){
            break;
        }
        i--;
    }
    int j=n-1;
    while(j>i){
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = item;
    return InsertionSort(arr,size,n+1);
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
    // Recursive Insertion Sort Code
    InsertionSort(arr,n,1);
    cout<<endl<<"The contents of the array after sorting: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}