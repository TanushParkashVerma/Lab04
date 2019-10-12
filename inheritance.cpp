#include <iostream>
#include "animal.hpp"
#include "bird.hpp"
#include "canine.hpp"


int animal::nextID = 100;

int main() {

    animal *a1 = new animal(5, 55.2, 33.5);
    cout << *a1;


    bird *b1 = new bird(10, 30, 15, 20);;
    cout << *b1;


    canine *c1 = new canine(15, 2, 60);
    cout << *c1;

    a1->move(20, 50);
    c1->move(21, 49);

    cout << *a1 << *c1;

    a1->eat();
    b1->sleep();
    c1->sleep();

    /* Hunting*/
    cout << "\n";
    animal *a;
    a = a1;
    c1->hunt(a);

    cout << "After hunting :\n";

    cout << *a1 << "\n";

    cout << *c1 << "\n";


    return 0;
}