//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "transform.h"
using namespace std;

static void test_5() {
    const Dataset d("in1.tab");
    const Sample s = d[0];
    std::cout << s.features.size();
}

TEST_CASE("Question #1.5") {
    execute_test("question_1_test_5.in", test_5);
}