//Account class implementation
#include "account.h"
#include<string.h>
Account::Account() 
   {
    strcpy(name,"");
    strcpy(address,"");
    strcpy(dob, "");
    contactNumber = 0;
    strcpy(email,"");
   };

   void Account::addAccountDetails(){
   };

   void Account::UpdateAccount(){
   };
  
   Account::~Account(){};
