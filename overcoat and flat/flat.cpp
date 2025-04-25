#include "flat.h"

Flat::Flat()
{
    mApartmentNumber = 0;
    mFloorNumber = 0;
    mAdress = copy_str("Unkown");
    mApartmentArea = 0.0;
    mApartmentCost = 0.0;

}

Flat::Flat(const double apartmentArea, const double apartmentCost, const char* adress, const int floorNumber, const int apartmentNumber)
{

    mFloorNumber = floorNumber;
    mApartmentNumber = apartmentNumber;
    mAdress = copy_str(adress);
    mApartmentArea = apartmentArea;
    mApartmentCost = apartmentCost;

}

Flat::Flat(const Flat& f)
{
    mApartmentNumber = f.mApartmentNumber;
    mFloorNumber = f.mFloorNumber;
    mAdress = copy_str(f.mAdress);

    mApartmentArea = f.mApartmentArea;
    mApartmentCost = f.mApartmentCost;
}

Flat::Flat(Flat&& f) noexcept
{
    mApartmentNumber = f.mApartmentNumber;
    mFloorNumber = f.mFloorNumber;
    mAdress = f.mAdress;
    mApartmentArea = f.mApartmentArea;
    mApartmentCost = f.mApartmentCost;

    f.mAdress = nullptr;
}


Flat& Flat::operator=(const Flat& f)
{
    if (mAdress) {
        delete[] mAdress;
    }
    if (this == &f) {
        return *this; 
    }

    mApartmentNumber = f.mApartmentNumber;
    mFloorNumber = f.mFloorNumber;
    mAdress = copy_str(f.mAdress);

    mApartmentArea = f.mApartmentArea;
    mApartmentCost = f.mApartmentCost;


    return *this;
}

Flat& Flat::operator=(Flat&& f) noexcept
{
    if (this == &f) {
        return *this;
    }

    if (mAdress) {
        delete[] mAdress;
    }

    mApartmentNumber = f.mApartmentNumber;
    mFloorNumber = f.mFloorNumber;
    mAdress = f.mAdress;

    mApartmentArea = f.mApartmentArea;
    mApartmentCost = f.mApartmentCost;

    f.mAdress = nullptr;

    return *this;
}


void Flat::PrintInfo() const  
{  

    cout << "Flat adress: " << mAdress
        << "\nFlat number: " << mApartmentNumber
        << "\nFloor number: " << mFloorNumber
        << "\nApartment cost: " << mApartmentCost<<"$"
        << "\nApartment area: "<<mApartmentArea<<" square meters" << endl;

   cout <<"-------------------------------------------"<< endl;
}

Flat::~Flat()
{
    if (mAdress) {
        delete[] mAdress;
    }
}
