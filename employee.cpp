#include "employee.h"
#include<string.h>
using namespace std;

Employee::Employee()
{
    strcpy(empID,"e14690431");
    empSalary = 100000.00;

}

void Employee::Employee(char eName[], char add[], char dob[], int conNum, char mail[], char eId[], float eSalary)
{
    strcpy(eName,"Sugath");
    strcpy(add,"No 28, Flower Road, Colombo");
    strcpy(dob,"27-05-1985");
    conNum = 0765740152;
    strcpy(mail,"sugathd@dmail.com");
    strcpy(eId,"e145263984");
    eSalary = 75000.00
}



