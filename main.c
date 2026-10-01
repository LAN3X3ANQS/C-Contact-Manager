#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
};

void addStudent(struct Person person[], int *num_people);
void viewStudent(struct Person person[], int num_people);

int main(void) {
    
    // Create an array that can hold 5 Person records
    struct Person person[5];
    // Create a variable to keep track of how many people have been added
    int num_people = 0;
    
    addStudent(person , &num_people);
    viewStudent(person , num_people);

    
    printf("Number of people added: %d\n", num_people);

    return 0;
}

// Function definitions go here

// Add some people using your function
void addStudent(struct Person person[], int *num_people) {

        for (int i = 0; i < 5; i++) {
        char name[50];
        int age;

        printf("Name: ");
        scanf("%s", &name);

        printf("Age: ");
        scanf("%d", &age);

        strcpy(person[i].name, name);
        person[i].age = age;
       *num_people = *num_people + 1;

    }
}

// Display the people using your function
void viewStudent(struct Person person[], int num_people) {
    for (int i = 0; i < num_people; i++) {
        printf("Name: %s Age: %d\n", person[i].name, person[i].age);
    }
}