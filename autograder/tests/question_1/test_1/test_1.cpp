//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "transform.h"
using namespace std;

static void test_1() {
    const Dataset d("in1.tab");

    // Ajuste automático desde el dataset
    const Normalize norm = Normalize::fit(d);
    const Dataset out = d >> norm;

    std::cout << out;
}

TEST_CASE("Question #1.1") {
    execute_test("question_1_test_1.in", test_1);
}