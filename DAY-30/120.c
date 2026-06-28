// program to Develop complete mini project using arrays, strings and functions


// employee management system 



#include <stdio.h>
#include <string.h>

#define MAX 100
#define TOTAL_DAYS 30

struct Employee
{
    int id;
    char name[50];
    char rank[30];
    int attendance;

    float basicSalary;
    float hra;
    float da;
    float deduction;
    float netSalary;
};

struct Employee emp[MAX];
int n = 0;

void addEmployee();
void calculateSalary();
void displayEmployees();
void searchEmployee();

int main()
{
    int choice;

    do
    {
        printf("\n===========================================\n");
        printf("     EMPLOYEE MANAGEMENT SYSTEM\n");
        printf("===========================================\n");
        printf("1. Add Employee\n");
        printf("2. Calculate Salary\n");
        printf("3. Display Employees\n");
        printf("4. Search Employee\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addEmployee();
                break;

            case 2:
                calculateSalary();
                break;

            case 3:
                displayEmployees();
                break;

            case 4:
                searchEmployee();
                break;

            case 5:
                printf("\nThank You!\n");
                break;

            default:
                printf("\nInvalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}

void addEmployee()
{
    printf("\nEmployee %d\n", n + 1);

    printf("Enter Employee ID : ");
    scanf("%d", &emp[n].id);

    printf("Enter Employee Name : ");
    scanf("%s", emp[n].name);

    printf("\nAvailable Ranks:\n");
    printf("CEO\n");
    printf("GeneralManager\n");
    printf("Manager\n");
    printf("TeamLeader\n");
    printf("SeniorDeveloper\n");
    printf("Developer\n");
    printf("Tester\n");
    printf("HR\n");
    printf("Accountant\n");
    printf("SalesExecutive\n");
    printf("SupportEngineer\n");
    printf("Receptionist\n");
    printf("OfficeAssistant\n");
    printf("SecurityGuard\n");
    printf("Intern\n");

    printf("\nEnter Rank : ");
    scanf("%s", emp[n].rank);

    printf("Enter Attendance (0-30 Days): ");
    scanf("%d", &emp[n].attendance);

    n++;

    printf("\nEmployee Added Successfully!\n");
}

void calculateSalary()
{
    int i;

    for(i = 0; i < n; i++)
    {
        if(strcmp(emp[i].rank,"CEO")==0)
            emp[i].basicSalary = 150000;

        else if(strcmp(emp[i].rank,"GeneralManager")==0)
            emp[i].basicSalary = 100000;

        else if(strcmp(emp[i].rank,"Manager")==0)
            emp[i].basicSalary = 70000;

        else if(strcmp(emp[i].rank,"TeamLeader")==0)
            emp[i].basicSalary = 55000;

        else if(strcmp(emp[i].rank,"SeniorDeveloper")==0)
            emp[i].basicSalary = 50000;

        else if(strcmp(emp[i].rank,"Developer")==0)
            emp[i].basicSalary = 40000;

        else if(strcmp(emp[i].rank,"Tester")==0)
            emp[i].basicSalary = 35000;

        else if(strcmp(emp[i].rank,"HR")==0)
            emp[i].basicSalary = 38000;

        else if(strcmp(emp[i].rank,"Accountant")==0)
            emp[i].basicSalary = 42000;

        else if(strcmp(emp[i].rank,"SalesExecutive")==0)
            emp[i].basicSalary = 36000;

        else if(strcmp(emp[i].rank,"SupportEngineer")==0)
            emp[i].basicSalary = 32000;

        else if(strcmp(emp[i].rank,"Receptionist")==0)
            emp[i].basicSalary = 25000;

        else if(strcmp(emp[i].rank,"OfficeAssistant")==0)
            emp[i].basicSalary = 22000;

        else if(strcmp(emp[i].rank,"SecurityGuard")==0)
            emp[i].basicSalary = 18000;

        else if(strcmp(emp[i].rank,"Intern")==0)
            emp[i].basicSalary = 15000;

        else
            emp[i].basicSalary = 20000;

        // HRA = 10% of Basic Salary
        emp[i].hra = emp[i].basicSalary * 0.10;

        // DA = 5% of Basic Salary
        emp[i].da = emp[i].basicSalary * 0.05;

        // Deduction based on absent days
        emp[i].deduction = ((TOTAL_DAYS - emp[i].attendance) *
                           (emp[i].basicSalary / TOTAL_DAYS));

        // Net Salary
        emp[i].netSalary = emp[i].basicSalary +
                           emp[i].hra +
                           emp[i].da -
                           emp[i].deduction;
    }

    printf("\nSalary Calculated Successfully!\n");
}

void displayEmployees()
{
    int i;

    if(n == 0)
    {
        printf("\nNo Employee Records Found!\n");
        return;
    }

    printf("\n=============================================================================================================\n");
    printf("ID\tName\tRank\t\tAttendance\tBasic\tHRA\tDA\tDeduction\tNet Salary\n");
    printf("=============================================================================================================\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%s\t%s\t%d\t\t%.0f\t%.0f\t%.0f\t%.0f\t\t%.0f\n",
               emp[i].id,
               emp[i].name,
               emp[i].rank,
               emp[i].attendance,
               emp[i].basicSalary,
               emp[i].hra,
               emp[i].da,
               emp[i].deduction,
               emp[i].netSalary);
    }
}

void searchEmployee()
{
    int id, i, found = 0;

    printf("\nEnter Employee ID to Search: ");
    scanf("%d", &id);

    for(i = 0; i < n; i++)
    {
        if(emp[i].id == id)
        {
            printf("\n========== EMPLOYEE DETAILS ==========\n");
            printf("Employee ID      : %d\n", emp[i].id);
            printf("Employee Name    : %s\n", emp[i].name);
            printf("Rank             : %s\n", emp[i].rank);
            printf("Attendance       : %d Days\n", emp[i].attendance);
            printf("Basic Salary     : %.2f\n", emp[i].basicSalary);
            printf("HRA              : %.2f\n", emp[i].hra);
            printf("DA               : %.2f\n", emp[i].da);
            printf("Salary Deduction : %.2f\n", emp[i].deduction);
            printf("Net Salary       : %.2f\n", emp[i].netSalary);

            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("\nEmployee Not Found!\n");
    }
}