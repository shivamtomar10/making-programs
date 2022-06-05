#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createnode(int d)
{
    struct node* p;
    p=(struct node*)malloc(sizeof(struct node));
    p->left=NULL;
    p->right=NULL;
    p->data=d;
    return p;
}
void searchbst(struct node* p)
{
    if(p!=NULL)
    {
        searchbst(p->left);
        printf("%d " " ",p->data);
        searchbst(p->right);
    }
}

int main()
{       
    //creating a binary search tree
    struct node* p=createnode(5);
    struct node* p1=createnode(4);
    struct node* p2=createnode(8);
    struct node* p3=createnode(2);
    struct node* p4=createnode(7);
    struct node* p5=createnode(3);

    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    p2->left=p5;

searchbst(p);

    return 0;
}