#pragma once
#include <iostream>
using namespace std;

#ifndef TASK2
#define TASK2

class Flat {
private:

    double mApartmentArea;
    double mApartmentCost;
    int mFloorNumber;
    int mApartmentNumber;


public:

    Flat();
    Flat(const double apartmentArea, const double apartmentCost, const int floorNumber, const int apartmentNumber);
    Flat(const Flat& f) = default;
    Flat& operator=(const Flat& f);
    void PrintInfo() const;


    void SetFloorNumber(const int floorNumber) { mFloorNumber = floorNumber; }
    void SetApartmentNumber(const int apartmentNumber) {mApartmentNumber = apartmentNumber; }
    void SetApartmentArea(const double apartmentArea) {mApartmentArea = apartmentArea; }
    void SetApartmentCost(const double apartmentCost) {mApartmentCost = apartmentCost; }


    int GetFloorNumber() const { return mFloorNumber;}
    int GetApartmentNumber() const { return mApartmentNumber;}
    double GetApartmentArea() const { return mApartmentArea; }
    double GetApartmentCost() const { return mApartmentCost; }

    friend bool operator==(const Flat& f1, const Flat& f2) {return f1.mApartmentArea == f2.mApartmentArea;}
    friend bool operator>(const Flat& f1, const Flat& f2) {return f1.mApartmentCost > f2.mApartmentCost;}
};

#endif//TASK2