#include <iostream>
#include <cassert>
#include <cmath>
#include "vectors/tuple.h"
#include "utils/utils.cc"

void shouldReturnTrueWhenPoint() {
    Tuple point = Point(1.0f, 2.0f, 3.0f);
    assert(compareFloat(point.getX(),1.0f) == true);
    assert(compareFloat(point.getY(),2.0f) == true);
    assert(compareFloat(point.getZ(),3.0f) == true);
    assert(point.isTuplePoint() == true);
    std::cout << "✔ shouldReturnTrueWhenPoint\n";
}

void shouldReturnFalseWhenPoint() {
    Tuple notPoint = Vector(1.0f, 2.0f, 3.0f);

    assert(compareFloat(notPoint.getX(),1.0f) == true);
    assert(compareFloat(notPoint.getY(),2.0f) == true);
    assert(compareFloat(notPoint.getZ(),3.0f) == true);
    assert(notPoint.isTuplePoint() == false);
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

    assert(compareTuples(point1, point2) == false);
    std::cout << "✔ shouldReturnFalseWhenComparingTuples\n";
}

void shouldReturnRightValueWhenAddingVectorAndPoint() {
    Tuple vector = Vector(3.0f, -2.0f, 5.0f);
    Tuple point = Point(-2.0f, 3.0f, 1.0f);
    Tuple resultTuple = Tuple(1.0f, 1.0f, 6.0f, POINT);
    Tuple tupleSum = addTuple(point, vector);

    assert(compareTuples(tupleSum, resultTuple) == true);
    std::cout << "✔ shouldRightValueWhenAddingVectorAndPoint\n";
}

void shoulReturndRightValueWhenAddingVectors() {
    Tuple vector1 = Vector(1.0f, 2.0f, 3.0f);
    Tuple vector2 = Vector(3.0f, 2.0f, 1.0f);
    Tuple resultTuple = Tuple(4.0f, 4.0f, 4.0f, VECTOR);
    Tuple tupleSum = addTuple(vector1, vector2);

    assert(compareTuples(tupleSum, resultTuple) == true);
    std::cout << "✔ shouldRightValueWhenAddingVectors\n";
}


void shouldReturnRightValueWhenSubtractingVectorFromPoint() {
    Tuple point = Point(3.0f, 2.0f, 1.0f);
    Tuple vector = Vector(5.0f, 6.0f, 7.0f);
    Tuple resultTuple = Tuple(-2.0f, -4.0f, -6.0f, POINT);
    Tuple tupleSub = subtractTuple(point, vector);

    assert(compareTuples(tupleSub, resultTuple) == true);
    std::cout << "✔ shouldReturnRightValueWhenSubtractingVectorFromPoint\n";
}

void shouldReturnRightValueWhenSubtractingTwoPoints() {
    Tuple point1 = Point(3.0f, 2.0f, 1.0f);
    Tuple point2 = Point(5.0f, 6.0f, 7.0f);
    Tuple resultTuple = Tuple(-2.0f, -4.0f, -6.0f, VECTOR);
    Tuple tupleSub = subtractTuple(point1, point2);

    assert(compareTuples(tupleSub, resultTuple) == true);
    std::cout << "✔ shouldReturnRightValueWhenSubtractingTwoPoints\n";
}

void shouldReturnRightValueWhenSubtractingTwoVectors() {
    Tuple vector1 = Vector(3.0f, 2.0f, 1.0f);
    Tuple vector2 = Vector(5.0f, 6.0f, 7.0f);
    Tuple resultTuple = Tuple(-2.0f, -4.0f, -6.0f, VECTOR);
    Tuple tupleSub = subtractTuple(vector1, vector2);

    assert(compareTuples(tupleSub, resultTuple) == true);
    std::cout << "✔ shoulReturndRightValueWhenSubtractingTwoVectors\n";
}

void shouldReturnNegatedTuple(){
    Tuple vector = Vector(1.0f ,-2.0f ,3.0f);
    Tuple tuple = Tuple(1.0f ,-2.0f ,3.0f, -4.0f);

    Tuple negatedVector = negateTuple(vector);
    Tuple negatedTuple = negateTuple(tuple);

    Tuple resultVector = Vector(-1.0f, 2.0f, -3.0f);
    Tuple resultTuple = Tuple(-1.0f, 2.0f, -3.0f, 4.0f);

    assert(compareTuples(negatedVector, resultVector) == true);
    assert(compareTuples(negatedTuple, resultTuple) == true);
    std::cout << "✔ shouldReturnNegatedTuple\n";
}

