// 1)	2sum problem:-
// #include <bits/stdc++.h>
// #include <vector>
// using namespace std;
// vector<int> twoSum(int n, vector<int> &arr, int target) {
//     vector<int> ans;
//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (arr[i] + arr[j] == target) {
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//             }
//         }
//     }
//     return { -1, -1};
// }

// int main()
// {
//     int n = 5;
//     vector<int> arr = {2, 6, 5, 8, 11};
//     int target = 14;
//     vector<int> ans = twoSum(n, arr, target);
//     cout << "This is the answer for variant 2: [" << ans[0] << ", "
//          << ans[1] << "]" << endl;
//     int target2 = 20;
//     vector<int> ans2 = twoSum(n, arr, target2);
//     cout << "This is the answer for variant 2: [" << ans2[0] << ", "
//          << ans2[1] << "]" << endl;
//     return 0;
// }







//2) Find the number that appears once
// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         int single=-1;
//         int size = nums.size();
//         int hash[size]={0};
//         int hashsize = sizeof(hash)/sizeof(hash[0]);
//         for(int i=0;i<size;i++){
//             hash[nums[i]]++;
//         }
//         for(int i=0;i<hashsize;i++){
//             if(hash[i]==1){
//                 single = i;                
//             }
//         }
//         return single;
//     }
// };
// int main(){
//     vector<int> nums = {4,1,2,1,2};
//     Solution s;
//    cout<< s.singleNumber(nums);
//     return 0;
// }







// 3) find the reverse of an linked list
// #include <bits/stdc++.h>
// #include <string>
// using namespace std;

// struct node {
//  int data;
//  struct node *next;
// };

// struct node *head = NULL;

// void printList(){
//  struct node *p = head;
//  cout << " ";
//  while(p != NULL) {
//  cout << " " << p->data << " ";
//  p = p->next;
//  }
//  cout << " \n";
// }

// void insertatbegin(int data){
//  struct node *lk = (struct node*) malloc(sizeof(struct node));
//  lk->data = data;
//  lk->next = head;
//  head = lk;
// }
// void reverse(){
//     struct node *prev = NULL;
//     struct node *temp = head;
//     struct node *k;
//     while(temp != NULL){
//     k = temp->next;
//     temp->next = prev;
//     prev = temp;
//     temp = k;
//     }
//     head = prev;
// }


// int main(){
//     insertatbegin(1);
//     insertatbegin(2);
//     insertatbegin(3);
//     insertatbegin(4);
//     printList();
//     reverse();
//     printList();
// }












// 4) impletation of stack using queue
// #include<bits/stdc++.h>
// using namespace std;

// class Stack {
//   queue < int > q;
//   public:
//     void Push(int x) {
//       int s = q.size();
//       q.push(x);
//       for (int i = 0; i < s; i++) {

//         q.push(q.front());
//         q.pop();
//       }
//     }
//   int Pop() {
//     int n = q.front();
//     q.pop();
//     return n;
//   }
//   int Top() {
//     return q.front();
//   }
//   int Size() {
//     return q.size();
//   }
// };

// int main() {
//   Stack s;
//   s.Push(3);
//   s.Push(2);
//   s.Push(4);
//   s.Push(1);
//   cout << "Top of the stack: " << s.Top() << endl;
//   cout << "Size of the stack before removing element: " << s.Size() << endl;
//   cout << "The deleted element is: " << s.Pop() << endl;
//   cout << "Top of the stack after removing element: " << s.Top() << endl;
//   cout << "Size of the stack after removing element: " << s.Size();

// }










// 5) Count Maximum Consecutive One's in the array
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int findMaxConsecutiveOnes(vector < int > & nums) {
      int cnt = 0;
      int maxi = 0;
      for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 1) {
          cnt++;
        } else {
          cnt = 0;
        }

        maxi = max(maxi, cnt);
      }
      return maxi;
    }
};
int main() {
  vector < int > nums = { 1, 1, 0, 1, 1, 1 };
  Solution obj;
  int ans = obj.findMaxConsecutiveOnes(nums);
  cout << "The maximum  consecutive 1's are " << ans;
  return 0;
}