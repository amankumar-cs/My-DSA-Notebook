#include<iostream>
using namespace std;

int main(){
    pair<int,int> p1 = {3,5};
    cout<<p1.second<<" "<<p1.first<<endl;;

    pair<int,pair<int,int>> p2 = {6,{7,8}};
    cout<<p2.second.first<<" "<<p2.first<<endl;

    pair<pair<int,int>,pair<int,pair<int,string>>> p3 = {{2,8},{3,{5,"apple"}}};
    cout<<p3.second.second.second<<": "<<p3.second.second.first<<", "<<p3.first.second<<endl;

    int arr[] = {3,5,7};
    cout<<arr[2]<<endl;

    pair<int,int> arr1[] = {{2,6},{8,9},{8,2},{10,67},{45,55}};
    cout<<arr1[2].first<<" "<<arr1[4].second<<endl;
    return 0;
}