#include<stdlib.h>
#include<stdio.h>
struct node
{
    int data;
    struct node *next;
};


void creat(struct node **,int);
void Push(struct node **,int);
void Pop(struct node **);
void display(struct node *);

void main()
{
    int ans,num;
    struct node *root;
    root=NULL;
    while (ans!=3)
        {
            display(root);
            printf("\n\t 1-PUSH");
               printf("\n\t 2-POP");
                  printf("\n\t 3-EXIT");
                     printf("\n\t ENTER THE CHOICE: ");

                scanf("%d",&ans);
                switch (ans)
                {
                case 1:printf("\n\t PUSH THE ELEMENT =");
                scanf("%d",&num);
                Push(&root,num);
                    break;
                case 2:printf("\n\t POP THE ELEMENT");
                 Pop(&root);
                 break; 
        
                 case 3:printf("\n\t EXIT");
                    break;

                }
    

}
}
void Push(struct node **q,int num)
{
    struct node *temp;
    temp=malloc(sizeof(struct node));
    temp->data=num;
    temp->next=*q;
    *q=temp;
}
void Pop(struct node **q)
{
    if(*q==NULL)
    {
        printf("\n NO ELEMENT TO POP,PLEASE ADD ELEMENTS");
    }
    else
    {
          struct node *temp;
    temp=*q;
    *q=temp->next;
    printf("\n ELEMENT POPED IS = %d ",*temp);
    free(temp);
    }
}
    
void display(struct node *q)
{
    struct node *temp;
    temp=q;
    while(temp!=NULL)
    {
        printf("\nELEMENTS ARE = %d\t",temp->data);
        temp=temp->next;
    }
}