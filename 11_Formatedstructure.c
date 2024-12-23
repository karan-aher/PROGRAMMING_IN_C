#include <stdio.h>

int main() {
    char firstName[20], middleName[20], lastName[20], dob[15], branchCollege[50];
    int rollNo;
    float percentage;

    printf("Enter First Name: ");
    scanf("%s", firstName);
    printf("Enter Middle Name: ");
    scanf("%s", middleName);
    printf("Enter Last Name: ");
    scanf("%s", lastName);
    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);
    printf("Enter Percentage: ");
    scanf("%f", &percentage);
    printf("Enter Date of Birth (DD/MM/YYYY): ");
    scanf("%s", dob);
    printf("Enter Branch and College: ");
    getchar();
    fgets(branchCollege, sizeof(branchCollege), stdin);

    printf("\n------------------------------------------------------\n");
    printf("| Name           | %s %s %s\n", firstName, middleName, lastName);
    printf("| Roll No        | %d\n", rollNo);
    printf("| Percentage     | %.2f\n", percentage);
    printf("| Date of Birth  | %s\n", dob);
    printf("| Branch,College | %s", branchCollege);
    printf("------------------------------------------------------\n");

    return 0;
}
