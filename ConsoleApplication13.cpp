

#include <iostream>
#include "capital.h"
#include "county.h"

int main()
{
    Capital moskva;
    Capital london;
    Capital pekin;
    moskva.SetName("moskva");
    london.SetName("london");
    pekin.SetName("pekin");
    moskva.SetQuantity(100);
    london.SetQuantity(150);
    pekin.SetQuantity(200);
    double a, b, c;
    a = moskva.GetQuantity();
    b = london.GetQuantity();
    c = pekin.GetQuantity();
    if (a > b&& a > c) {
        cout << moskva.GetName();
    }
    else if (b > c&& b > a) {
        cout << london.GetMidage();
    }
    else if (c > a&& c > b) {
        cout << pekin.GetName();
    }

}

