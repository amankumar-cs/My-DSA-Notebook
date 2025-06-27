#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> st;
    // lower_bound and upper_bound functions does not work
    // rest all functions are same as in set
    // As in set, it does not store elements in any particular order
    // It means randomly it stores the element
    // It has a better complexity than set in most cases except some when collision occurs
    
    st.insert(2);
    st.insert(5);
    st.insert(12);
    st.insert(7);
    st.insert(10);
    st.insert(12);

    cout<<endl<<"The elements of the set are: ";
    for(auto it:st){
        cout<< it <<" ";
    }
    cout<<endl<<endl;
    return 0;
}