#include <math.h>
#include <iostream>

using namespace std;

const float EPSILON =  1.401298E-45f;

inline bool compareFloat(float x, float y){
    return abs(x - y) < EPSILON;
}
