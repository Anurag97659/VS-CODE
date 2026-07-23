#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int reversort(vector<int> &arr) {
    int n = arr.size();
   int total_cost = 0;
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        } 
        reverse(arr.begin() + i, arr.begin() + min_index + 1);
        total_cost += min_index - i + 1;
        // cout <<total_cost << endl;
    }
    return total_cost;
}

// Find a list of n distinct integers between 1 and n such that the cost of applying Reversort to it is exactty C,or say that there is no such list.
vector<int> reversort_engineering(int n, int C){
    int minCost = n - 1;
    int maxCost = (n * (n + 1) / 2) - 1;
    if (C < minCost || C > maxCost)return {};

    vector<int> a(n);
    iota(a.begin(), a.end(), 1);
    int extra = C - minCost;
    for (int i = n - 2; i >= 0; i--){
        int take = min(extra, n - 1 - i);
        reverse(a.begin() + i, a.begin() + i + take + 1);
        extra -= take;
    }
    return a;
}


int main() {
    vector<int> arr = {2, 4, 6, 8, 9, 7, 5, 3, 1 };
    for (int num : arr) {
        cout << num << " ";
    }   cout << endl;
    int total_cost = reversort(arr);
    for (int num : arr) {
        cout << num << " ";
    }
    cout << "\nTotal cost: " << total_cost << endl;

    cout << "Reversort Engineering: " << endl;
    vector<int> result = reversort_engineering(9, 44);
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
