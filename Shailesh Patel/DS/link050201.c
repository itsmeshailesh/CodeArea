#include<stdio.h>

void create();
void display();
struct node
{
    int info;
    struct node *link;
};
struct node *start=NULL;
int main()
{
    create();
    printf("Elements in the link : ");
    display();
    return 0;
}

void create()
{
    struct node *temp,*ptr;
    int item;
    char ch='y';
    while(ch=='y'||ch=='Y')
    {
       temp=(struct node*)malloc(sizeof(struct node));
       if(temp==NULL)
       {
           printf("Memory Overflow");
           exit(0);
       }
       printf("Enter info value : ");
       scanf(" %d",&item);
       temp->info=item;
       temp->link=NULL;
       if(start==NULL)
        start=temp;
       else
       {
           ptr=start;
           while(ptr->link!=NULL)
            ptr=ptr->link;
           ptr->link=temp;
       }
       printf("Do you want to enter more nodes (y/n): ");
       fflush(stdin);
       scanf(" %c",&ch);

    }
}

void display()
{
    struct node *ptr;
    if(start==NULL)
    {
        printf("List is Empty");
        exit(0);
    }
    else
    {
        ptr=start;
        while(ptr!=NULL)
        {
            printf("%d ",ptr->info);
            ptr=ptr->link;
        }
    }

}
