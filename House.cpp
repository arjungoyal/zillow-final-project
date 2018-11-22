//
//  House.cpp
//  Zillow_Final_Project
//
//  Created by test on 11/16/18.
//  Copyright © 2018 s. All rights reserved.
//

#include <stdio.h>
#include "House.h"

//Getter Functions
int House::getHouseNo()
{
    return house_no;
}

string House::getAddress()
{
    return address;
}

int House::getBedrooms()
{
    return bedrooms;
}
float House::getBathrooms()
{
    return bathrooms;
}
int House::getPrice()
{
    return price;
}
int House::getSquareFootage()
{
    return square_footage;
}


//Setter Functions
void House::setHouseNo(int h_no)
{
    house_no = h_no;
}

void House::setAddress(string add)
{
    address = add;
}

void House::setBedrooms(int bed)
{
    bedrooms = bed;
}

void House::setBathrooms(float bath)
{
    bathrooms = bath;
}

void House::setPrice(int pr)
{
    price = pr;
}

void House::setSquareFootage(int sq_ft)
{
    square_footage = sq_ft;
}


