#include <iostream>
#include<vector>
using namespace std;
 // I could have used HASHING but it would have taken O(n) space complexity whereas this code has O(1) space complexity
void MoresVotingAlgo(vector<int>&arr){
    int count=0; int n=arr.size();int el;
    for(int i=0;i<n;i++){
        if(count==0){
            el=arr[i];
            count++;
        }
        else if(el==arr[i]) count++;
        else count--;
    }
    int a=0;
    for(int i=0;i<=n;i++){
        if(arr[i]==el)a++;
    }
    if(a>(n/2))cout<<"no. with quantity more than its half array is = "<<el<<endl;
    else cout<<"no such no. present in the array\n";
}
int main(){
    vector<int>n={1,2,1,2,1};
    MoresVotingAlgo(n);
    
}
