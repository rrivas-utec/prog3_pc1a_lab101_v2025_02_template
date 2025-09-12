//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "transform.h"
using namespace std;

static void test_6() {
    const Dataset d("in3.tab"); // todas las filas iguales
    const Normalize n = Normalize::fit(d);
    Dataset out1 = d >> n;

    const MinMax m = MinMax::fit(d);
    Dataset out2 = d >> m;

}

TEST_CASE("Question #1.6") {
    execute_test("question_1_test_6.in", test_6);
}