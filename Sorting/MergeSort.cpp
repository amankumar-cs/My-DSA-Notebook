#include<iostream>
using namespace std;
void mergeSort(int arr[],int low,int high);
void merge(int arr[],int low,int mid,int high);

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
    // MergeSort Code
    mergeSort(arr,0,n-1);
    cout<<endl<<"The contents of the array after sorting: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
void mergeSort(int arr[],int low,int high){
    if(low>=high){
            return;
    }
    int mid = low + (high-low)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
}
void merge(int arr[],int low,int mid,int high){
    int newArray[high-low+1];
    int i = low;
    int j = mid+1;
    int k=0;
    while(i<=mid && j<=high){
        if(arr[i]<=arr[j]){
            newArray[k] = arr[i];
            i++;
            k++;
        }
        else{
            newArray[k] = arr[j];
            j++;
            k++;
        }
    }
    if(i>mid){
        while(j<=high){
            newArray[k++] = arr[j++];
        }
    }
    if(j>high){
        while(i<=mid){
            newArray[k++] = arr[i++];
        }
    }
    int m = 0;
    for(int n=low;n<=high;n++){
        arr[n] = newArray[m];
        m++;
    }
}