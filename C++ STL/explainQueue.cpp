#include<iostream>
using namespace std;

int main(){
    queue<int> q;
    q.push(1); // {1}
    q.push(2); // {1,2}
    q.push(4); // {1,2,4}
    q.emplace(7); // {1,2,4,7}

    q.back() += 6; // {1,2,4,13}
    cout<<q.back()<<endl; // 13

    cout<<q.front()<<endl; // 1
    
    q.pop(); // {2,4,13}
    q.pop(); // {4,13}

    cout<<q.front()<<endl; // 4

    queue<int> temp = q;
    cout<<"The contents of the queue are: ";
    while(!temp.empty()){
        cout<< temp.front() <<" ";
        temp.pop();
    }
    cout<<endl<<endl;

    return 0;
}