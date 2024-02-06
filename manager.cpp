#include "manager.h"
#include<string.h>
Manager::Manager(){
	strcpy(name," ");
    strcpy(address," ");
    strcpy(dob, " ");
    conatcNumber = 0;
    strcpy(email,"");
    strcpy(ManagerPassword,"");
    strcpy(ManagerID,"");
    strcpy(ReportID,"");
}


	void Manager::GenerateEmpReports(Database *D1){
	};
 
    void Manager::GenerateVehiReports(Database *D1){
	};
    	
    void Manager::GeneratePayReports(Database *D1){
	};
    	
    	
    void Manager::AddEmployees(){
	};
    
    void Manager::RemoveEmployees(){
	};

    Manager::~Manager(){};
