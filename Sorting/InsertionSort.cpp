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
    // Sorting Code
    for(int i=1;i<n;i++){
        int element = arr[i];
        int j=i-1;

        while(j>=0){
            if(arr[j]<=element){
                break;
            }
            j--;
        }
        j++;
        for(int k=i;k>j;k--){
            arr[k] = arr[k-1];
        }
        arr[j] = element;
    }
    cout<<endl<<"The contents of the array after sorting: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}