#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;
node *head = NULL, *tail = NULL;
void addNewNodeAtEnd(int data)
{
    node *newNode = (node *)malloc(sizeof(node));
    newNode->data = data;
    newNode->next = NULL;
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
        tail->next = head;
    }
}
void addNewNodeAtBeg(int data)
{
    node *newNode = (node *)malloc(sizeof(node));
    newNode->data = data;
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->next = head;
        head = newNode;
        tail->next = head;
    }
}
void display()
{
    char choice;

    do
    {   node *temp = head;
        while (temp->next != head)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("%d ", temp->data);
        printf("Do you want to continue(y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');
}
int main()
{
    char c;
    do
    {
        printf("1.Insert at beg\n2.Insert at end\n3.Display\nEnter choice: ");
        int inp;
        scanf("%d", &inp);
        switch (inp)
        {
        case 1:
            printf("Enter element: ");
            int ele;
            scanf("%d", &ele);
            addNewNodeAtBeg(ele);
            break;
        case 2:
            printf("Enter element: ");
            int el;
            scanf("%d", &el);
            addNewNodeAtEnd(el);
            break;
        case 3:
            display();
            break;

        default:
            break;
        }
        printf("Do you want to continue(y/n)");
        scanf(" %c", &c);
    } while (c == 'y' || c == 'Y');
}
