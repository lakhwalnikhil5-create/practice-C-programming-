#include <stdio.h> 
struct student {
    char firstname[50];
    int roll;
    float marks;
} s[5];
int main() 
{
    int i;
    printf("Enter the information of students:\n");
    for (i = 0; i < 5; i++) {
        s[i].roll = i + 1;
        printf("\nfor roll number %d\n", s[i].roll);
        printf("Enter first name: ");
        scanf("%49s", s[i].firstname);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\nDisplaying information:\n");
    for (i=0; i<5; i++) {
        printf("\nroll number: %d\n", s[i].roll);
        printf("First name: ");
        puts(s[i].firstname);
        printf("Marks: %.1f\n", s[i].marks);
    }
    return 0;
}
