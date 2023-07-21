//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


struct node
{
    int data;
    struct node* next;
    
    node(int x){
        data = x;
        next = NULL;
    }
    
};

/* Function to print linked list */
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}


// } Driver Code Ends
/*
  Reverse a linked list
  The input list will have at least one element  
  Return the node which points to the head of the new LinkedList
  Node is defined as 
    struct node
    {
        int data;
        struct node* next;
    
        node(int x){
            data = x;
            next = NULL;
        }
    
    }*head;
*/

class Solution
{
    public:
    struct node* rev(struct node* &head,int k)
    {
        // standard reversing algorithm using 3 varibale loop 
        
        //Refer reverse a link list question
        
        node* prev=NULL;
        node* temp=NULL;
        
        while(k-- && head)
        {
            temp=head->next;
            head->next=prev;
            prev=head;
            head=temp;
        }
        
        return prev;
    }
    
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        
        node* dummynode=new node(-1);
        node* temp=dummynode;
        node* curr=head;
        
        while(temp)
        {
            temp->next=rev(curr,k);//1st round ke baad curr hoga next k batch ke starting pe or in english to say head will be at the start of the next k batch
            temp=head;//temp will store the last element of the current reverse batch which is initially it is set to head 
            //which go to end after functions work to point it to the start of upcoming next k batch
            head=curr;//curr will be made to  point to the start of the next batch head after function executes and so the head will retain it for future references
            //when curr will be pointing to the third batch starting after second functions call
        }
        
        return dummynode->next;
    }
};


//{ Driver Code Starts.

/* Drier program to test above function*/
int main(void)
{
    int t;
    cin>>t;
     
    while(t--)
    {
        struct node* head = NULL;
        struct node* temp = NULL;
        int n;
        cin >> n;
         
        for(int i=0 ; i<n ; i++)
        {
            int value;
            cin >> value;
            if(i == 0)
            {
                head = new node(value);
                temp = head;
            }
            else
            {
                temp->next = new node(value);
                temp = temp->next;
            }
        }
        
        int k;
        cin>>k;
        
        Solution ob;
        head = ob.reverse(head, k);
        printList(head);
    }
     
    return(0);
}


// } Driver Code Ends