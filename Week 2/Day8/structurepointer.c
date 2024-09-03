#include <stdio.h>
#include <string.h>

// Define the Student structure
struct Student {
    char name[50];
    int age;
};

// Function to modify the student's information using a pointer
void modifyStudent(struct Student *studentPtr) {
    strcpy(studentPtr->name, "John Doe");  // Modify the name
    studentPtr->age = 22;  // Modify the age
}

int main() {
    // Create a Student structure and initialize it
    struct Student student1;
    strcpy(student1.name, "Alice");
    student1.age = 20;

    // Print original details
    printf("Before modification:\n");
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);

    // Pass the structure to the function using a pointer
    modifyStudent(&student1);

    // Print modified details
    printf("After modification:\n");
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);

    return 0;
}
