#include<iostream>
using namespace std;
void makeEntireRowZero(vector<vector<int>>& arr, int row){
    for(int j=0;j<arr[0].size();j++){
        if(arr[row][j]!=0){
            arr[row][j] = -1;
        }
    }
}
void makeEntireColumnZero(vector<vector<int>>& arr, int col){
    for(int i=0;i<arr.size();i++){
        if(arr[i][col]!=0){
            arr[i][col] = -1;
        }
    }
}
int main(){
    vector<vector<int>> arr = {{1,1,1},{1,0,1},{1,1,1}};
    int m = arr.size();
    int n = arr[0].size();
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==0){
                makeEntireRowZero(arr,i);
                makeEntireColumnZero(arr,j);
            }
        }
    }
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==-1){
                arr[i][j] = 0;
            }
        }
    }
    cout<<"The resultant matrix is given as: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
