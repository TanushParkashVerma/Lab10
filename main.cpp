//
// Created by tanus on 2019-12-02.
//
#include "design.hpp"

/*Main program */
int main() {
    design &design_Implementation = design::getInstance();
    /*calling test1 to run */
    design_Implementation.test1();

    /*calling test2 to run */
    design_Implementation.test2();
    return 0;
}