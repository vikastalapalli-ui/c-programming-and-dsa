#include <stdio.h>

// Structure definition
struct Student {
    int id;
    char name[50];
    float cgpa;
};

int main() {
    struct Student s1 = {101, "Tanveer", 9.4};
    
    printf("Student Details:\n");
    printf("ID: %d\n", s1.id);
    printf("Name: %s\n", s1.name);
    printf("CGPA: %.2f\n", s1.cgpa);
    
    return 0;
}
