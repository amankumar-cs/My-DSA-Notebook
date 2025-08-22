#include<iostream>
using namespace std;
int main(){
    vector<int> prices = {7,1,5,3,6,4};
    int n = prices.size();
    int profit = 0;
    int curr = prices[0];
    for(int i=1;i<n;i++){
        if(prices[i]>curr){
            if(prices[i]-curr>profit){
                profit = prices[i]-curr;
            }
        }
        else{
            curr = prices[i];
        }
    }
    cout<<"The maximum profit we can make from this is: "<<profit<<endl;
    return 0;
}