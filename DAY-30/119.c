// program to Create mini employee management system
#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    char department[50];
    float salary;
};

int main() {
    struct Employee emp[100];
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    
    for (i = 0; i < n; i++) {
        printf("\nEnter details of Employee %d:\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &emp[i].id);

        printf("Employee Name: ");
        scanf("%s", emp[i].name);

        printf("Department: ");
        scanf("%s", emp[i].department);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

  
    printf("\n========== EMPLOYEE RECORDS ==========\n");
    printf("ID\tName\tDepartment\tSalary\n");

    for (i = 0; i < n; i++) {
        printf("%d\t%s\t%s\t\t%.2f\n",
               emp[i].id,
               emp[i].name,
               emp[i].department,
               emp[i].salary);
    }

    return 0;
}