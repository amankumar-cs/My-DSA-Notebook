#include<iostream>
using namespace std;
int main(){
    vector<vector<int>> matrix = {{1,1,1},{1,0,1},{1,1,1}};
    int m = matrix.size();
    int n = matrix[0].size();
    vector<int> rows(m,0);
    vector<int> cols(n,0);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]==0){
                rows[i] = 1;
                cols[j] = 1;
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(rows[i] || cols[j]){
                matrix[i][j] = 0;
            }
        }
    }
    cout<<"The resultant matrix is given as: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}