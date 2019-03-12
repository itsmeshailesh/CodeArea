#include<stdio.h>
#define MAX 5
int TOP=-1;
void push(int stack[],int item)
{
    if(TOP==MAX-1)
    {
        printf("\nStack is Full");
        return;
    }
    TOP=TOP+1;
    stack[TOP]=item;
}

void pop(int stack[])
{
    int item;
    if(TOP==-1)
    {
        printf("\nStack is Empty");
        return;
    }
    item=stack[TOP];
    TOP=TOP-1;
    printf("\n%d Popped",item);

}

void traverse(int stack[])
{
    int i;
    if(TOP==-1)
    {
        printf("\nStack is Empty");
        return;
    }
    printf("\n");
    i=TOP;
    while(i>=0)
    {
        printf("%d ",stack[i]);
        i--;
    }


}


int main()
{
    int choice,stack[MAX],item;
    while(1)
    {
        printf("\n\nMENU");
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Traverse");
        printf("\n4. Exit");
        printf("\nEnter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 :    printf("\nEnter element to push : ");
                        scanf("%d",&item);
                        push(stack,item);
                        break;
            case 2 :    pop(stack);
                        break;
            case 3 :    traverse(stack);
                        break;
            case 4 :    exit(0);
            default :   printf("\nInvalid Input!!!");
        }
    }
}
