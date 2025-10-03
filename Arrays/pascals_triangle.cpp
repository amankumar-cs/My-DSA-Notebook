#include<iostream>
using namespace std;
int main(){
    int numRows = 6;
    vector<vector<int>> arr;
    for(int row=1;row<=numRows;row++){
        vector<int> ansRows;
        long long ans = 1;
        ansRows.push_back(1);
        for(int col=1;col<row;col++){
            ans = ans * (row-col);
            ans = ans/col;
            ansRows.push_back(ans);
        }
        arr.push_back(ansRows);
    }
    cout<<"The Pascal's Triangle for the given number of rows is given as: [";
    for(int i=0;i<arr.size();i++){
        cout<<"[";
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j];
            if(j<arr[i].size()-1){
                cout<<", ";
            }
        }
        if(i<arr.size()-1){
            cout<<"], ";    
        }
    }
    cout<<"]]"<<endl;
    return 0;
}