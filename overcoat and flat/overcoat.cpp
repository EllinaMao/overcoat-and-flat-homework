#include "overcoat.h"

Overcoat::Overcoat()
{
	mCoatOwner = copy_str("Unkown");
	mCoatType = copy_str("Unkown");
	mCoatCost = 0.0;
}

Overcoat::Overcoat(const char* coatOwner, const char* coatType, const double coatCost)
{
	mCoatOwner = copy_str(coatOwner);
	mCoatType = copy_str(coatType);
	mCoatCost = coatCost;
}

Overcoat::Overcoat(const Overcoat& o)
{
    mCoatOwner = copy_str(o.mCoatOwner);
    mCoatType = copy_str(o.mCoatType);
    mCoatCost = o.mCoatCost;
}

Overcoat::Overcoat(Overcoat&& o) noexcept
{
	mCoatOwner = copy_str(o.mCoatOwner);
	mCoatType = copy_str(o.mCoatType);
	mCoatCost = o.mCoatCost;

	mCoatOwner = nullptr;
	mCoatType = nullptr;

}

Overcoat& Overcoat::operator=(const Overcoat& o)
{
	if (mCoatOwner) {
		delete[] mCoatOwner;
	}
	if (mCoatType) {
		delete[] mCoatType;
	}

	mCoatOwner = copy_str(o.mCoatOwner);
	mCoatType = copy_str(o.mCoatType);
	mCoatCost = o.mCoatCost;

	return *this;
}

Overcoat& Overcoat::operator=(const Overcoat&& o) noexcept
{
	if (mCoatOwner) {
		delete[] mCoatOwner;
	}
	if (mCoatType) {
		delete[] mCoatType;
	}

	mCoatOwner = copy_str(o.mCoatOwner);
	mCoatType = copy_str(o.mCoatType);
	mCoatCost = o.mCoatCost;

	mCoatOwner = nullptr;
	mCoatType = nullptr;

	return *this;
}

void Overcoat::PrintInfo() const
{
	cout << "Coat owner: " << mCoatOwner
		<<"\nCoat type: "<< mCoatType
		<<"\nCoat cost: "<<mCoatCost<< " UAH" 
		<<"\n---------------------------------------" << endl;
}



Overcoat::~Overcoat()
{
	if (mCoatOwner) {
		delete[] mCoatOwner;
	}
	if (mCoatType) {
		delete[] mCoatType;
	}
}