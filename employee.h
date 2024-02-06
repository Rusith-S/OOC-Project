class Employee: public Account{

    private:
       char empID[10];
       float empSalary;
       Location *location[size];

    public:
       Employee();
       Employee(char eName[], char add[], char dob, int conNum, char mail[], char eId[], float eSalary);
       void addEmpDetails();
       void displayEmpDetails();
       float calcSallary();
       ~Employee();
};
