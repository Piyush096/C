#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void create(struct node *);
void display(struct node *);
void DeleteAtBeforeKey(struct node *, int);
void DeleteAtAfterKey(struct node *, int);
void DeleteAtEnd(struct node *);
struct node *DeleteNthFromEnd(struct node *, int);
struct node *DeleteAtBeign(struct node *);
void main()
{
    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));
    if (head == NULL)
    {
        printf("Unable To Allocate Memory");
        exit(0);
    }

    int press = 0, key, n;
    do
    {

        printf("\nPress 1 for Delete At Beigning\n");
        printf("Press 2 for Delete At Specific Position\n");
        printf("Press 3 for Delete At Before Key Element\n");
        printf("Press 4 for Delete At After Key Element\n");
        printf("Press 5 for Delete At END\n");
        printf("Press 6 for Delete At Nth Term from END\n");
        scanf("%d", &press);
        switch (press)
        {
        case 1:
            create(head);
            printf("Your Linked List Is\n");
            display(head);
            head = DeleteAtBeign(head);
            printf("Your Linked List After Deleting Is\n");
            display(head);
            break;
        case 2:
            create(head);
            printf("Your Linked List Is\n");
            display(head);
            printf("Enter The Position You Want To Delete : ");
            scanf("%d", &key);
            DeleteAtMiddle(head, key);
            printf("Your Linked List After Deleting Is\n");
            display(head);
            break;
        case 3:
            create(head);
            printf("Your Linked List Is\n");
            display(head);
            printf("Enter The Key Element You Want To Delete :- Before Element Will Be Delete : ");
            scanf("%d", &key);
            DeleteAtBeforeKey(head, key);
            printf("Your Linked List After Deleting Is\n");
            display(head);
            break;
        case 4:
            create(head);
            printf("Your Linked List Is\n");
            display(head);
            printf("Enter The Key Element You Want To Delete :- After Element Will Be Delete : ");
            scanf("%d", &key);
            DeleteAtAfterKey(head, key);
            printf("Your Linked List After Deleting Is\n");
            display(head);
            break;
        case 5:
            create(head);
            printf("Your Linked List Is\n");
            display(head);
            DeleteAtEnd(head);
            printf("Your Linked List After Deleting Is\n");
            display(head);
            break;
        case 6:
            create(head);
            printf("Your Linked List Is\n");
            display(head);
            printf("Enter The Nth Term : ");
            scanf("%d", &n);
            DeleteNthFromEnd(head, n);
            printf("Your Linked List After Deleting Is\n");
            display(head);
            break;
        default:
            break;
        }
    } while (press <= 6);
}
void create(struct node *head)
{
    struct node *newnode, *temp;
    printf("Enter Node Data : ");
    scanf("%d", &head->data);
    getchar();
    head->next = NULL;
    char c;
    temp = head;
    while (1)
    {
        printf("Do You Want to Add More Data? Y or N : ");
        scanf("%c", &c);
        if (c == 'Y' || c == 'y')
        {
            newnode = (struct node *)malloc(sizeof(struct node));
            if (newnode == NULL)
            {
                printf("Unable To Allocate Memory");
                break;
            }
            printf("Enter Node Data : ");
            scanf("%d", &newnode->data);
            getchar();
            newnode->next = NULL;
            temp->next = newnode;
            temp = temp->next;
        }
        else
        {
            break;
        }
    }
}
void display(struct node *head)
{
    struct node *temp;
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void DeleteAtMiddle(struct node *head, int index)
{
    int i = 0;
    struct node *prev, *temp, *p;
    temp = prev = p = head;
    while (i != index - 1)
    {
        prev = p;
        p = p->next;
        i++;
    }
    temp = p->next;
    prev->next = temp;
}
struct node *DeleteAtBeign(struct node *head)
{
    struct node *temp, *t;
    temp = head;
    t = temp->next;
    temp->next = NULL;
    temp = t;
    return temp;
}
void DeleteAtBeforeKey(struct node *head, int input)
{
    struct node *temp, *prev, *p;
    p = temp = head;
    prev = head;
    while (input != temp->data)
    {
        prev = temp;
        temp = temp->next;
        p = temp->next;
        if (input == p->data)
        {
            break;
        }
    }
    prev->next = p;
}
void DeleteAtAfterKey(struct node *head, int input)
{
    struct node *p, *temp;
    temp = p = head;
    while (input != temp->data)
    {
        temp = temp->next;
    }
    p = temp->next;
    temp->next = p->next;
}
void DeleteAtEnd(struct node *head)
{
    struct node *p, *temp;
    temp = p = head;
    while (temp->next != NULL)
    {
        p = temp;
        temp = temp->next;
    }
    p->next = NULL;
}
struct node *DeleteNthFromEnd(struct node *head, int n)
{
    int i = 0, j = 0;
    struct node *prev, *temp, *p, *ptr;
    temp = prev = p = ptr = head;
    while (temp != NULL)
    {
        i++;
        temp = temp->next;
    }
    if (i == n)
    {
        return ptr->next;
    }
    int k = (i - (n - 1));
    while (j != k - 1)
    {
        prev = p;
        p = p->next;
        j++;
    }
    ptr = p->next;
    prev->next = ptr;
    return head;
}

