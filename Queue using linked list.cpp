#include <stdio.h>
#include <stdlib.h>

// Define a node structure
struct node {
    int data;
    struct node *next;
};

// Define front and rear pointers
struct node *front = NULL, *rear = NULL;

// Function to insert element in queue
void insertion_in_queue() {
    int item;
    printf("\nEnter the element to be inserted: ");
    scanf("%d", &item);
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = item;
    new_node->next = NULL;
    if (rear == NULL) {
        front = rear = new_node;
        return;
    }
    rear->next = new_node;
    rear = new_node;
}

// Function to delete element from queue
void deletion_in_queue() {
    if (front == NULL) {
        printf("\nQueue is empty.\n");
        return;
    }
    struct node *temp_node = front;
    front = front->next;
    if (front == NULL) {
        rear = NULL;
    }
    printf("\nDeleted element is %d\n", temp_node->data);
    free(temp_node);
}

// Function to display elements of queue
void display() {
    if (front == NULL) {
        printf("\nQueue is empty.\n");
        return;
    }
    struct node *temp_node = front;
    printf("\nElements in the queue are: ");
    while (temp_node != NULL) {
        printf("%d ", temp_node->data);
        temp_node = temp_node->next;
    }
    printf("\n");
}

int main() {
    int choice;
    while(1) {
        printf("\nQueue Menu\n");
        printf("1. insertion_in_queue\n");
        printf("2. deletion_in_queue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                insertion_in_queue();
                break;
            case 2:
                deletion_in_queue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("\nExiting...\n");
                exit(0);
            default:
                printf("\nInvalid choice.\n");
        }
    }
    return 0;
}
