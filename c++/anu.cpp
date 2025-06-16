#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

 void sortColors(vector<int>& nums) {
        int i=0;
        int l=0;
        int j=nums.size() -1;
        while(i<=j){
            if(nums[i]==0){
                int temp = nums[i];
                nums[i]=nums[l];
                nums[l]=temp;
                i++;
                l++;
            }
            else if(nums[i]==2){
                int temp = nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
                j--;
            }
            else{
                i++;
            }
        }
        cout<<"i: "<<i<<endl;
        cout<<"l: "<<l<<endl;
        cout<<"j: "<<j<<endl;
        for(int i=0;i<nums.size();i++){
            cout<<nums[i]<<" ";
        }
    }

int main() {
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    sortColors(nums);
}
