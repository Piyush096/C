#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}
Node;
Node * create(Node *);
void display(Node *);
Node * insertion_at_Front(Node *);
Node * insertion_at_end(Node *);
Node * insertion_at_CertainPosition(Node *);
Node * deletion_at_Front(Node *);
Node * deletion_at_end(Node *);
Node * deletion_at_CertainPosition(Node *);
int number_of_nodes(Node *);
int main(void)
{
    Node *tail=NULL;
    int choice;
    do
    {
        printf("\n\nPress 1 for creating a list");
        printf("\nPress 2 for display the list");
        printf("\nPress 3 for insertion at front");
        printf("\nPress 4 for insertion at end");
        printf("\nPress 5 for insertion at certain position");
        printf("\nPress 6 for deletion at front");
        printf("\nPress 7 for deletion at end");
        printf("\nPress 8 for deletion from a certain positon");
        printf("\nPress 9 for exit");
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                tail=create(tail);
                break;
            case 2:
                display(tail);
                break;
            case 3:
                tail=insertion_at_Front(tail);
                break;
            case 4:
                tail=insertion_at_end(tail);
                break;
            case 5:
                tail=insertion_at_CertainPosition(tail);
                break;
            case 6:
                tail=deletion_at_Front(tail);
                break;
            case 7:
                tail=deletion_at_end(tail);
                break;
            case 8:
                tail=deletion_at_CertainPosition(tail);
                break;
            case 9:
                exit(1);
            default:
                printf("Enter a valid input");
        }
    }while(1);
    return 0;
}
Node *create(Node * tail)
{
    Node *temp=(Node *)malloc(sizeof(Node));
    if(!temp)
    {
        printf("Unsuccessful Allocation!!");
        exit(EXIT_FAILURE);
    }
    else if(!tail)
        temp->next=temp;
    else
    {
        temp->next=tail->next;
        tail->next=temp;
    }
    printf("\nEnter the data:");
    scanf("%d",&temp->data);
    tail=temp;
    return tail;
}
void display(Node * tail)
{
    if(!tail)
        printf("\nThe list is empty!!");
    else
    {
        Node *current=tail->next;
        printf("\nYour list is:-\n");
        do
        {
            printf("%d\t",current->data);
            current=current->next;
        }while(current!=tail->next);
    }
}
Node * insertion_at_Front(Node *tail)
{
    Node *temp=(Node *)malloc(sizeof(Node));
    if(!temp)
    {
        printf("Unsuccessful Allocation!");
        exit(EXIT_FAILURE);
    }
    else if(!tail)
        tail=create(tail);
    else
    {
        temp->next=tail->next;
        tail->next=temp;
        printf("\nEnter the data:");
        scanf("%d",&temp->data);
    }
    return tail;
}
Node * insertion_at_end(Node *tail)
{
    tail=create(tail);
    return tail;
}
Node * insertion_at_CertainPosition(Node *tail)
{
    int count=number_of_nodes(tail);
    printf("\nEnter the position at which you want to insert the node:");
    int position=0;
    scanf("%d",&position);
    if(position-1>count || position<1)
        printf("\nInvalid position...");
    else if(!tail)
        tail=insertion_at_Front(tail);
    else if(position==1)
        tail=insertion_at_Front(tail);
    else if((position-1)==count)
        tail=insertion_at_end(tail);
    else
    {
        Node *temp=(Node *)malloc(sizeof(Node)),*current=tail->next;
        for(int i=1;i<position-1;i++)
            current=current->next;
        temp->next=current->next;
        current->next=temp;
        printf("Enter the data:");
        scanf("%d",&temp->data);
    }
    return tail;
}
Node * deletion_at_Front(Node * tail)
{
    if(!tail)
        printf("\nThere are no nodes in the list to be deleted");
    else if((number_of_nodes(tail))==1)
    {
        free(tail);
        tail=NULL;
    }
    else
    {
        Node *temp=tail->next;
        tail->next=temp->next;
        free(temp);
    }
    return tail;
}
Node * deletion_at_end(Node *tail)
{
    if(!tail)
        printf("\nThere are no nodes in the list to be deleted");
    else if((number_of_nodes(tail))==1)
        tail=deletion_at_Front(tail);
    else
    {
        Node * Current=tail->next;
        while(Current->next!=tail)
            Current=Current->next;
        Current->next=tail->next;
        free(tail);
        tail=Current;
    }
    return tail;
}
Node * deletion_at_CertainPosition(Node * tail)
{
    printf("\nEnter the position of the node which you want to delete:");
    int position=0;
    scanf("%d",&position);
    if(position>number_of_nodes(tail) || position<1)
        printf("Invalid position");
    else if(!tail)
        printf("There are no nodes in the list to be deleted");
    else if(position==1)
        tail=deletion_at_Front(tail);
    else if(position==number_of_nodes(tail))
        tail=deletion_at_end(tail);
    else
    {
        Node *current=tail->next;
        for(int i=1;i<position-1;i++)
            current=current->next;
        Node *temp=current->next;
        current->next=current->next->next;
        free(temp);
    }
    return tail;
}
int number_of_nodes(Node *tail)
{
    if(!tail)
        return 0;
    else
    {   int count=0;
        Node *current=tail->next;
        do
        {
            count++;
            current=current->next;
        }while(current!=tail->next);
        return count;
    }
}
