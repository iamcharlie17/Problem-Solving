// linked list group reverse


/*
class Node {
  public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node *reverseKGroup(Node *head, int k) {
        
       if(head == nullptr) return head;
        
       Node * curr = head;
       Node * newHead = nullptr;
       Node * tail = nullptr;
       
       while(curr != nullptr) {
           Node * grpHead = curr;
           Node * prev = nullptr;
           Node * nextNode = nullptr;
           
           int cnt = 0;
           
           while (curr != nullptr && cnt < k) {
               nextNode = curr->next;
               curr->next = prev;
               prev = curr;
               
               curr = nextNode;
               cnt ++;
           }
           
           if(newHead == nullptr) newHead = prev;
           
           if(tail != nullptr) {
               tail->next = prev;
           }
           
           tail = grpHead;
           
           
       }
       
       
       return newHead;
    }
};