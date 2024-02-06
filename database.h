class Database
{
     private:
     Location *loc;
     char empFullName[20];
     char empNationalID[7];
     char vehicleOwnerID[8];
     char vehicleID[7];
     float PreviousPayments;
     char transactionID[5];

    public :
    	
    Database ();
    void storeEmpData();
    void storeMemData();
    void storeVehiData();
    void storePayData();
    ~Database;
};