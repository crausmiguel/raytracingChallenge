#include <iostream>
#include "vectors/tuple.cc"

void runTests(){
    std::cout << "-- Running ALL tests --\n";
    runTupleTests();
    std::cout << "-- ALL tests passed --\n";

}

int main() {
    runTests();
}
