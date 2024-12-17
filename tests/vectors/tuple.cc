#include <iostream>
#include <cassert>
#include <cmath>
#include "vectors/tuple.h"
#include "utils/utils.cc"

void shouldReturnTrueWhenPoint() {
    Tuple point = Point(1.0f, 2.0f, 3.0f);
    assert(compareFloat(point.getX(),1.0f));
    assert(compareFloat(point.getY(),2.0f));
    assert(compareFloat(point.getZ(),3.0f));
    assert(point.getW() == TupleType::POINT);
    std::cout << "✔ shouldReturnTrueWhenPoint\n";
}

void shouldReturnFalseWhenPoint() {
    Tuple notPoint = Vector(1.0f, 2.0f, 3.0f);
    assert(compareFloat(notPoint.getX(),1.0f));
    assert(compareFloat(notPoint.getY(),2.0f));
    assert(compareFloat(notPoint.getZ(),3.0f));
    assert(notPoint.getW() != TupleType::POINT);
    std::cout << "✔ shouldReturnFalseWhenPoint\n";
}

void shouldReturnTrueWhenComparingTuples() {
    Tuple point1 = Point(1.0f, 2.0f, 3.0f);
    Tuple point2 = Point(1.0f, 2.0f, 3.0f);
    assert(compareTuples(point1, point2) == true);
    std::cout << "✔ shouldReturnTrueWhenComparingTuples\n";
}

void shouldReturnFalseWhenComparingTuples() {
    Tuple point1 = Point(1.0f, 2.0f, 3.0f);
    Tuple point2 = Point(3.0f, 2.0f, 1.0f);
    assert(compareTuples(point1, point2) == true);
    std::cout << "✔ shouldReturnFalseWhenComparingTuples\n";
}

void shouldRightValueWhenAddingVectorAndPoint() {
    Tuple vector = Vector(1.0f, 2.0f, 3.0f);
    Tuple point = Point(3.0f, 2.0f, 1.0f);
    Tuple resultTuple = Tuple(4.0f, 4.0f, 4.0f, TupleType::POINT);
    Tuple tupleSum = addTuple(point, vector);
    assert(compareTuples(tupleSum, resultTuple) == true);
    std::cout << "✔ shouldRightValueWhenAddingVectorAndPoint\n";
}

void shouldRightValueWhenAddingVectors() {
    Tuple vector1 = Vector(1.0f, 2.0f, 3.0f);
    Tuple vector2 = Vector(3.0f, 2.0f, 1.0f);
    Tuple resultTuple = Tuple(4.0f, 4.0f, 4.0f, TupleType::VECTOR);
    Tuple tupleSum = addTuple(vector1, vector2);
    assert(compareTuples(tupleSum, resultTuple) == true);
    std::cout << "✔ shouldRightValueWhenAddingVectors\n";
}


void runTupleTests(){
    shouldReturnTrueWhenPoint();
    shouldReturnFalseWhenPoint();
    shouldReturnTrueWhenComparingTuples();
    shouldReturnFalseWhenComparingTuples();
    shouldRightValueWhenAddingVectorAndPoint();
    shouldRightValueWhenAddingVectors();
    std::cout << "-- ALL TUPLE tests passed --\n";

}
