#include <iostream>

#include "login.h"

int main() {
    Login l1{"Celeste", "star"};
    Login l1{"Rarity", "star"};
    Login l1{"Celeste", "rainbow"};
    Login l1{"Celeste", "star"};
    std::cout << (l1 == l2) << (l1 == l3) << (l1 == l4) << '\n';
}