#include<iostream>
#include<bits/stdc++.h>


struct Node 
{ 
    int data; 
    struct Node* next; 
};

void deleteList(Node *head)
{
    while(head!=NULL)
    {
        Node *temp = head->next;
        free(head);
        head = temp;
    }
}