void shouldReturnNegatedTupleOperador(){
    Tuple vector = Vector(1.0f ,-2.0f ,3.0f);
    Tuple tuple = Tuple(1.0f ,-2.0f ,3.0f, -4);

    Tuple negatedVector = -vector;
    Tuple negatedTuple = -tuple;

    Tuple resultVector = Vector(-1.0f, 2.0f, -3.0f);
    Tuple resultTuple = Tuple(-1.0f, 2.0f, -3.0f, 4);

    assert(compareTuples(negatedVector, resultVector) == true);
    assert(compareTuples(negatedTuple, resultTuple) == true);
    std::cout << "✔ shouldReturnNegatedTupleOperador\n";
}

void shouldScaleTupleByScalar(){
    Tuple tuple1 = Tuple(1.0f, -2.0f, 3.0f, -4.0f);

    Tuple mutipliedTuple = scalarTuple(tuple1, 3.5);
    Tuple result = Tuple(3.5f, -7.0f, 10.5f, -14.0f);

    assert(compareTuples(mutipliedTuple, result));
    std::cout << "✔ shouldScaleTuple\n";
}

void shouldScaleTupleByFraction(){
    Tuple tuple1 = Tuple(1.0f, -2.0f, 3.0f, -4.0f);

    Tuple mutipliedTuple = scalarTuple(tuple1, 0.5);
    Tuple result = Tuple(0.5f, -1.0f, 1.5f, -2.0f);

    assert(compareTuples(mutipliedTuple, result));
    std::cout << "✔ shouldScaleTupleByFraction\n";
}

void shouldCalculateMagnitudeFromVector1(){

    Tuple vector = Vector(1.0f, 0.0f, 0.0f);

    float magnitudeResult = magnitude(vector);

    assert(compareFloat(magnitudeResult, 1.0f));
    std::cout << "✔ shouldCalculateMagnitudeFromVector1\n";
}


void shouldCalculateMagnitudeFromVector2(){

    Tuple vector = Vector(0.0f, 1.0f, 0.0f);

    float magnitudeResult = magnitude(vector);

    assert(compareFloat(magnitudeResult, 1.0f));
    std::cout << "✔ shouldCalculateMagnitudeFromVector2\n";
}


void shouldCalculateMagnitudeFromVector3(){

    Tuple vector = Vector(0.0f, 0.0f, 1.0f);

    float magnitudeResult = magnitude(vector);

    assert(compareFloat(magnitudeResult, 1.0f));
    std::cout << "✔ shouldCalculateMagnitudeFromVector3\n";
}


void shouldCalculateMagnitudeFromVector4(){

    Tuple vector = Vector(1.0f, 2.0f, 3.0f);

    float magnitudeResult = magnitude(vector);

    assert(compareFloat(magnitudeResult, 1.0f));
    std::cout << "✔ shouldCalculateMagnitudeFromVector4\n";
}

void shouldCalculateMagnitudeFromVector5(){

    Tuple vector = Vector(-1.0f, -2.0f, -3.0f);

    float magnitudeResult = magnitude(vector);

    assert(compareFloat(roundToFourDecimal(magnitudeResult), 1.0f));
    std::cout << "✔ shouldCalculateMagnitudeFromVector5\n";
}



void runTupleTests(){
    shouldReturnTrueWhenPoint();
    shouldReturnFalseWhenPoint();
    shouldReturnTrueWhenComparingTuples();
    shouldReturnFalseWhenComparingTuples();
    shouldReturnRightValueWhenAddingVectorAndPoint();
    shoulReturndRightValueWhenAddingVectors();
    shouldReturnRightValueWhenSubtractingVectorFromPoint();
    shouldReturnRightValueWhenSubtractingTwoPoints();
    shouldReturnRightValueWhenSubtractingTwoVectors();
    shouldReturnNegatedTuple();
    shouldReturnNegatedTupleOperador();
    shouldScaleTupleByScalar();
    shouldScaleTupleByFraction();
    shouldCalculateMagnitudeFromVector1();
    shouldCalculateMagnitudeFromVector2();
    shouldCalculateMagnitudeFromVector3();
    shouldCalculateMagnitudeFromVector4();
    shouldCalculateMagnitudeFromVector5();
    std::cout << "-- ALL TUPLE tests passed --\n";

}
