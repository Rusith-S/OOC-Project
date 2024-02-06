//Account class
class Account{
	
	protected : 
	
	char name[20];
    char address[30];
    char dob[10];
	int contactNumber;
	char email[30];
	

	public:
	
	Account();	    
    void addAccountDetails();
	void UpdateAccount();
	~Account;

};