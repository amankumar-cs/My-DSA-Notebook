#include<iostream>
using namespace std;
int main(){
    //cout<< "Hello" <<endl;
    char ct;
    cout<< "Enter the character you want to print: " <<endl;
    cin>>ct;
    int num = (int)ct;
    if(num>=48 && num<=57){
        cout<< "This is numeric character!!" <<endl;
    }
    else if(num>=65 && num<=90){
        cout<< "This is UpperCase Character!!" <<endl;
    }
    else if(num>=97 && num<=122){
        cout<< "This is LowerCase Character!!" <<endl;
    }
    //cout<< (int)ct <<endl;
}