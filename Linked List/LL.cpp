#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
Node* convertArrToLL(vector<int>& arr){
    Node* head = new Node(arr[0]);
    Node* curr = head;
    int i=1;
    while(i<arr.size()){
        Node* temp = new Node(arr[i]);
        curr->next = temp;
        curr = temp;
        i++;
    }
    return head;
}
int lengthOfLL(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp!=nullptr){
        cout<<temp->data<<" -> ";
        temp = temp->next;
        count++;
    }
    cout<<endl;
    return count;
}
int checkIfPresent(Node* head, int val){
    Node* temp = head;
    while(temp){
        if(temp->data==val){
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}

int main(){
    vector<int> arr = {2,5,8,7};
    //Node* y = new Node(arr[0],nullptr);
    //Node* y = new Node(arr[2]);
    Node* head = convertArrToLL(arr);
    int len = lengthOfLL(head);
    cout<<"The length of the given Linked List is: "<<len<<endl;
    cout<<checkIfPresent(head,9)<<endl;
    return 0;
}