#include<iostream>
#include<set>
using namespace std;
int main(){
    multiset<int> ms;
    // Everything is same as set
    // Only stores duplicate elements also
    ms.insert(1); // {1}
    ms.insert(1); // {1,1}
    ms.insert(1); // {1,1,1}
    ms.insert(4); // {1,1,1,4}
    ms.insert(2); // {1,1,1,2,4}
    ms.insert(7); // {1,1,1,2,4,7}
    ms.insert(2); // {1,1,1,2,2,4,7}
    int cnt = ms.count(1);
    cout<<cnt<<endl;

    //ms.erase(1); // All 1's will erase
    ms.erase(ms.find(1)); // Only a single 1 is erased

    // rest all functions same as set
    
    cout<<"The elements of the multiset are: ";
    for(auto it:ms){
        cout<< it <<" ";
    }
    return 0;
}