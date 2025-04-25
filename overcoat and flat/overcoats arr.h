#pragma once
#include <iostream>
#include <algorithm>
#include "strmetods.h"
#include "overcoat.h"
using namespace std;


/*
Додатково : створіть масив одягу, відсортуйте за ціною
*/
class Overcoats {
private:
	Overcoat** mClothes = nullptr;
	size_t mOvercoatCount = 0;

public:
	Overcoats() = default;

	void AddNewCoat(const Overcoat& sample);
	Overcoats(const Overcoats& other);
	Overcoats(Overcoats&& other) noexcept;

	Overcoats& operator=(const Overcoats& other);
	Overcoats& operator=(Overcoats&& other) noexcept;

	void SortByPriceDescending();
	//Додатково : створіть масив одягу, відсортуйте за ціною

	void PrintInfo()const;

	~Overcoats();
};