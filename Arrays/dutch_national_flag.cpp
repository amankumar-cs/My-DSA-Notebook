#include<iostream>
using namespace std;
int main(){
    vector<int> arr = {0,1,2,0,1,2,1,2,0,0,0,1};
    int n = arr.size();
    int low = 0;
    int mid = 0;
    int high = n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{ // arr[mid]==2
            swap(arr[mid],arr[high]);
            high--;
        }
    }
    cout<<"After sorting, the content of the array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}