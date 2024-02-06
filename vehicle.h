class Vehicle
{
    private:
       char vehicleID[10];
       char vehicleType[20];
       float vHoursParked;

    public:
        Vehicle();
        void addVehicleDetails();
        void displayVehicleDetails();
       ~Vehicle();
}