#include <iostream>
#include <cassert>
#include <cmath>
#include "vectors/tuple.h"


void shouldReturnTrueWhenPoint() {
    Tuple point = Point(1.0f, 2.0f, 3.0f);
    assert(point.getX() == 1);
    assert(point.isTuple(TupleType::POINT));
    std::cout << "✔ shouldReturnTrueWhenPoint.\n";
}

void shouldReturnFalseWhenPoint() {
    Tuple notPoint = Vector(1.0f, 2.0f, 3.0f);
    assert(notPoint.getX() != 0);
    assert(notPoint.isTuple(TupleType::VECTOR));
    std::cout << "✔ shouldReturnFalseWhenPoint.\n";
}

void runTupleTests(){
    shouldReturnTrueWhenPoint();
    shouldReturnFalseWhenPoint();
    std::cout << "-- ALL TUPLE tests passed --\n";

}
