#include <stdio.h>
#define MAX 5
int queue[MAX];
int front = -1, rear = -1;
void enqueue() {
    int value;
    if(rear == MAX-1) {
    printf("Queue Overflow\n");
}
    else {
    printf("Enter element: ");
    scanf("%d",&value);
    if(front == -1)
    front = 0;
    rear++;
    queue[rear] = value;
}
}
void dequeue() {
    if(front == -1 || front > rear) {
    printf("Queue Underflow\n");
}
    else {
    printf("Deleted element: %d\n", queue[front]);
    front++;
}
}
void display() {
    int i;
    if(front == -1) {
    printf("Queue is empty\n");
}
    else {
    printf("Queue elements:\n");
    for(i = front; i <= rear; i++) {
    printf("%d ", queue[i]);
}
    printf("\n");
}
}
int main() {
    int choice;
    while(1) {
    printf("\n1.Enqueue\n2.Dequeue\n3.Display\n");
    printf("Enter choice: ");
    scanf("%d",&choice);
    switch(choice) {
        case 1: enqueue(); break;
        case 2: dequeue(); break;
        case 3: display(); break;
    default: printf("Invalid choice\n");
}
}
    return 0;
}
