#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
struct node* createnode(int dat)
{
    struct node* j;
    j=(struct node*) malloc(sizeof(struct node));
    j->data=dat;
    j->left=NULL;
    j->right=NULL;
    return j;
}
void preorder(struct node* p)
{
    if(p!=NULL)
    {
        printf("%d",p->data);
        cout<<" ";
        preorder(p->left);
        preorder(p->right);
    }
  
}
void postorder(struct node* p)
{
    if(p!=NULL)
    {
        
        postorder(p->left);
        preorder(p->right);
        printf("%d",p->data);
        cout<<" ";
    }
}
void inorder(struct node* p)
{
    if(p!=NULL)
    {
        inorder(p->left);
        printf("%d",p->data);
        cout<<" ";
        inorder(p->right);
    }
}        



int main()
{
    struct node* p=createnode(3);
    struct node* p1=createnode(4);
    struct node* p2=createnode(5);
    struct node* p3=createnode(6);
    struct node* p4=createnode(8);
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;

    cout<<"After traverse through preorder:";
    preorder(p);
    cout<<endl;
    cout<<"After traverse through postorder:";
    postorder(p);
    cout<<endl;
    cout<<"After traverse through inorder:";
    inorder(p);

    return 0;
}