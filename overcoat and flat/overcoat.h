#pragma once
#include <iostream>
#include "strmetods.h"
using namespace std;

/*
Задание 1
Создать класс Overcoat  (верхняя одежда)

Реализовать перегруженные операторы:

Проверка на равенство типов одежды (операция = =)
Операцию присваивания одного объекта в другой (операция =)
Сравнение по цене двух пальто одного типа (операция >)

*/
#ifndef TASK1
#define TASK1

class Overcoat {
private:
    char* mCoatOwner;
    char* mCoatType;
    double mCoatCost;

public:
    Overcoat();
    Overcoat(const char* coatOwner, const char* coatType, const double coatCost);
    Overcoat(const Overcoat& o);
    Overcoat(Overcoat&& o) noexcept;

    Overcoat& operator=(const Overcoat& o);
    Overcoat& operator=(const Overcoat&& o) noexcept;

    void PrintInfo() const;

    void SetCoatOwner(const char* coatOwner) { mCoatOwner = copy_str(coatOwner); }
    void SetCoatType(const char* coatType){ mCoatType = copy_str(coatType); }
    void SetCoatCost(const double coatCost) { mCoatCost = coatCost; }


    const char* GetCoatOwner() const { return mCoatOwner; }
    const char* GetCoatType() const { return mCoatType; }
    double GetCoatCost() const { return mCoatCost; }


    friend bool operator==(const Overcoat& o1, const Overcoat& o2) { return strcmp(o1.mCoatType, o2.mCoatType) == 0;}
    friend bool operator>(const Overcoat& o1, const Overcoat& o2) { return o1.mCoatCost > o2.mCoatCost; }


    ~Overcoat();
};

#endif//TASK1