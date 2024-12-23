#include <stdio.h>

#define MAX 5  // Define the maximum size of the stack

int stack[MAX];  // Stack array
int top = -1;    // Initialize top of the stack to -1 (indicating empty stack)

// Function to push an element onto the stack
void push(int value) {
    if (top == MAX - 1) {
        // If the stack is full
        printf("Stack Overflow! Cannot push %d\n", value);
    } else {
        // Increment top and add the value to the stack
        top++;
        stack[top] = value;
        printf("%d pushed into the stack.\n", value);
    }
}

// Function to pop an element from the stack
int pop() {
    if (top == -1) {
        // If the stack is empty
        printf("Stack Underflow! No elements to pop.\n");
        return -1;
    } else {
        // Return the top element and decrement the top index
        int value = stack[top];
        top--;
        return value;
    }
}

// Function to display the remaining elements of the stack
void display() {
    if (top == -1) {
        // If the stack is empty
        printf("Stack is empty.\n");
    } else {
        // Print the stack elements from top to bottom
        printf("Remaining stack elements are: ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    // Push some values into the stack
    push(10);  // Push 10
    push(20);  // Push 20
    push(30);  // Push 30

    // Display the remaining elements in the stack
    display();  // Should print: 30 20 10

    // Pop one element from the stack
    int poppedValue = pop();  // Pops 30
    printf("Popped value: %d\n", poppedValue);

    // Display the remaining elements in the stack after popping
    display();  // Should print: 20 10

    return 0;
}

