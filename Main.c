#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

int isFull() {
    return top == MAX - 1;
}

int isEmpty() {
    return top == -1;
}

void push(int val) {
    if (isFull()) {
        printf("Stack overflow! Cannot push element.\n");
    } else {
        stack[++top] = val;
        printf("%d pushed to stack\n", val);
    }
}

void pop() {
    if (isEmpty()) {
        printf("Stack underflow! Cannot pop element.\n");
    } else {
        printf("%d popped from stack\n", stack[top--]);
    }
}

void peek() {
    if (isEmpty()) {
        printf("Stack is empty.\n");
    } else {
        printf("Top element is %d\n", stack[top]);
    }
}

void display() {
    if (isEmpty()) {
        printf("Stack is empty.\n");
    } else {
        for (int i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    int op, val;

    while (1) {
        if (scanf("%d", &op) != 1) break;

        switch (op) {
            case 1: 
                if (scanf("%d", &val) != 1) break;
                push(val);
                break;
            case 2:
                pop();
                break;
            case 3: 
                peek();
                break;
            case 4: 
                if (isEmpty()) printf("Stack is empty.\n");
                else printf("Stack is not empty.\n");
                break;
            case 5: 
                display();
                break;
            case 6: 
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid operation\n");
                break;
        }
    }

    return 0;
}
