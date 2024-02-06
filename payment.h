class Payment
{
  private :
    char cardType[10];
    int cardNumber;
    double intialAmount;
    double offerAmount;
    double paymentAmount;
    Offer *offer;//uni directional Association
    
    
  public :
    Payment();
    Payment(char cType[] , int cNumber , double iAmount , double oAmount);
    void addCardDetails(char cType[] , int cNumber);
    double calcPayment(double iAmount , double oAmount);
    void displayCardDetails();
    void displayPaymentAmount();  
};