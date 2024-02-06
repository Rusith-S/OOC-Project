#include "offer.h"
#include <string.h>
Offer :: Offer()
{
  strcpy(offerName,"");
  initialAmount=0;
  offerPrecentage=0;
}

Offer :: Offer(char oName[] , double oPrecentage , double iAmount)
{
  strcpy(offerName,"4 hour offer");
  initialAmount=500;
  offerPrecentage= 5;
}

