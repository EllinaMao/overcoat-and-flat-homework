#include "overcoats arr.h"


void Overcoats::AddNewCoat(const Overcoat& sample)
{

    size_t newCount = mOvercoatCount + 1;
    Overcoat** temp = new Overcoat* [newCount];

    for (size_t i = 0; i < mOvercoatCount; i++) {
        temp[i] = mClothes[i];
    }

    temp[newCount - 1] = new Overcoat(sample);

    if (mClothes) {
        delete[] mClothes; 
    }

    mClothes = temp;
    mOvercoatCount = newCount;
}

Overcoats::Overcoats(const Overcoats& other)
{
    mOvercoatCount = other.mOvercoatCount;

    mClothes = new Overcoat* [mOvercoatCount];
    for (size_t i = 0; i < mOvercoatCount; ++i) {
        mClothes[i] = new Overcoat(*other.mClothes[i]);
    }
}

Overcoats::Overcoats(Overcoats&& other) noexcept
    :  mClothes(other.mClothes), mOvercoatCount(other.mOvercoatCount)
{
    other.mOvercoatCount = 0;
    other.mClothes = nullptr;
}

Overcoats& Overcoats::operator=(const Overcoats& other)
{
    if (this == &other) {
        return *this; 
    }

    for (size_t i = 0; i < mOvercoatCount; ++i) {
        delete mClothes[i];
    }
    delete[] mClothes;

    mOvercoatCount = other.mOvercoatCount;
    mClothes = new Overcoat*[mOvercoatCount];
    for (size_t i = 0; i < mOvercoatCount; ++i) {
        mClothes[i] = new Overcoat(*other.mClothes[i]);
    }

    return *this;
}

Overcoats& Overcoats::operator=(Overcoats&& other) noexcept
{
    if (this != &other) {
        for (size_t i = 0; i < mOvercoatCount; ++i) {
            delete mClothes[i];
        }
        delete[] mClothes;

        mClothes = other.mClothes;
        mOvercoatCount = other.mOvercoatCount;

        other.mClothes = nullptr;
        other.mOvercoatCount = 0;
    }
    return *this;
}


void Overcoats::SortByPriceDescending() {
    if (mClothes == nullptr || mOvercoatCount == 0) {
        return; // Если массив пуст, ничего не делаем
    }

    // Сортировка массива mClothes по убыванию цены
    std::sort(mClothes, mClothes + mOvercoatCount, [](const Overcoat* a, const Overcoat* b) {
        return a->GetCoatCost() > b->GetCoatCost();
        });
}


void Overcoats::PrintInfo() const
{
    for (size_t i = 0; i < mOvercoatCount; ++i) {
        mClothes[i]->PrintInfo();
    }
}



Overcoats::~Overcoats()
{
    for (size_t i = 0; i < mOvercoatCount; ++i) {
        delete mClothes[i];
    }
    delete[] mClothes;

    mClothes = nullptr;
    mOvercoatCount = 0;
}


