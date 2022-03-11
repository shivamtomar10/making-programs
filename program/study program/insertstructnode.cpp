#include <iostream>
using namespace std;
struct node
{
    int a;
    struct node *p;
};
void linked_tranverse(struct node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->a;
        ptr = ptr->p;
        cout << endl;
    }
}
struct node *insert_begin(struct node *ptr)
{

    struct node *q;
    q = (struct node *)malloc(sizeof(struct node));
    q->a = 4;
    q->p = ptr;
    ptr = q;

    return (ptr);
}
void insert_last(struct node *ptr, struct node *n)
{

    while (ptr->p != NULL)
    {
        ptr = ptr->p;
    }
    ptr->p = n;

    n->a = 5;
    n->p = NULL;
}
int main()
{
    struct node *header;
    struct node *second;
    struct node *third;
    struct node *q;
    header = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    q = (struct node *)malloc(sizeof(struct node));

    header->a = 1;
    header->p = second;

    second->a = 2;
    second->p = third;

    third->a = 3;
    third->p = NULL;

    // linked_tranverse(header);
    //  cout<<"value after calling insert at begin:\n";

    // header=insert_begin(header);
    //linked_tranverse(header);
    cout << "value after calling insert at end :\n";
    insert_last(header, q);
    linked_tranverse(header);

    return (0);
}