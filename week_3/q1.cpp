// User function Template for C++

/*struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/
#include <map>
class Solution {
  public:
    Node* findFirstNode(Node* head) {
        // your code here
        map <Node*,int> m;
        m[head]++;
        Node* temp=head;
        while(m[temp]!=2)
        {
            temp=temp->next;
            if(temp==NULL){
                break;
            }
            m[temp]++;
        }
        return temp;
    }
};