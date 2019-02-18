#include<stdio.h>

void create();
void display();
void insert_beg();
void insert_end();
void insert_loc();
void reverse();
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
    insert_beg();
    display();
    insert_end();
    display();
    insert_loc();
    display();
    reverse();
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
       fflush(stdin);

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
        printf("\n");
    }

}

void insert_beg()
{
    struct node *temp;
    int item;
    temp=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("Overflow");
        return;
    }
    printf("\nEnter the item value : ");
    scanf("%d",&item);
    temp->info=item;
    temp->link=start;
    start=temp;

}

void insert_end()
{
    struct node *temp,*ptr;
    int item;
    temp=(struct node*)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("Overflow");
        return;
    }
    printf("\nEnter the item value : ");
    scanf("%d",&item);
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

}
void insert_loc()
{
    struct node *temp,*ptr;
    int item,i,pos;
    temp=(struct node*)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("Overflow");
        return;
    }
    printf("\nEnter the item value : ");
    scanf("%d",&item);
    printf("\nEnter the position :");
    scanf("%d",&pos);
    temp->info=item;
    temp->link=NULL;
    ptr=start;
    for(i=1;i<pos;i++)
    {
        if(ptr==NULL)
        {
            printf("Invalid Position");
            return;
        }
        ptr=ptr->link;
    }
    temp->link=ptr->link;
    ptr->link=temp;

}

void reverse()
{
    struct node *p1,*p2,*p3;
    if(start==NULL)
    {
        printf("List is Empty!!");
        return;
    }
    p1=start;
    p2=p1->link;
    p3=p2->link;
    p1->link=NULL;
    p2->link=p1;
    while(p3!=NULL)
    {
        p1=p2;
        p2=p3;
        p3=p3->link;
        p2->link=p1;
    }
    start=p2;
}

