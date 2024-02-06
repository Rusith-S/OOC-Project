#include <iostream>
#include <cstring>
#include "manager.h"
#include "account.h"
#include "member.h"
#include "offer.h"
#include "customerserviceagent.h"
#include "vehicle.h"
#include "payment.h"
#include "employee.h"
#include "database.h"
#include "location.h"
using namespace std;
int main() {
  char ch;

    Employee *e1=new Employee;
     
     e1->addEmpDetails();
     e1->displayEmpDetails();

     delete e1;

     Vehicle *v1=new Vehicle();
    
    v1->addVehicleDetails();
    v1->displayVehicleDetails();

    delete v1;

    Location * L1;
    CustomerServiceAgent * C1;
    C1->Generatelocationreports(L1);
    C1->Generateagentreport(L1);



	
	    //Creating myMember object
	  Member * myMember;
	  myMember = new Member ();
	  myMember -> displayDetails();
	
	  //Creating m1 object 
	  Member *m1;
	  m1 = new Member();
	  m1->printMemberDetails();
	
	  //Creating dynamic object for Payment
	  Payment *payment;
	  payment = new Payment();
	  payment -> displayCardDetails();
	  
	  //Creating dynamic object for offer 
	  Offer * offer;
	  offer = new Offer();
	  offer -> displayOfferDetails();

  


    //Creating dynamic object for Database
	Database *D1=new Database;

	//Creating dynamic object for Account
	Account *A1= new Account;
	
	//Creating dynamic object for Manager
	Manager *M1= new Manager;
	
	//Creating dynamic object for Database
	Database *D1=new Database;
	
	
	M1->GenerateEmpReports(D1); 
	M1->GeneratePayReports(D1);            
	M1->GenerateVehiReports(D1);
	
	delete A1;
	delete M1;
	delete D1;
	delete payment;
    delete offer;
    delete m1;
    delete myMember;

  return 0;
}