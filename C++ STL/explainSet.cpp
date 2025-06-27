#include<iostream> 
#include<set>
using namespace std;
int main(){
    set<int> st;

    st.insert(1); // {1}
    st.insert(4); // {1,4}
    st.insert(4); // {1,4}
    st.emplace(2);// {1,2,4}
    st.insert(3); // {1,2,3,4}
    st.insert(5); // {1,2,3,4,5}

    auto it = st.find(3);
    cout<< *(it) <<endl;  // 3
    auto it1 = st.find(6);
    cout<< *(it1) <<endl; // 0

    st.erase(4); // {1,2,3,5}

    int cnt = st.count(2); // 1
    int cnt1 = st.count(7); // 0
    cout<<cnt<<endl;
    cout<<cnt1<<endl;
    
    // Noe the element of sets are {1,2,3,5}
    auto it2 = st.find(2);
    auto it3 = st.find(5);

    st.erase(it2,it3); // Now the element will {1,5}

    cout<<"The elements of the set are: ";
    for(auto it:st){
        cout<< it <<" ";
    }

    cout<<endl;
    return 0;
}
