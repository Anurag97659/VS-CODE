#include <iostream>
#include<bits/stdc++.h>
#include <vector>
using namespace std;

/*
-->>Kadane's Algorithm efficiently finds the maximum sum of a contiguous subarray in O(n) time.
-->>Your code maintains a running sum (sum) and updates the maximum found so far (maxi).
-->>If the running sum becomes negative, it resets to zero, as any subarray starting before this 
    point would not contribute to a larger sum.
*/

long long kadaneAlgo(vector<int>&arr){
    long long mx=LLONG_MIN;
    long long sum=0;
    int s=0,e=0,t=0; //s=start, e=end, t=tempstart for subarray tracking
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
        if(sum>=mx){
            mx=sum;
            s=t;
            e=i;
        }
        if(sum<0){
            sum=0;
            t=i+1;
        }
        if(mx<0){mx=0;s=-1;e=-1;} 
    }

    //OUTPUT
    cout<<"Array: ";
    for(auto it: arr)cout<<it<<" ";cout<<endl;
    cout<<"Subarray with maximum sum: "<<mx<<endl;
    cout<<"subarray: ";
    if(s!=-1 && e!=-1){
        for(int i=s;i<=e;i++){
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl<<endl;

    return mx;
}

int main() {
    vector<int>arr = {1,2,-4,-5,5,4}; 
    vector<int>arr2 = {3, 4, -2, 1, -1, 2};
    vector<int>arr3 = {-1, -2, -3, -4};
    vector<int>arr4 = {5, 6, 7, 8};
    vector<int>arr5 = {1, -2, 3, 4, -1, 2, 1, -5, 4};
    vector<int>arr6 = {-2, -3, 4, -1, -2, 1, 5, -3};
    vector<int>arr7 = {5,4,-5};
    kadaneAlgo(arr);
    kadaneAlgo(arr2);
    kadaneAlgo(arr3);
    kadaneAlgo(arr4);
    kadaneAlgo(arr5);
    kadaneAlgo(arr6);
    kadaneAlgo(arr7);
    return 0;
    
}
