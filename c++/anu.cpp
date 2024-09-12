#include <iostream>
using namespace std;
int main(){
    int arr[10]={1,1,1,2,2,3,3,3,4,4};
    int hash[4]={0};
    for(int i=0;i<10;i++){
        hash[arr[i]]++;
    }
    // for(int i=0;i<7;i++){
    //     cout<<i<<" "<<hash[i]<<endl;
    // }
    for(int i=0;i<4;i++){
        if((hash[i]%2) != 0){
            cout<<i<<" ";
        }
    }    
}