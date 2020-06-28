//
// Created by lnz on 2020/6/27.
//
#include <vector>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x): val(x), next(NULL){}  //这是构造函数？
};

class Solution{
public:
    ListNode* addTwonumbers(ListNode* l1, ListNode* l2){
        ListNode *cur1 = l1;
        ListNode *cur2 = l2;
        while(1){
            if(cur1->val + cur2->val >= 10){
                cur2->val = cur1->val + cur2->val - 10;
                if(cur2->next != NULL){
                    cur2->next->val += 1;
                }else{
                    cur2->next = new ListNode(1);
                }
            } else{
                cur2->val += cur1->val;
            }

            if(cur1->next == NULL){
                return l2
            }else if (cur2 -> next == NULL){
                cur2 -> next = cur1 -> next;
                return l2;
            }else{
                cur2 = cur2->next;
                cur1 = cur1->next;
            }
        }
    }
};

int main(){
    Solution s = Solution();
    s.addTwonumbers(...);
}
