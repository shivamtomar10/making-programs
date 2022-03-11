#include<iostream>
using namespace std;
struct node 
{
    int data;
    struct node* next;
};
void linked_traverse(struct node* ptr)
{
    while(ptr!=NULL)
    {
    cout<<ptr->data;
    ptr=ptr->next;
    cout<<endl;
    }
}

int main()
{
    struct node* header;
    struct node* second;
    struct node* third;
    header=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));

    header->data=11;
    header->next=second;

    second->data=13;
    second->next=third;

    third->data=26;
    third->next=NULL;

    linked_traverse(header);




    return 0;
}