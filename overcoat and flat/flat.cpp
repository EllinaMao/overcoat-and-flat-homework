#include "flat.h"

Flat::Flat()
{
    mApartmentNumber = 0;
    mFloorNumber = 0;
    mApartmentArea = 0.0;
    mApartmentCost = 0.0;

}

Flat::Flat(const double apartmentArea, const double apartmentCost, const int floorNumber, const int flatNumber)
{

    mFloorNumber = floorNumber;
    mApartmentNumber = flatNumber;
    mApartmentArea = apartmentArea;
    mApartmentCost = apartmentCost;

}


Flat& Flat::operator=(const Flat& f)
{
    if (this == &f) {
        return *this; 
    }

    mApartmentNumber = f.mApartmentNumber;
    mFloorNumber = f.mFloorNumber;

    mApartmentArea = f.mApartmentArea;
    mApartmentCost = f.mApartmentCost;


    return *this;
}


void Flat::PrintInfo() const  
{  

    cout << "Flat number: " << mApartmentNumber
        << "\nFloor number: " << mFloorNumber
        << "\nApartment cost: " << mApartmentCost<<"$"
        << "\nApartment area: "<<mApartmentArea<<" square meters" << endl;



   cout <<"-------------------------------------------"<< endl;
}
