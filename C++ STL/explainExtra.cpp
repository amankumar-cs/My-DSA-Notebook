#include<iostream>
using namespace std;

bool comp(pair<int,int> p1, pair<int,int> p2){ // This is buit in comparator
    if(p1.second<p2.second){
        return true;
    }
    else if(p1.second == p2.second){
        if(p1.first>p2.first){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        return false;
    }
}

int main(){
    int a[5] = {3,5,1,2,6};
    //sort(a,a+5); // It will sort the entire array in ascending order
    //sort(v.begin(), v.end()) // It will sort the entire vector in ascending order
    sort(a+1,a+3);
    sort(a,a+5,greater<int>()); // It will sort the entire array in descending order

    pair<int,int> arr[] = {{1,2},{2,1},{4,1}};
    // sort it according to second element
    // if second element is same then,
    // sort it according to first element but in descending order

    sort(arr,arr+3,comp); // {{4,1},{2,1},{1,2}}

    // for(int i=0;i<5;i++){
    //     cout<<a[i]<<" ";
    // }

    int num = 7;
    int cnt = __builtin_popcount(num);
    cout<<"The total number of 1's in the binary form of 7 is: "<<cnt<<endl;

    long long num1 = 165786578687;
    int cnt1 = __builtin_popcountll(num1);
    cout<<"The total number of 1's in the binary form of num1 is: "<<cnt1<<endl;

    string s = "123";
    sort(s.begin(),s.end());
    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));

    int maxi = *max_element(a,a+5);
    int mini = *min_element(a,a+5);

    cout<<"The maximum element of the array a is: "<<maxi<<endl;
    cout<<"The minimum element of the array a is: "<<mini<<endl;

    for(int i=0;i<3;i++){
        cout<<arr[i].first<<" "<<arr[i].second<<endl;
    }
    cout<<endl<<endl;
    
    return 0;
}
