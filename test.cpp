//
// Created by Linus Gasser on 21.09.22.
//
// provides main(); this line is required in only one .cpp file

#include "doctest.h"

//function to be tested
int fact(int n) {
    return n <= 1 ? n : fact(n - 1) * n;
}

TEST_CASE("testing the factorial function") {
    CHECK(fact(0) == 0); // should fail
    CHECK(fact(1) == 1);
    CHECK(fact(2) == 2);
    CHECK(fact(3) == 6);
    CHECK(fact(10) == 3628800);
}