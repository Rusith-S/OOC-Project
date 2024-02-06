#include "database.h"
#include <string.h>
Database :: Database ()
{
    strcpy(empFullName,"");
    strcpy(empNationalID,"");
    strcpy(vehicleOwnerID, "");
    strcpy(vehicleID, "");
    PreviousPayments = 0;
    strcpy(transactionID, "");
}

Database::storeEmpData(){
};

Database::storeMemData(){
};

Database::storeVehiData(){
};

Database::storePayData(){
};
