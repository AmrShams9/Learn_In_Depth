#include <stdio.h>
#include <stdlib.h>

struct SEmployee
{
    char EmployeeName[50];
    int EmployeeID;
};

int main(void)
{
    struct SEmployee info = {"Mostafa", 12};
    struct SEmployee *PtrS = &info;

    printf("Employee Name: %s\n", PtrS->EmployeeName);
    printf("Employee Name: %d\n", PtrS->EmployeeID);
    return EXIT_SUCCESS;
}