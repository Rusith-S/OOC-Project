//Manager class
class Manager: public Account{
	
	private:
		
   char ManagerPassword[10];
   char	ManagerID[10];
   char ReportID[10];
   
	public:

   Manager();
   
    void AddManagerDetails();

	void GenerateEmpReports(Database *D1);
	
	void GenerateVehiReports(Database *D1);
	
	void GeneratePayReports(Database *D1);
	
	void AddEmployees();
	
	void RemoveEmployees();
	
	~Manager;
	
};
