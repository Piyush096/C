#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node* previous;
    int num;
    struct node* next;
};

typedef struct node Node;

int number_of_nodes(Node*);

int main(void)
{
    Node* head = NULL;

    puts("\n                                    \n"
           "   Choice   Operation              *\n"
           "                                   *\n"
           "   1        Insert at beginning    *\n"
           "   2        Insert at end          *\n"
           "   3        Insert at position     *\n"
           "   4        Delete from beginning  *\n"
           "   5        Delete from end        *\n"
           "   6        Delete from position   *\n"
           "   7        Display forward        *\n"
           "   8        Display reversed       *\n"
           "   9        Exit                   *\n"
           );

    int choice;

    while (1)
    {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            Node* new = (Node*) malloc(sizeof (Node));
            if (new == NULL)
            {
                printf("Unsuccessful allocation\n");
                exit(EXIT_FAILURE);
            }

            printf("Enter the integer: ");
            scanf("%d", &(new->num));

            new->next = head;
            new->previous = NULL;
            if (new->next)
                (new->next)->previous = new;
            head = new;

            printf("Integer inserted successfully\n");
        }

        else if (choice == 2)
        {
            Node* new = (Node*) malloc(sizeof (Node));
            if (new == NULL)
            {
                printf("Unsuccessful allocation\n");
                exit(EXIT_FAILURE);
            }

            printf("Enter the integer: ");
            scanf("%d", &(new->num));

            Node* current = head;
            while (current->next)
                current = current->next;
            current->next = new;
            new->previous = current;
            new->next = NULL;

            printf("Integer inserted successfully\n");
        }

        else if (choice == 3)
        {
            int position;
            while (1)
            {
                printf("Enter the position: ");
                scanf("%d", &position);
                if ((0 < position) && (position <= number_of_nodes(head) + 1))
                    break;
                printf("Invalid position\n");
            }

            Node* new = (Node*) malloc(sizeof (Node));
            if (new == NULL)
            {
                printf("Unsuccessful allocation\n");
                exit(EXIT_FAILURE);
            }

            printf("Enter the integer: ");
            scanf("%d", &(new->num));

            if (position == 1)
            {
                new->next = head;
                new->previous = NULL;
                if (new->next)
                    (new->next)->previous = new;
                head = new;
            }

            else
            {
                Node* current = head;
                for (int i = 0; i < position - 2; i++)
                    current = current->next;
                new->next = current->next;
                current->next = new;
                new->previous = current;
                if (new->next)
                    (new->next)->previous = new;
            }

            printf("Integer inserted successfully\n");
        }

        else if (choice == 4)
        {
            if (head == NULL)
            {
                printf("The list is currently empty\n");
                continue;
            }

            Node* temp_node = head;
            head = head->next;
            free(temp_node);
            if (head)
                head->previous = NULL;

            printf("Integer deleted successfully\n");
        }

        else if (choice == 5)
        {
            if (head == NULL)
            {
                printf("The list is currently empty\n");
                continue;
            }
            Node* current = head;
            while ((current->next)->next)
                current = current->next;
            free(current->next);
            current->next = NULL;

            printf("Integer deleted successfully\n");
        }

        else if (choice == 6)
        {
            if (head == NULL)
            {
                printf("The list is currently empty\n");
                continue;
            }

            int position;
            while (1)
            {
                printf("Enter the position: ");
                scanf("%d", &position);
                if ((0 < position) && (position <= number_of_nodes(head)))
                    break;
                printf("Invalid position\n");
            }

            if (position == 1)
            {
                Node* temp_node = head;
                head = head->next;
                free(temp_node);
                if (head)
                    head->previous = NULL;

                printf("Integer deleted successfully\n");
            }

            else
            {
                Node* current = head;
                for (int i = 0; i < position - 2; i++)
                    current = current->next;
                Node* temp_node = current->next;
                current->next = (current->next)->next;
                if (current->next)
                    (current->next)->previous = current;
                free(temp_node);

                printf("Integer deleted successfully\n");
            }
        }

        else if (choice == 7)
        {
            if (head == NULL)
            {
                printf("The list is currently empty\n");
                continue;
            }

            Node* current = head;
            while (current)
            {
                printf("%d ", current->num);
                current = current->next;
            }
            printf("\n");
        }

        else if (choice ==0)
        {
            if (head == NULL)
            {
                printf("The list is currently empty\n");
                continue;
            }

            Node* current = head;
            while (current->next)
                current = current->next;
            while (current)
            {
                printf("%d ", current->num);
                current = current->previous;
            }
            printf("\n");
        }

        else if (choice == 9)
        {
            break;
        }
    }

    while (head)
    {
        Node* temp_node = head->next;
        free(head);
        head = temp_node;
    }

    printf("\n");
    return 0;
}

int number_of_nodes(Node* head)
{
    int number_of_nodes = 0;

    while (head)
    {
        head = head->next;
        (number_of_nodes)++;
    }

    return number_of_nodes;
}
}
