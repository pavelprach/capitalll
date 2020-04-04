#pragma once
#include "county.h"
class Capital : public Country
{
    double midage;
public:
    Capital(){}
    Capital(string name, int quantity, string nationality,double midage)
    {
        SetName(name);
        SetQuantity(quantity);
        SetNationality(nationality);
        SetMidage(midage);
    }
    void SetMidage(double midage)
    {
        this->midage = midage;
    }
    double GetMidage()
    {
        return midage;
    }

 };