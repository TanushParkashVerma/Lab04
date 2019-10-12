//
// Created by tanus on 2019-10-10.
//

#ifndef LAB04_BIRD_HPP
#define LAB04_BIRD_HPP

#include <iostream>
#include <cmath>
#include "animal.hpp"

using namespace std;


class bird : public animal {
public:

    /*default constructor*/
    bird();

    /*3 parameter constructor.*/
    bird(int age, double x, double y, double z);


    /*move method .*/
    void move(double x, double y, double z);

    /*copy constructor*/
    bird(const bird &b);


    /*destructor method*/
    virtual ~bird();


    /*virtual sleep method*/
    virtual void sleep();


    /*virtual eat method*/
    virtual void eat();


    /*Overload the insertion operator for the bird..*/
    friend ostream &operator<<(ostream &out, const bird &b);
};


#endif //LAB04_BIRD_HPP
