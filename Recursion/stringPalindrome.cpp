#include<iostream>
using namespace std;

int palindromeChecker(string s,int start,int end){
    if(start>=end){
        return 1;
    }
    if(s[start]!=s[end]){
        return 0; 
    }
    else{
        return palindromeChecker(s,start+1,end-1);
    }

}
int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;
   int x = palindromeChecker(s,0,s.length()-1);
   if(x){
    cout<<s<<" is a valid palindrome"<<endl;
   }
   else{
    cout<<s<<" is not a valid palindrome"<<endl;
   }
    return 0;
}