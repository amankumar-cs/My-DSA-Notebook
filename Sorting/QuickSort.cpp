#include<iostream>
using namespace std;

int partition(int arr[],int start,int end){
    int piviot = arr[start];
    int i = start+1;
    int j = end;
    while(i<=j){
        while(j>=start+1 && arr[j]>piviot){
            j--;
        }
        while(i<=end && arr[i]<=piviot){
            i++;
        }
        if(i>j){
            break;
        }
        swap(arr[i],arr[j]);
    }
    swap(arr[start],arr[j]);
    return j;
}
void quickSort(int arr[],int start,int end){
    if(start>=end){
        return;
    }
    int j = partition(arr,start,end);
    quickSort(arr,start,j-1);
    quickSort(arr,j+1,end);
    
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
    // QuickSort Code
    quickSort(arr,0,n-1);
    cout<<endl<<"The contents of the array after sorting: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}