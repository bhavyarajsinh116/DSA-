#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
};
void travelars(struct node *header)
{
  struct node *ptr=header;
  do
  {
    printf("%d\n", ptr->data);
    ptr = ptr->next;
  } while (ptr!= header);
}
// struct node *deleteatfront(struct node *header)
// {
//   struct node *p=header;
//   while (p->next != header)
//   {
//     p = p->next;
//   }
//   struct node * ptr= p->next;
//    header=header->next;
//   p->next=header;
 
//   free(ptr);
//   return header;
// }
// struct node * deleteatlast(struct node * header){
//   struct node * ptr = header;
//   while (ptr->next->next!=header)   
//   {
//     ptr=ptr->next;
//   }
//   //struct node * q=ptr->next;
//   free(ptr->next);
//   ptr->next=header;
//   return header;
// }
// struct node * deleteinbetween(struct node * header,int index){
//   struct node * ptr = header;
//   for (int i = 0; i < index-1; i++)
//   {
//     ptr=ptr->next;

//   }
//   struct node *q =ptr->next;
//   ptr->next=q->next;
//   free(q);
//   return header;
  
// }
int main()
{
  struct node *header = (struct node *)malloc(sizeof(struct node));
  struct node *second = (struct node *)malloc(sizeof(struct node));
  struct node *third = (struct node *)malloc(sizeof(struct node));
  struct node *fourth = (struct node *)malloc(sizeof(struct node));
  struct node *fifth = (struct node *)malloc(sizeof(struct node));

  header->data = 10;
  header->next = second;

  second->data = 11;
  second->next = third;

  third->data = 12;
  third->next = fourth;

  fourth->data = 13;
  fourth->next = fifth;

  fifth->data = 14;
  fifth->next = header;

 //header=deleteatlast(header);
 header=deleteinbetween(header,2);
 travelars(header);

  return 0;
}