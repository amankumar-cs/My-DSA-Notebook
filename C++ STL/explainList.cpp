#include<iostream>
#include<list>

using namespace std;

int main(){
    list<int> ls;
    ls.push_back(2); // {2}
    ls.emplace_back(4); // {2,4}

    ls.push_front(6); // {6,2,4}
    ls.emplace_front(8); // {8,6,2,4}

    // It behaves like a doubly linked list whereas the vector is behaves like a singly linked list
    // Rest all other functions in this is same as vector like
    // begin, end, rbegin, rend, clear insert, size, swap

    list<int>:: iterator it = ls.begin();
    it++;
    advance(it,1); // this means it = it+1
    cout<< *(it) <<endl; 

    it = ls.end();
    it--;
    advance(it,-2);
    cout<< *(it) <<endl; 

    // Display

    for(list<int>::iterator itr=ls.begin(); itr!=ls.end(); itr++){
        cout<< *(itr) <<" ";
    }
    cout<<endl;

    for(auto itr=ls.begin();itr!=ls.end();itr++){
        cout<< *(itr) <<" ";
    }
    cout<<endl;

    ls.erase(ls.begin()); // {6,2,4}
    auto start = next(ls.begin(),1);
    auto end = next(ls.begin(),2);
    ls.erase(start,end); // {6,4}

    // Insert Function

    ls.insert(ls.begin(),100); // {100,6,4}
    ls.insert(ls.begin(),2,300); // {300,300,100,6,4}

    start = next(ls.begin(),3);
    ls.insert(start,3,11); // {300,300,100,11,11,11,6,4}

    list<int> cpy(2,50); // {50,50}

    ls.insert(ls.begin(),cpy.begin(),cpy.end()); // {50,50,300,300,100,11,11,11,6,4}

    cout<<"The current size of the list is: "<< ls.size() <<endl;

    ls.pop_back(); // {50,50,300,300,100,11,11,11,6}
    ls.pop_front(); // {50,300,100,11,11,11,6}

    list<int> ls1 = {10,20,30,40,50};
    ls.swap(ls1);
    ls.swap(ls1);

    ls1.clear(); // It erases the entire list

    for(auto it:ls){
        cout<<it<<" ";
    }
    cout<<endl;

    cout<<ls1.empty()<<endl;

    for(auto it:ls1){
        cout<<it<<" ";
    }
    cout<<endl;

    return 0;
}