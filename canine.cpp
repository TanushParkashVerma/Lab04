//
// Created by tanus on 2019-10-10.
//

#include "canine.hpp"

/*default constructor*/
canine::canine() {
    age = 0;
    x = 0;
    y = 0;
}

/*3 parameter constructor.*/
canine::canine(int age, double x, double y) : animal(age, x, y) {

}

/*move method .*/
void canine::move(double x, double y) {
    animal::move(x, y);
}

/*copy constructor*/
canine::canine(const canine &c) {
    age = c.age;
    id = c.id;
    alive = c.alive;
    x = c.x;
    y = c.y;
}

/*destructor method*/
canine::~canine() {
    cout << "Canine Destructor : " << id << ",\n";
}

/*virtual sleep method*/
void canine::sleep() {
    cout << "Canine " << id << " is Sleeping.\n";
}

/*virtual eat method*/
void canine::eat() {
    cout << "Canine " << id << " is Eating.\n";
}

/*hunt method*/
void canine::hunt(animal *a) {
    double d1, d2, d3;
    d1 = abs(a->x - x);
    d2 = abs(a->y - y);
    d3 = abs(a->z - z);

    if (d1 <= 1 && d2 <= 1 && d3 <= 1) {
        a->setAlive(0);
        cout << "Hunt Successful\n";
    } else {
        cout << "Hunt Unsuccessful\n";
    }
}

/*Overload the insertion operator for the canine..*/
ostream &operator<<(ostream &out, const canine &c) {
    out << "ID: " << c.id << endl;
    out << "Age: " << c.age << endl;
    out << "Alive: ";
    if (c.alive == 1) {
        out << "Yes" << endl;
    } else {
        out << "No" << endl;
    }
    out << "Coordinates: " << c.x << " " << c.y << " " << c.z << endl;
    out << endl;
    return out;
}


