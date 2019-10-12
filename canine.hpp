//
// Created by tanus on 2019-10-10.
//

#ifndef LAB04_CANINE_HPP
#define LAB04_CANINE_HPP

#include <iostream>
#include <cmath>
#include "animal.hpp"

using namespace std;

class canine : public animal {
public:

    /*default constructor*/
    canine();

    /*3 parameter constructor.*/
    canine(int age, double x, double y);

    /*move method .*/
    void move(double x, double y);

    /*copy constructor*/
    canine(const canine &c);


    /*destructor method*/
    virtual ~canine();


    /*virtual sleep method*/
    virtual void sleep();

    /*virtual eat method*/
    virtual void eat();


    /*hunt method*/
    void hunt(animal *a);

    /*Overload the insertion operator for the canine..*/
    friend ostream &operator<<(ostream &out, const canine &c);
};


#endif //LAB04_CANINE_HPP
