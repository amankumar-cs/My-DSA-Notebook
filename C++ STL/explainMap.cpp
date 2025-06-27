#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,int> mpp;
    map<int,pair<int,int>> mpp1;
    map<pair<int,int>,int> mpp2;

    mpp[1] = 2;
    mpp.emplace(3,1);
    mpp.insert({2,4});
    
    mpp1[4] = {5,6};
    mpp1[5] = {6,3};
    mpp1[2] = {7,8};

    mpp2[{2,3}] = 10;
    mpp2[{1,4}] = 15;
    mpp2[{3,5}] = 12;
    
    cout<<mpp[1]<<endl;
    cout<<mpp[3]<<endl;
    cout<<mpp[2]<<endl;
    cout<<mpp1[2].first<<" "<<mpp1[2].second<<endl;
    cout<<mpp2[{2,3}]<<endl;

    // erase, size, swap, empty, find is same as above
    for(auto it : mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<endl;

    for(auto it : mpp1){
        cout<<it.first<<" : {"<<it.second.first<<" "<<it.second.second<<"}"<<endl;
    }
    cout<<endl;

    for(auto it : mpp2){
        cout<<"{"<<it.first.first<<" "<<it.first.second<<"} : "<<it.second<<endl;
    }
    cout<<endl;

    return 0;
}