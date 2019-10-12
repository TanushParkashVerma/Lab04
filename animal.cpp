//
// Created by tanus on 2019-10-10.
//

#include "animal.hpp"

/*default constructor*/
animal::animal() {
    age = 0;
    id = 0;
    alive = 1;
    x = 0;
    y = 0;
    z = 0;
    id = ++nextID;
}


/*3 parameter constructor.*/
animal::animal(int age, double x, double y) {
    this->age = age;
    this->x = x;
    this->y = y;
    z = 0;
    id = ++nextID;
}


/*virtual move method .*/
void animal::move(double x, double y) {
    this->x = x;
    this->y = y;
}


/*copy constructor*/
animal::animal(const animal &a) {
    age = a.age;
    id = a.id;
    alive = a.alive;
    x = a.x;
    y = a.y;
    z = 0;
}


/*destructor method*/
animal::~animal() {
    cout << "Animal Destructor : " << id << ",\n";
}


/*virtual sleep method*/
void animal::sleep() {
    cout << "Animal " << id << " is Sleeping.\n";
}

/*virtual eat method*/
void animal::eat() {
    cout << "Animal " << id << " is Eating.\n";
}


/*setAlive function which accepts a boolean.*/
void animal::setAlive(bool alive) {
    this->alive = alive;
}

/*Overload the insertion operator for the animal..*/
ostream &operator<<(ostream &out, const animal &a) {
    out << "ID: " << a.id << endl;
    out << "Age: " << a.age << endl;
    out << "Alive: ";
    if (a.alive == 1) {
        out << "Yes" << endl;
    } else {
        out << "No" << endl;
    }
    out << "Coordinates: " << a.x << " " << a.y << " " << a.z << endl;
    out << endl;
    return out;
}
