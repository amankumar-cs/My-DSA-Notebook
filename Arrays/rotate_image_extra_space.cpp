#include<iostream>
using namespace std;
int main(){
    vector<vector<int>> matrix = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int n = matrix.size();
    vector<vector<int>> ans(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ans[i][j] = matrix[n-j-1][i];
        }
    }
    cout<<"After rotating the matrix by 90 degrees in clockwise direction: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}