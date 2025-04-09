#include <stdio.h>
#include <stdlib.h>

// Node structure for the linked list
typedef struct Node {
    int data;
    struct Node *next;
} Node;

// Function prototypes
void insert(Node **head, int data);
int max(Node *head);
void print_nodes(Node *head);
int main(int argc, char **argv) {
    if (argc >= 2) {
        Node *head = NULL;

        // Insert each command line argument into the linked list
        for (int i = 1; i < argc; i++) {
            insert(&head, atoi(argv[i]));
        }

        print_nodes(head);
        // Find the maximum value in the linked list
        int maximum = max(head);

        printf("max is %d\n", maximum);
        return maximum;
    } else {
        printf("Usage: %s <num1> <num2> ... <numN>\n", argv[0]);
        return 1;
    }
}

// Insert a new node with given data at the end of the linked list
void insert(Node **head, int data) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
    } else {
        Node *temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Find the maximum value in the linked list
int max(Node *head) {
    int maximum = head->data;

    while (head != NULL) {
        if (head->data > maximum) {
            maximum = head->data;
        }
        head = head->next;
    }

    return maximum;
}

//print the values of the node's content
void    print_nodes(Node *head)
{
    if (!head)
        exit (1);
    while (head != NULL)
    {
        printf("content is:  %d\n",head->data);
        head  = head->next;
    }
}
