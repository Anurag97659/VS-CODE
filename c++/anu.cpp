#include <iostream>
#include <vector>
using namespace std;
 class Solution{
    public:
    int getFloorAndCeil(vector<int> &a, int n, int x) {
	 int size = a.size();
        int low=0; int high =size-1;
        int ceil = -1; int floor =-1;
        while(low<=high){
            int mid =(low+high)/2;
			if(a[mid]==x){
				floor = a[mid];
				ceil = a[mid];
                break;
			}
            else if(a[mid]>x){
                ceil = a[mid];
                high = mid-1;
            }
            else{
				floor = a[mid];
                low =mid+1;
            }
        
        }
		cout<<floor<<" "<<ceil<<endl;
        return  ceil, floor;
}
 } ;
 int main(){
        Solution obj;
        vector<int> a = {1, 2, 8, 10, 10, 12, 19};
        int n = 7;
        int x = 10;
        obj.getFloorAndCeil(a, n, x);
        return 0;
 }