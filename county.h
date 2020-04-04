#pragma once
#include "string"
using namespace std;
class Country
{
	string name;
	int quantity;
	string nationality;
public:
	Country() {}
	Country(string name,int quantity,string nationality)
	{
		SetName(name);
		SetQuantity(quantity);
		SetNationality(nationality);
	}
	void SetName(string name)
	{
		this->name = name;
	}
	void SetQuantity(int quantity)
	{
		this->quantity = quantity;
	}
	void SetNationality(string nationality)
	{
		this->nationality = nationality;
	}
	string GetName()
	{
		return name;
	}
	int GetQuantity()
	{
		return quantity;
	}
	string GetNationality()
	{
		return nationality;
	}
};