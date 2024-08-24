#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};

struct node* top = NULL;

void push()
{
    int value;
    printf("Enter the value to push: ");
    scanf("%d", &value);
    
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
    new_node->data = value;
    new_node->next = top;
    top = new_node;
    
    printf("Element %d has been pushed to the stack.\n", value);
}

void pop()
{
    if (top == NULL)
    {
        printf("Stack is empty. Cannot perform pop operation.\n");
        return;
    }
    
    struct node* temp = top;
    top = top->next;
    printf("Element %d has been popped from the stack.\n", temp->data);
    free(temp);
}

void display()
{
    if (top == NULL)
    {
        printf("Stack is empty.\n");
        return;
    }
    
    struct node* temp = top;
    printf("Elements in the stack are: ");
    while (temp != NULL)
    {
        printf("%d \n", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    int choice;
    while (1)
    {
        printf("\n1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice.\n");
        }
    }
}



