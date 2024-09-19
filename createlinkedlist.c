// jay ma sonal
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void travelers(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("The element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct node *insertatbeginning(struct node *header, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = header;
    ptr->data = data;
    return ptr;
}

struct node *insertinbetween(struct node *header, int data, int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = header;

    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;

    return header;
}
struct node * insertatlast(struct node * header,int data){
    struct node * ptr=(struct node*)malloc(sizeof(struct node));
    struct node * p =header;
 
    while (p->next !=NULL)
    {
        p = p->next;
        
    }
    p->next=ptr;
    ptr->data = data;
    ptr->next=NULL;

    return header;
    
}
int main()
{
    struct node *header;
    struct node *second;
    struct node *third;

    header = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    header->data = 10;
    header->next = second;

    second->data = 11;
    second->next = third;

    third->data = 12;
    third->next = NULL;

    // header=insertatbeginning(header,9);
    // header=insertinbetween(header,12,2);
     header =insertatlast(header,13);
    travelers(header);
    return 0;
}