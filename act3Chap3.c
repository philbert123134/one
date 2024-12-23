
#include <stdio.h>

#define MAX 5  // Define the maximum size of the stack

int stack[MAX];  // Stack array
int top = -1;    // Initialize top of the stack to -1 (indicating empty stack)

// Function to push an element onto the stack
void push(int value) {
    if (top == MAX - 1) {
        printf("Stack Overflow! Cannot push %d\n", value);
    } else {
        top++;
        stack[top] = value;
        printf("%d pushed into the stack.\n", value);
    }
}

// Function to pop an element from the stack
int pop() {
    if (top == -1) {
        printf("Stack Underflow! No elements to pop.\n");
        return -1;
    } else {
        int value = stack[top];
        top--;
        return value;
    }
}

// Function to print the top element of the stack
void printTop() {
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Top element is: %d\n", stack[top]);
    }
}

// Function to print all elements of the stack
void printAll() {
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements are: ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice, value;

    // Menu-driven loop
    do {
        printf("\n--- Stack Operations ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Print Top Element\n");
        printf("4. Print All Elements\n");
        printf("5. Quit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Push operation
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;

            case 2:
                // Pop operation
                value = pop();
                if (value != -1) {
                    printf("Popped value: %d\n", value);
                }
                break;

            case 3:
                // Print top element
                printTop();
                break;

            case 4:
                // Print all elements
                printAll();
                break;

            case 5:
                // Quit program
                printf("Exiting program...\n");
                break;

            default:
                // Invalid option
                printf("Invalid choice! Please enter a number between 1 and 5.\n");
                break;
        }

    } while (choice != 5);  // Continue until the user selects quit

    return 0;
}
