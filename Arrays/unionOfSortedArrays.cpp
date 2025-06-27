#include<iostream>
using namespace std;
int main(){
    vector<int> arr1 = {1,1,2,3,4,5,5,5,5,6,6,7,7,8,8,9};
    vector<int> arr2 = {2,3,4,4,5,6,6,10,12,12,15,16};
    int n = arr1.size();
    int m = arr2.size();
    int n1,m1,p=1,q=1;

    for(int t=1;t<n;t++){
        if(arr1[t]!=arr1[t-1]){
            arr1[p] = arr1[t];
            p++;
        }
    }
    for(int t=1;t<m;t++){
        if(arr2[t]!=arr2[t-1]){
            arr2[q] = arr2[t];
            q++;
        }
    }
    
    vector<int> arr(p+q);
    int i=0,j=0,k=0;
    while(i<p && j<q){
        if(arr1[i]<arr2[j]){
            arr[k] = arr1[i];
            i++;
            k++;
        }
        else if(arr1[i]>arr2[j]){
            arr[k] = arr2[j];
            k++;
            j++;
        }
        else{
            arr[k] = arr1[i];
            k++;
            i++;
            j++;
        }
    }
    while(i<p){
        arr[k] = arr1[i];
        i++;k++;
    }
    while(j<q){
        arr[k] = arr2[j];
        j++;k++;
    }

    cout<<"The union of two sorted arrays is given as: ";
    for(int i=0;i<k;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}