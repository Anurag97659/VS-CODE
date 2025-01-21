#include <iostream>
using namespace std;
 // I could have used HASHING but it would have taken O(n) space complexity whereas this code has O(1) space complexity
int main(){
    int arr[7]={2,2,1,1,1,2,2};
    int count=0;
    int element;
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        if(count==0){
            element=arr[i];
            count++;
        }
        else if(element==arr[i])count++;
        else count--;
    }
    int c=0;
    for(int i=0;i<size;i++){
        if(arr[i]==element)c++;
    }
    if(c>size/2)cout<<element;
    else cout<<"No majority element ";
}