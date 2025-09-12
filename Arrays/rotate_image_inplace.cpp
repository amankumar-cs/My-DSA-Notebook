#include<iostream>
using namespace std;
int main(){
    vector<vector<int>> matrix = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int n = matrix.size();
    // Find the transpose of above matrix
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    // Reverse the matrix row wise
    for(int i=0;i<n;i++){
        reverse(matrix[i].begin(),matrix[i].end());
    }

    cout<<"After rotating the matrix by 90 degrees in clockwise direction: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}