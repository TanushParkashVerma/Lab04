//
// Created by tanus on 2019-10-10.
//

#ifndef LAB04_ANIMAL_HPP
#define LAB04_ANIMAL_HPP

#include <iostream>
#include <cmath>

using namespace std;

class animal {

public:
    long id;
    static int nextID;
    int age;
    bool alive;

    //location
    double x;
    double y;
    double z;


    /*default constructor*/
    animal();


    /*3 parameter constructor.*/
    animal(int age, double x, double y);


    /*virtual move method .*/
    virtual void move(double x, double y);

    /*copy constructor*/
    animal(const animal &a);

    /*destructor method*/
    virtual ~animal();


    /*virtual sleep method*/
    virtual void sleep();


    /*virtual eat method*/
    virtual void eat();


    /*setAlive function which accepts a boolean.*/
    void setAlive(bool alive);

    /*Overload the insertion operator for the animal..*/
    friend ostream &operator<<(ostream &out, const animal &a);


};


#endif //LAB04_ANIMAL_HPP
