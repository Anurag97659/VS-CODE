#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <string>
using namespace std;



struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode*temp=head;
        ListNode*temp1=head;
        int count = 1;
        while(temp!=NULL){
            if(count==k)temp1=temp;
            temp=temp->next;
            count++;
        } 
        ListNode*temp2=head;
        while(count-k>1){
            temp2=temp2->next;
            count--;
        }
        swap(temp1->val,temp2->val);
        return head;
    }
};
int main(){
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    // head->next->next = new ListNode(3);
    // head->next->next->next = new ListNode(4);
    // head->next->next->next->next = new ListNode(5);

    int k = 2;
    Solution sol;
    ListNode* newHead = sol.swapNodes(head, k);

    // Print the modified linked list
    ListNode* current = newHead;
    while (current != nullptr) {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;

    return 0;
}