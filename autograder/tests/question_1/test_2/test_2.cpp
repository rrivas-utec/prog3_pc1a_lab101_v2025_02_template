//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "transform.h"
using namespace std;

static void test_2() {
    const Dataset d("in2.tab");

    // Ajuste automático desde el dataset
    const MinMax mm = MinMax::fit(d);
    const Dataset out = d >> mm;

    std::cout << out;
}

TEST_CASE("Question #1.2") {
    execute_test("question_1_test_2.in", test_2);
}