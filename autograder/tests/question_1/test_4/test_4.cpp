//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "transform.h"
using namespace std;

static void test_4() {
    try {
        Dataset d("empty.tab");
        Normalize n = Normalize::fit(d);
    } catch(const std::exception& e) {
        std::cout << e.what();
    }
}

TEST_CASE("Question #1.4") {
    execute_test("question_1_test_4.in", test_4);
}