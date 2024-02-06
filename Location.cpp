#include"Location.h"
#include<string.h>
using namespace std;

Location::Location()
{
    strcpy( locationID,"RR001");
    strcpy(locationName,"Colombo");
    strcpy(locationPhoneNum,"0712435647") 
    

}

Location(char lId[], char lName[], Employee *emp, int lPhoneNum[]);