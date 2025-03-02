#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

    void seacrch(vector<int>nums , int target){
        vector<int> arry={-1,-1};
            int l=0,r=nums.size()-1;
            int result;
            while(l<=r){
                int m=(l+(r-l))/2;
                if(nums[m]==target){
                    arry[0]=m;
                    if(nums[m+1]==target){
                        arry[1]=m+1;
                    }
                    else if(nums[m-1]==target){
                        arry[1]=m-1;
                    }
                }
                else if(nums[m]<target){l=m+1;}
                else{r=m-1;}


            }
            cout<<endl<<arry[0]<<" "<<arry[1];
            
        }
    
int main(){
    vector<int> nums={3,3,7,7,10,11,11};
    seacrch(nums,11);
    
}
