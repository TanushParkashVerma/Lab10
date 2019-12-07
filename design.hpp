//
// Created by tanus on 2019-12-02.
//

#ifndef LAB10_DESIGN_HPP
#define LAB10_DESIGN_HPP

#include "heap.hpp"
#include <set>
#include <vector>

/*class design*/
class design {
private:
    /*design constructor*/
    design();

public:
    /*getInstance of design and returns design*/
    static design &getInstance() {
        static design designToTest;
        return designToTest;
    }

    /*method test1() to run */
    void test1();

    /*method test2() to run */
    void test2();
};


#endif //LAB10_DESIGN_HPP
