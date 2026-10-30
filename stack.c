#include<stdio.h>
#define MAXSIZE 5

struct stack {
    int stk[MAXSIZE];
    int top;
};

typedef struct stack STACK;
STACK s;

void push(void);
int pop(void);
void display(void);

int main() {
    int choice1;
    s.top = -1;

    printf("STACK OPERATOR\n");

    while(1) {
        printf("---------------------|n");
        printf("1--> Push\n");
        printf("2--> Pop\n");
        printf("3--> Display\n");
        printf("4--> Exit\n");
        printf("---------------------\n");

        printf("Enter  your choice:");
        scanf("%d",&choice);
        switch (choice) {
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
                return 0;

            default:
                printf("Invalid choice\n");
        }    

    }
}

void push(void) 
{
    int num;

    if (s.top == MAXSIZE - 1) {
       printf("Stack is full\n");
       return;
    }

    printf("Enter the element to be pushed:");
    scanf("%d", &num);

    s.top = s.top + 1;
    s.stk[s.top] = num;

}

int pop(void)
{
    int num;

    if (s.top == -1) {
        printf("Stack is empty\n");
        return -1;
    }

    num = s.stk[s.top];
    printf("Popped element is %d\n", num);
    s.top = s.top -1;

    return num;
}

void display(void)
{
    int i;

    if (s.top == -1) {
        printf("stackmis empty\n");
        return;
    }

    printf("\nThe status of stack is:\n");

    for (i = s.top; i>=0; i--) {
        printf("%d\n", s.stk[i]);
    }

    printf("\n");

}


