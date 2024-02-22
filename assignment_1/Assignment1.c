    #include <stdio.h>

#define MAX_SIZE 10

int queue[MAX_SIZE];
int isFilled[MAX_SIZE] = {0}; // 0 indicates empty, 1 indicates filled
int front = -1, rear = -1;

void add_element(int data);
void remove_element(int position);
void find_and_remove_element(int data);
void print_queue();

int main() {
    int choice, data, position;

    do {
        printf("\n1. Add Element\n");
        printf("2. Remove Element by Index\n");
        printf("3. Find and Remove Element by Value\n");
        printf("4. Print Queue\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element to add: ");
                scanf("%d", &data);
                add_element(data);
                break;
            case 2:
                printf("Enter the position to remove (0-based): ");
                scanf("%d", &position);
                remove_element(position);
                break;
            case 3:
                printf("Enter the element to find and remove: ");
                scanf("%d", &data);
                find_and_remove_element(data);
                break;
            case 4:
                print_queue();
                break;
            case 0:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 0);

    return 0;
}

void add_element(int data) {
    if (rear == MAX_SIZE - 1) {
        printf("Queue is full. Cannot add more elements.\n");
    } else {
        if (front == -1) {
            front = 0;
        }
        rear++;
        queue[rear] = data;
        isFilled[rear] = 1;
        printf("Element %d added to the queue.\n", data);
    }
}

void remove_element(int position) {
    if (front == -1 || front > rear || position < 0 || position > rear) {
        printf("Invalid position to remove element.\n");
    } else {
        for (int i = position; i < rear; i++) {
            queue[i] = queue[i + 1];
            isFilled[i] = isFilled[i + 1];
        }
        rear--;
        if (rear == -1) {
            front = -1; // Reset front when queue becomes empty
        }
        printf("Element at position %d removed from the queue.\n", position);
    }
}

void find_and_remove_element(int data) {
    int position = -1;
    for (int i = front; i <= rear; i++) {
        if (queue[i] == data) {
            position = i;
            break;
        }
    }

    if (position != -1) {
        remove_element(position);
    } else {
        printf("Element with value %d not found in the queue.\n", data);
    }
}

void print_queue() {
    if (front == -1) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}
