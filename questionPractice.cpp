#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,int> mp;
    mp.insert({1,5});
    mp.insert({2,4});
    mp.insert({3,7});

    //auto it = mp.find(2);
    if (mp.find(2) != mp.end()) {
        cout << "Key: " <<mp.find(2)->first << ", Value: " << mp.find(2)->second << endl;
    } else {
        cout << "Key not found" << endl;
    }
    
   
    return 0;
}
