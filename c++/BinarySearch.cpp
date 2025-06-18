#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

/* 
arr=[1,2,3,4,5] 
size= 5
x=3
lowerbound = 3 =>> arr[2]>=x
upperbound = 4 =>> arr[3]>x
floor      = 3 =>> arr[2]<=x
ceil       = 3 =>> arr[2]>=x
*/

int BinarySearch(vector<int>&arr,int a){
    int l=0; int r=arr.size()-1;
    while(l<=r){
        int mid = (l+r)/2;
        if(arr[mid]==a)return mid;
        else if(arr[mid]>a)r=mid-1;
        else l=mid+1;
    }
    return -1;
}

int LowerBound(vector<int>&arr,int a){
    int l=0; int r=arr.size()-1; int ans=arr.size()-1;
    while(l<=r){
        int mid = (l+r)/2;
        if(arr[mid]>=a){
            ans=mid;
            r=mid-1;
        }
        else l=mid+1;
    }
    int b= arr[ans];
    return b;
}

int UpperBound(vector<int>&arr,int a){
    int l=0; int r=arr.size()-1; int ans=-1;
    while(l<=r){
        int mid = (l+r)/2;
        if(arr[mid]>a){
            ans=mid;
            r=mid-1;
        }
        else l=mid+1;

    }
    int b= arr[ans];
    return b;
}

int insertBinarySearch(vector<int>&arr,int a){
    int l=0; int r=arr.size()-1; int ans=arr.size()-1;
    while(l<=r){
        int mid = (l+r)/2;
        if(arr[mid]>=a){
            ans=mid;
            r=mid-1;
        }
        else l=mid+1;
    }

    arr.insert(arr.begin()+ans,a);

    for(auto it= arr.begin();it!=arr.end();it++){
        cout<<*it<<" ";
    }cout<<endl;

    return ans;
}

int insertFromBack(vector<int>&arr,int a){
     int l=0; int r=arr.size()-1; int ans=-1;
    while(l<=r){
        int mid = (l+r)/2;
        if(arr[mid]>a){
            ans=mid;
            r=mid-1;
        }
        else l=mid+1;

    }

    arr.insert(arr.begin()+ans,a);

    for(auto it= arr.begin();it!=arr.end();it++){
        cout<<*it<<" ";
    }cout<<endl;

    return ans;
}

int floor(vector<int>&arr,int a){
    int l=0; int r=arr.size()-1; int ans=arr.size()-1;
    while(l<=r){
        int mid = (l+r)/2;
        if(arr[mid]<=a){
            ans=mid;
            l=mid+1;
        }
        else r=mid-1;
    }
    int b= arr[ans];
    return b;
}

int ceil(vector<int>&arr,int a){
    int l=0; int r=arr.size()-1; int ans=arr.size()-1;
    while(l<=r){
        int mid = (l+r)/2;
        if(arr[mid]>=a){
            ans=mid;
            r=mid-1;
        }
        else l=mid+1;
    }
    int b= arr[ans];
    return b;
}

int main() {
    vector<int>a={1,2,3,4,5,6,7,8};
    cout<<BinarySearch(a,5)<<endl;
    cout<<LowerBound(a,5)<<endl;
    cout<<UpperBound(a,5)<<endl; 
    cout<<floor(a,5)<<endl;
    cout<<ceil(a,5);
}
