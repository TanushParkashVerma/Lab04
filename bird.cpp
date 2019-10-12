//
// Created by tanus on 2019-10-10.
//

#include "bird.hpp"


/*default constructor*/
bird::bird() {
    age = 0;
    x = 0;
    y = 0;
    z = 0;

}


/*3 parameter constructor.*/
bird::bird(int age, double x, double y, double z) {
    this->age = age;
    this->x = x;
    this->y = y;
    this->z = z;

}

/*move method .*/
void bird::move(double x, double y, double z) {
    this->x = x;
    this->y = y;
    this->z = z;

}

/*copy constructor*/
bird::bird(const bird &b) {
    age = b.age;
    id = b.id;
    alive = b.alive;
    x = b.x;
    y = b.y;
    z = b.z;

}

/*destructor method*/
bird::~bird() {
    cout << "Bird Destructor : " << id << ",\n";
}

/*virtual sleep method*/
void bird::sleep() {
    cout << "Bird " << id << " is Sleeping.\n";
}

/*virtual eat method*/
void bird::eat() {
    cout << "Bird " << id << " is Eating.\n";
}


/*Overload the insertion operator for the bird..*/
ostream &operator<<(ostream &out, const bird &b) {
    out << "ID: " << b.id << endl;
    out << "Age: " << b.age << endl;
    out << "Alive: ";
    if (b.alive == 1) {
        out << "Yes" << endl;
    } else {
        out << "No" << endl;
    }
    out << "Coordinates: " << b.x << " " << b.y << " " << b.z << endl;
    out << endl;
    return out;
}
