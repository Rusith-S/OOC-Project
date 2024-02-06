class Offer
{
  private :
    char offerName[20];
    double offerPrecentage;
    double discount;
    double initialAmount;

  public :
    Offer();
    Offer(char oName[] , double oPrecentage , double iAmount);
    double calcOffer(double iAmount);
    void displayOfferDetails();
    void displayDiscountAmount();
    
};

