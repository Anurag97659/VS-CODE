#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// It is inspired from the bubble sort like in bubble sort we swap the adajacent elements(two)
// if the left element is greater than the right element
// In Trouble sort we take three adajacent element and compare the leftmost to rightmost then reverse
// the entire subarray(3) if l>r

//Given a list of N integers, determine whether Trouble Sort
// will successfully sort the list into non-decreasing order.

// If it will not, find the index (counting starting from 0) of
// the first sorting error after the algorithm has finished: that
// is, the first value that is larger than the value that comes
// directly after it when the algorithm is done.

vector<int> troubleSort(vector<int> &arr) {
    int n = arr.size();
    bool done = false;
    while(!done){
        done = true;
        for(int i = 0; i < n - 2; i++){
            if(arr[i] > arr[i + 2]){
                swap(arr[i], arr[i + 2]);
                done = false;
            }
        }
    }
// hence the even index never gets compared with odd index
// so basically it is a bubble sort on even index and odd index separately
    for(int i = 0; i < n - 1; i++){// check if the array is sorted or not 
        if(arr[i] > arr[i + 1]){
            cout << "Sorting error at index: " << i << endl;
            break;
        }
    }
    return arr;
} // time complexity = O(n^2) and space complexity = O(1)


// to short this issue we can sort the even index and odd index separately and then merge them using efficient 
// merge technique and then check if the merged array is sorted or not

vector<int> troubleSortOptimized(vector<int> &arr) {
    vector<int> even, odd;
    for(int i = 0; i < arr.size(); i++){
        if(i % 2 == 0) even.push_back(arr[i]);
        else odd.push_back(arr[i]);
    }
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());
    vector<int> merged;
    for(int i = 0; i < arr.size(); i++){
        if(i % 2 == 0) merged.push_back(even[i / 2]);
        else merged.push_back(odd[i / 2]);
    }
    for(int i = 0; i < merged.size() - 1; i++){
        if(merged[i] > merged[i + 1]){
            cout << "Sorting error at index: " << i << endl;
            break;
        }
    }
    return merged;
}// time complexity = O(nlogn) and space complexity = O(n)
int main () {
    vector<int> arr = {1, 3, 2, 4, 5};
    troubleSort(arr);
    for(auto i:arr)cout<<i<<" ";
    cout<<endl;
    vector<int> arr2 = {1, 3, 2, 4, 5};
    troubleSortOptimized(arr2);
    for(auto i:arr2)cout<<i<<" ";
    cout<<endl;
    return 0;
}
                                                                                                              







