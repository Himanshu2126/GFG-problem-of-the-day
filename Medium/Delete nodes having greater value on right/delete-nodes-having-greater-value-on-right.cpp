//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
    public:
    Node *compute(Node *head)
    {
        Node *curr = head;
        Node *prev = NULL;
        Node *next = NULL;
        while(curr){
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
        int mx = INT_MIN;
        while(prev -> next){
            mx = max(prev -> data, mx);
            if(prev -> next -> data < mx){
                prev -> next = prev -> next -> next;
            }
            else{
                prev = prev -> next;
            }
        }
        Node *curr1 = head;
        Node *prev1 = NULL;
        Node *next1 = NULL;
        while(curr1){
            next1 = curr1 -> next;
            curr1 -> next = prev1;
            prev1 = curr1;
            curr1 = next1;
        }
        head = prev1;
        return head;
    }
    
};


//{ Driver Code Starts.

int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
        Solution ob;
        Node *result = ob.compute(head);
        print(result);
        cout<<endl;
    }
}

// } Driver Code Ends