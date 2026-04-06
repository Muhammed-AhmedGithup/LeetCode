

#include<bits/stdc++.h>

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int> v1,v2,sum;
        ListNode* temp1=l1;
        while(temp1!=NULL){
            v1.push_back(temp1->val);
            temp1=temp1->next;
        }
        ListNode* temp2=l2;
        while(temp2!=NULL){
            v2.push_back(temp2->val);
            temp2=temp2->next;
        }
        int carry=0;
        for(int i=0;i<max(v1.size(),v2.size());i++){
            int a=0,b=0;
            if(i<v1.size()) a=v1[i];
            if(i<v2.size()) b=v2[i];
            sum.push_back((a+b+carry)%10);
            carry=(a+b+carry)/10;
        }
        if(carry>0) sum.push_back(carry);
        ListNode* head=new ListNode(sum[0]);
        ListNode* temp=head;
        for(int i=1;i<sum.size();i++){
            temp->next=new ListNode(sum[i]);
            temp=temp->next;
        }
        return head;
    }
};




int main()
{
   
}