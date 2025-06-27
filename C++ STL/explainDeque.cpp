#include<iostream>
using namespace std;

int main(){
    deque<int>dq;
    dq.push_back(1); //{1}
    dq.emplace_back(2); //{1,2}

    dq.push_front(3); // {3,1,2}
    dq.emplace_front(4); // {4,3,1,2}

    cout<<"The last element is given as: "<<dq.back()<<endl; // 2
    cout<<"The first element is given as: "<<dq.front()<<endl; // 4

    dq.pop_back(); // {4,3,1}
    dq.pop_front(); // {3,1}
    
    for(auto it:dq){
        cout<< it <<" ";
    }
    cout<<endl<<endl;

    // rest functions same as vector
    // begin, end, rbegin, rend, insert, clear, size, swap

    return 0;
}