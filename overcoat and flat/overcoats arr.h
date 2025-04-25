#pragma once
#include <iostream>
#include <algorithm>
#include "strmetods.h"
#include "overcoat.h"
using namespace std;


/*
��������� : ������� ����� �����, ���������� �� �����
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
	//��������� : ������� ����� �����, ���������� �� �����

	void PrintInfo()const;

	~Overcoats();
};