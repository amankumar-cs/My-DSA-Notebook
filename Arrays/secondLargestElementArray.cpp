#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the contents of the array: ";
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max = arr[0];
    int secondMax = INT_MIN;
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            secondMax = max;
            max = arr[i];
        }
        else if(arr[i]<max && arr[i]>secondMax){
            secondMax = arr[i];
        }
    }

    cout<<"The largest element in the array is: "<<max<<endl;
    if(secondMax!=INT_MIN)
    cout<<"The second largest element in the array is: "<<secondMax<<endl;
    else{
        cout<<"The second largest element in this array does not exist!!"<<endl;
    }

    return 0;
}