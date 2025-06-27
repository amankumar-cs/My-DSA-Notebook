#include<iostream>
using namespace std;

int main(){
    priority_queue<int> pq;
    pq.push(5);  // {5}
    pq.push(11); // {11,5}
    pq.push(10); // {11,10,5}
    pq.push(15); // {15,11,10,5}
    pq.push(8);  // {15,11,10,8,5}
    pq.push(20); // {20,15,11,10,8,5}
    pq.push(19); // {20,19,15,11,10,8,5}

    cout<<endl<<"The topmost element of the queue is: "<<pq.top()<<endl;

    pq.pop(); // {19,15,11,10,8,5}
    pq.pop(); // {15,11,10,8,5}
    pq.pop(); // {11,10,8,5}

    priority_queue<int,vector<int>,greater<int>> min_pq;
    min_pq.push(10);
    min_pq.push(5);
    min_pq.push(20);
    min_pq.push(25);
    min_pq.push(8);

    cout<<endl;
    cout<<"The elements of the priority queue are: ";
    priority_queue<int> new_pq = pq;
    while(!new_pq.empty()){
        cout<<new_pq.top()<<" ";
        new_pq.pop();
    }
    cout<<endl;

    cout<<"The elements of the minimum priority queue are: ";
    priority_queue<int,vector<int>,greater<int>> new_min_pq = min_pq;
    while(!new_min_pq.empty()){
        cout<<new_min_pq.top()<<" ";
        new_min_pq.pop();
    }
    cout<<endl<<endl;
    return 0;
}