#include <math.h>
#include <iostream>

using namespace std;

const float EPSILON =  1.401298E-45f;

inline bool compareFloat(float x, float y){
    return abs(x - y) < EPSILON;
}

inline float roundToFourDecimal(float value) {
    return std::round(value * 10000.0f) / 10000.0f;
}
