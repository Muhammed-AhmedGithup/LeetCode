# include<bits/stdc++.h>

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        vector<int>x;
        ListNode* head1=head;
        while(head1!=nullptr){
            x.push_back(head1->val);
            head1=head1->next;

        }
        reverse(x.begin(),x.end());
        x.erase(x.begin()+(n-1));
        for(auto i:x)cout<<i<<" ";
        reverse(x.begin(),x.end());
        if(x.empty())return nullptr;
        ListNode* temp=new ListNode(x[0]);
        ListNode* temp1=temp;
        int i=1;
        while(i<x.size()){
            temp1->next=new ListNode(x[i]);
            temp1=temp1->next;
            i++;
        }

        return temp;

    }
};