//
// Created by Raoul Rubien on 08.09.16.
//

#include <iostream>

#include "Foo.h"

extern "C" {
    #include "foo.h"
};

int main() {
    std::cout << "Hello, World!" << std::endl;

    Foo f = Foo();
    f.print();

    myprint(42);

    return 0;
}