#include<iostream>
using namespace std;

int main(){
    stack<int> st;
    st.push(1); // {1}
    st.push(2); // {2,1}
    st.push(3); // {3,2,1}
    st.push(3); // {3,3,2,1}
    st.push(4); // {4,3,3,2,1}

    st.emplace(5); // {5,4,3,3,2,1}
    cout<<"The topmost element of the stack is: "<<st.top()<<endl;

    st.pop(); // Now that stack looks like {4,3,3,2,1}
    st.pop(); // Now the stack looks like {3,3,2,1}

    cout<<"Now the size of the stack is: "<<st.size()<<endl; // 4
    cout<<st.empty()<<endl;

    stack<int> st1,st2;
    st1.swap(st);
    cout<< st.empty()<<endl;

    cout<<"The contents of the stack are: ";
    while(!st.empty()){
        cout<< st.top() <<" ";
        st.pop();
    }
    cout<<endl;

    cout<<"The contents of the newly stack are: ";
    while(!st1.empty()){
        cout<< st1.top() <<" ";
        st1.pop();
    }
    cout<<endl<<endl;

    return 0;
}