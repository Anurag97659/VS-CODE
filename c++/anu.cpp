#include <iostream>
#include <vector>
using namespace std;
class Solution {
  public:
    int largest(vector<int> &arr) {
        int a =-1;
         int size = sizeof(arr) / sizeof(arr[0]);
        for(int i=0;i<size;i++){
            cout <<i<<endl;
            if(arr[i]>=a){
                a=arr[i];
            }
            cout<<a<<endl;
        }
        return a;
    }
};
int main(){
   vector<int> arr({1,2,3,4,56,22,222});
   Solution a;
   a.largest(arr);
}

    