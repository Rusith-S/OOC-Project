//Member class
class Member : public Account{
protected:
      Payment *amount;
      char memberID[7];
      char memberPassword[10]; 
      Vehicle * vehicles[SIZE];
      


public:
     Member() {
       amount=new Payment;
       strcpy(memberID,"0000000");
       strcpy (memberPassword,"");
       strcpy (name,"");
       strcpy (address, "");
       strcpy (dob,"00/00/0000");
       contactNumber= 0000000000; 
       strcpy (email,"");
       }       
