#include <iostream>
using namespace std;
int main(){
    int arr[10]={10,0,20,2,23,1,0,2,1,0};
    int count=0;
    int arraysize = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<arraysize;i++){
        if(arr[i]<3){
            count++;
        }
    }
    int dutch[count]={};
    int flag=0;
    for(int i=0;i<arraysize;i++){
        if(arr[i]<3){
            dutch[flag]=arr[i];
            flag++;
        }
    }
    int right = count-1;
    int left = 0;
    int mid = 0;
    while(mid<=right){
         if (dutch[mid] == 0) {
            swap(dutch[left], dutch[mid]);
            left++;
            mid++;
        } else if (dutch[mid] == 2) {
            swap(dutch[mid], dutch[right]);
            right--;
        } else { 
            mid++;
        }
    }
    for(int i=0;i<count;i++){
        cout<<dutch[i]<<" ";
    }
}
