

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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int>x;
        ListNode*temp1=list1;
        ListNode*temp2=list2;
        while(temp1!=NULL){
            x.push_back(temp1->val);
            temp1=temp1->next;
        }
        while(temp2!=NULL){
            x.push_back(temp2->val);
            temp2=temp2->next;
        }
        sort(x.begin(),x.end());
        ListNode*head=NULL;
        ListNode*temp=NULL;
        for(int i=0;i<x.size();i++){
            ListNode*newnode=new ListNode(x[i]);
            if(head==NULL){
                head=newnode;
                temp=head;
            }
            else{
                temp->next=newnode;
                temp=temp->next;
            }
        }
        return head;
    }
};



int main()
{
   
}