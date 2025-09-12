//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "transform.h"
using namespace std;

static void test_3() {
    const Dataset d("in1.tab");

    // Normalize con medias y desviación conocidas
    const Normalize norm({3.0, 6.0}, {2.0, 4.0});
    const Dataset out1 = d >> norm;
    std::cout << out1;
    std::cout << "---------\n";

    // MinMax con min y max conocidos
    const MinMax mm({1.0, 2.0}, {5.0, 10.0});
    const Dataset out2 = d >> mm;
    std::cout << out2;
}

TEST_CASE("Question #1.3") {
    execute_test("question_1_test_3.in", test_3);
}