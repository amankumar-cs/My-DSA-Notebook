#include<iostream>
using namespace std;
int main(){
    vector<vector<int>> matrix = {{1,1,1},{1,0,1},{1,1,1}};
    int m = matrix.size();
    int n = matrix[0].size();
    int row0 = 1;
    int col0 = 1;
    for(int i=0;i<m;i++){
        if(matrix[i][0]==0){
            row0 = 0;
        }
    }
    for(int j=0;j<n;j++){
        if(matrix[0][j]==0){
            col0 = 0;
        }
    }

    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            if(matrix[i][j]==0){
                matrix[0][j]=0;
                matrix[i][0]=0;
            }
        }
    }
    for(int i=1;i<m;i++){
        if(matrix[i][0]==0){
            for(int j=1;j<n;j++){
                matrix[i][j]=0;
            }
        }
    }
    for(int j=1;j<n;j++){
        if(matrix[0][j]==0){
            for(int i=1;i<m;i++){
                matrix[i][j]=0;
            }
        }
    }
    if(row0==0){
        for(int i=0;i<m;i++){
            matrix[i][0]=0;
        }
    }
    if(col0==0){
        for(int j=0;j<n;j++){
            matrix[0][j]=0;
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