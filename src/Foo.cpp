//
// Created by Raoul Rubien on 08.09.16.
//

#include <iostream>

#include "Foo.h"

Foo::Foo() {
    f = 0;
}

void Foo::print() {
    std::cout << "f = " << f << std::endl;
}
