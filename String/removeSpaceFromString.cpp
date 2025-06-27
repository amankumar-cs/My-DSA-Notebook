#include<iostream>
using namespace std;
int main(){
    string s = "A man, a plan, a canal: Panama";
    string cleanedString = "";
    for(char ch: s){
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
            cleanedString += ch;
        }
    }
    cout<<cleanedString;
    return 0;
}