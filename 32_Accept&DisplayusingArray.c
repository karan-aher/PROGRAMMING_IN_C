//Implement 'Array of Structure in C (e.g.-Accept and Display 10 Employee information using structure).
#include <stdio.h>

// Defining the structure for Employee
struct Employee {
    int empID;
    char name[50];
    float salary;
};

// Function to accept employee details
void acceptEmployeeDetails(struct Employee emp[], int n) {
    for(int i = 0; i < n; i++) {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &emp[i].empID);
        printf("Name: ");
        getchar();  // to consume the newline character left by scanf
        fgets(emp[i].name, sizeof(emp[i].name), stdin);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
        printf("\n");
    }
}

// Function to display employee details
void displayEmployeeDetails(struct Employee emp[], int n) {
    printf("\nEmployee Details:\n");
    for(int i = 0; i < n; i++) {
        printf("Employee %d\n", i + 1);
        printf("Employee ID: %d\n", emp[i].empID);
        printf("Name: %s", emp[i].name);
        printf("Salary: %.2f\n", emp[i].salary);
        printf("----------------------\n");
    }
}

int main() {
    struct Employee employees[10]; // Array of 10 Employee structures

    acceptEmployeeDetails(employees, 10);
    displayEmployeeDetails(employees, 10);

    return 0;
}
