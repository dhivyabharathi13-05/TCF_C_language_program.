#include <stdio.h>


struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct Student s1;

    
    printf("Enter student ID: ");
    scanf("%d", &s1.id);

    printf("Enter student name: ");
    scanf("%s", s1.name);

    printf("Enter student marks: ");
    scanf("%f", &s1.marks);

    
    printf("\n--- Student Details ---\n");
    printf("ID: %d\n", s1.id);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}
