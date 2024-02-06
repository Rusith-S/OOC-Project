#include "payment.h"
#include <string.h>

Payment::Payment ()
{
  strcpy(cardType,"");
  cardNumber=0;
  intialAmount=0;
  offerAmount=0;
  paymentAmount=0;
}

Payment::Payment (char cType[] , int cNumber , double iAmount , double oAmount)
{
  strcpy(cType,"Debit");
  cardNumber=22305645;
  intialAmount=500;
  offerAmount = 50;
}
